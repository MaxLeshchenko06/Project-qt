#include "clientswindow.h"
#include "ui_clientswindow.h"

ClientsWindow::ClientsWindow(QSqlDatabase db, QVector<Client*>& clientBase, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientsWindow),
    base{clientBase},
    db{db}
{
    ui->setupUi(this);
    query = new QSqlQuery(db);
    showAllClients();
}

ClientsWindow::~ClientsWindow()
{
    delete ui;
}

void ClientsWindow::showAllClients()
{
    ui->tableWidget->setRowCount(base.size());
    for(int i = 0; i < base.size(); i++){
        QTableWidgetItem* itemId = new QTableWidgetItem(QString().setNum(base[i]->getId()));
        QTableWidgetItem* itemName = new QTableWidgetItem(base[i]->getName());
        QTableWidgetItem* itemDiscount = new QTableWidgetItem(QString().setNum(base[i]->getDiscount()));
        QTableWidgetItem* itemPhone = new QTableWidgetItem(base[i]->getPhone());
        QTableWidgetItem* itemType = new QTableWidgetItem(base[i]->getType());

        itemId->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        itemName->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        itemDiscount->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        itemPhone->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        itemType->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        ui->tableWidget->setItem(i, 0, itemId);
        ui->tableWidget->setItem(i, 1, itemName);
        ui->tableWidget->setItem(i, 2, itemDiscount);
        ui->tableWidget->setItem(i, 3, itemPhone);
        ui->tableWidget->setItem(i, 4, itemType);
    }
}

void ClientsWindow::on_pushButton_clicked()
{
    try{
    QString name = ui->lineEdit->text();
    int discount = ui->spinBox->value();
    QString phone = ui->lineEdit_2->text();
    if(name == "" || phone == "")
        throw new EmptyValues();
    for(int i = 0; i < base.size(); i++)
        if(phone == base[i]->getPhone())
            throw new RepeatingValues();
    QString type = ui->comboBox->currentText();

    query->prepare("INSERT INTO clients ([Full name], Discount, Phone, [type])"
                   " VALUES (:name, :discount, :phone, :type ); ");
    query->bindValue(":name", name);
    query->bindValue(":discount", discount);
    query->bindValue(":phone", phone);
    query->bindValue(":type", type);
    query->exec();
    query->prepare("SELECT Id FROM clients WHERE Phone = :phone");
    query->bindValue(":phone", phone);
    query->exec();
    query->next();
    int id = query->value(0).toInt();
    if(type == "static")
        base.push_back(new StaticClient(id, name, discount, phone));
    else
        base.push_back(new GrowingClient(id, name, discount, phone));
    showAllClients();
    ui->lineEdit->clear();
    ui->spinBox->setValue(0);
    ui->lineEdit_2->clear();
    ui->comboBox->setCurrentIndex(0);
    }
    catch(Exception* obj){
        obj->showMsg(this);
    }
}


void ClientsWindow::on_tableWidget_itemDoubleClicked(QTableWidgetItem *item)
{
    editForm = new DialogEditClient(item->row(), base, db, this);
    editForm->exec();
}

