#include "dialogedititem.h"
#include "ui_dialogedititem.h"

DialogEditItem::DialogEditItem(int index, QVector<Product*>& base, QSqlDatabase db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogEditItem),
    index{index},
    base{base}
{
    ui->setupUi(this);
    ui->lineEdit->setText(QString().setNum(base[index]->getId()));
    ui->lineEdit_2->setText(base[index]->getName());
    ui->doubleSpinBox->setValue(base[index]->getPrice());
    ui->spinBox->setValue(base[index]->getCount());
    ui->lineEdit_3->setText(base[index]->getCode());

    for(int i = 0; i < ui->comboBox->count(); i++)
        if(ui->comboBox->itemText(i) == base[index]->getType())
            ui->comboBox->setCurrentIndex(i);

    ui->dateEdit->setDate(base[index]->getDateAdded());
    ui->dateEdit_2->setDate(base[index]->getDateOfChange());
    query = new QSqlQuery(db);
    connect(this,SIGNAL(valueChanged()),parent,SLOT(showAllProducts()));
}

DialogEditItem::~DialogEditItem()
{
    delete ui;
}

void DialogEditItem::on_pushButton_3_clicked()
{
    this->close();
}


void DialogEditItem::on_pushButton_clicked()
{
    QString name = ui->lineEdit_2->text();
    float price = ui->doubleSpinBox->value();
    int count = ui->spinBox->value();
    QString code = ui->lineEdit_3->text();
    QString type = ui->comboBox->currentText();

    query->prepare("UPDATE products SET Name = :name, Price = :price, Count = :count, Code = :code, Type = :type WHERE Id = :id");
    query->bindValue(":name", name);
    query->bindValue(":price", price);
    query->bindValue(":count", count);
    query->bindValue(":code", code);
    query->bindValue(":type", type);
    query->bindValue(":id", base[index]->getId());
    query->exec();

    base[index]->setName(name);
    base[index]->setPrice(price);
    base[index]->setCount(count);
    base[index]->setCode(code);
    base[index]->setType(type);
    valueChanged();
    this->close();
}


void DialogEditItem::on_pushButton_2_clicked()
{
    query->prepare("DELETE FROM products WHERE Id = :id");
    query->bindValue(":id", base[index]->getId());
    query->exec();

    base.remove(index);
    valueChanged();
    this->close();
}

