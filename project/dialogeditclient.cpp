#include "dialogeditclient.h"
#include "ui_dialogeditclient.h"

DialogEditClient::DialogEditClient(int index, QVector<Client*>& base, QSqlDatabase db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogEditClient),
    index{index},
    base{base}
{
    ui->setupUi(this);
    ui->lineEdit->setText(QString().setNum(base[index]->getId()));
    ui->lineEdit_2->setText(base[index]->getName());
    ui->spinBox->setValue(base[index]->getDiscount());
    ui->lineEdit_3->setText(base[index]->getPhone());
    ui->lineEdit_4->setText(base[index]->getType());
    query = new QSqlQuery(db);
    connect(this,SIGNAL(valueChanged()),parent,SLOT(showAllClients()));
}

DialogEditClient::~DialogEditClient()
{
    delete ui;
}

void DialogEditClient::on_pushButton_clicked()
{
    try{
        QString name = ui->lineEdit_2->text();
        int discount = ui->spinBox->value();
        QString phone = ui->lineEdit_3->text();
        if(name == "" || phone == "")
            throw new EmptyValues();
        for(int i = 0; i < base.size(); i++)
            if(phone == base[i]->getPhone() && i != index)
                throw new RepeatingValues();
        query->prepare("UPDATE clients SET [Full name] = :name, Discount = :discount, Phone = :phone WHERE Id = :id");
        query->bindValue(":name", name);
        query->bindValue(":discount", discount);
        query->bindValue(":phone", phone);
        query->bindValue(":id", base[index]->getId());
        query->exec();
        base[index]->setName(name);
        base[index]->setDiscount(discount);
        base[index]->setPhone(phone);
        valueChanged();
        this->close();
    }
    catch(Exception* obj){
        obj->showMsg(this);
    }
}


void DialogEditClient::on_pushButton_3_clicked()
{
    this->close();
}


void DialogEditClient::on_pushButton_2_clicked()
{
    query->prepare("DELETE FROM clients WHERE Id = :id");
    query->bindValue(":id", base[index]->getId());
    query->exec();

    base.remove(index);
    valueChanged();
    this->close();
}

