#include "cashregister.h"
#include "ui_cashregister.h"

void CashRegister::showAllProducts()
{
    ui->tableWidget_2->setRowCount(list.size());
    for(int i = 0; i < list.size(); i++){
        QTableWidgetItem* itemId = new QTableWidgetItem(QString().setNum(list[i]->getId()));
        QTableWidgetItem* itemName = new QTableWidgetItem(list[i]->getName());
        QTableWidgetItem* itemCount = new QTableWidgetItem(QString().setNum(list[i]->getCount()));
        QTableWidgetItem* itemPrice = new QTableWidgetItem(QString().setNum(list[i]->getPrice()));
        QTableWidgetItem* itemCode = new QTableWidgetItem(list[i]->getCode());
        QTableWidgetItem* itemType = new QTableWidgetItem(list[i]->getType());

        itemId->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        itemName->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        itemCount->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        itemPrice->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        itemCode->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        itemType->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        ui->tableWidget_2->setItem(i, 0, itemId);
        ui->tableWidget_2->setItem(i, 1, itemName);
        ui->tableWidget_2->setItem(i, 2, itemCount);
        ui->tableWidget_2->setItem(i, 3, itemPrice);
        ui->tableWidget_2->setItem(i, 4, itemCode);
        ui->tableWidget_2->setItem(i, 5, itemType);
    }
}

CashRegister::CashRegister(QSqlDatabase db, QVector<Client*>& clientBase, QVector<Product*>& base, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CashRegister),
    db{db},
    clientBase{clientBase},
    base{base}
{
    ui->setupUi(this);
    query = new QSqlQuery(db);
    connect(this,SIGNAL(valueChanged()),parent,SLOT(getProductsFromDB()));
}

CashRegister::~CashRegister()
{
    delete ui;
}

void CashRegister::on_pushButton_2_clicked()
{
    QString code = ui->lineEdit_2->text();
    int count = ui->spinBox->value();

    for(int i = 0; i < base.size(); i++){
        if(code == base[i]->getCode()){
            if(count > base[i]->getCount()){
                QMessageBox::about(this, "Error", "Too many");
                return;
            }
            else{
                for(int j = 0; j < list.size(); j++){
                    if(code == list[j]->getCode()){
                        if(count + list[j]->getCount() > base[i]->getCount()){
                            QMessageBox::about(this, "Error", "Too many");
                            return;
                        }
                        else{
                            list[j]->setCount(list[j]->getCount() + count);
                            showAllProducts();
                            ui->lineEdit_2->clear();
                            ui->spinBox->setValue(1);
                            return;
                        }
                    }
                }
                list.push_back(new Product(base[i]->getId(), base[i]->getName(), base[i]->getPrice(), count,
                                           base[i]->getType(), code, base[i]->getDateAdded(), base[i]->getDateOfChange()));
                showAllProducts();
                ui->lineEdit_2->clear();
                ui->spinBox->setValue(1);
                return;
            }
        }
    }
    QMessageBox::about(this, "Alert", "Not found");
}


void CashRegister::on_pushButton_clicked()
{
    QString phone = ui->lineEdit->text();
    for(int i = 0; i < clientBase.size(); i++){
        if(phone == clientBase[i]->getPhone()){
            ui->tableWidget->setRowCount(1);
            QTableWidgetItem* itemId = new QTableWidgetItem(QString().setNum(clientBase[i]->getId()));
            QTableWidgetItem* itemName = new QTableWidgetItem(clientBase[i]->getName());
            QTableWidgetItem* itemDiscount = new QTableWidgetItem(QString().setNum(clientBase[i]->getDiscount()));
            QTableWidgetItem* itemPhone = new QTableWidgetItem(clientBase[i]->getPhone());
            QTableWidgetItem* itemType = new QTableWidgetItem(clientBase[i]->getType());

            itemId->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
            itemName->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
            itemDiscount->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
            itemPhone->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
            itemType->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

            ui->tableWidget->setItem(0, 0, itemId);
            ui->tableWidget->setItem(0, 1, itemName);
            ui->tableWidget->setItem(0, 2, itemDiscount);
            ui->tableWidget->setItem(0, 3, itemPhone);
            ui->tableWidget->setItem(0, 4, itemType);
            ui->lineEdit->clear();
            return;
        }
    }
    QMessageBox::about(this, "Alert", "Not found");
}


void CashRegister::on_pushButton_5_clicked()
{
    ui->tableWidget->setRowCount(0);
}


void CashRegister::on_pushButton_4_clicked()
{
    this->close();
}


void CashRegister::on_pushButton_3_clicked()
{
    float fullPrice = 0.0;
    for(int i = 0; i < list.size(); i++)
        fullPrice += list[i]->getPrice() * list[i]->getCount();
    if(ui->tableWidget->rowCount() == 1){
        for(int i = 0; i < clientBase.size(); i++){
            if(clientBase[i]->getId() == ui->tableWidget->item(0, 0)->text().toInt()){
                fullPrice = clientBase[i]->sale(fullPrice);
                break;
            }
        }
    }
    QMessageBox::about(this, "Message", "To pay: " + QString().setNum(fullPrice));
    for(int i = 0; i < list.size(); i++){
        query->prepare("UPDATE products SET Count = :count WHERE Id = :id");
        for(int j = 0; j < base.size(); j++){
            if(base[j]->getId() == list[i]->getId()){
                query->bindValue(":count", base[j]->getCount() - list[i]->getCount() );
                break;
            }
        }
        query->bindValue(":id", list[i]->getId());
        query->exec();
    }
    valueChanged();
    this->close();
}

