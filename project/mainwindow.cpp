#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./shop.db");
    query = new QSqlQuery();
    if(db.open()){
        ui->statusbar->showMessage("open");
    }
    else{
        ui->statusbar->showMessage("open");
    }
    getProductsFromDB();
    showAllProducts();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getProductsFromDB()
{
    query->exec("SELECT * FROM products");
    while(query->next()){
        int id = query->value(0).toInt();
        QString name = query->value(1).toString();
        float price = query->value(2).toFloat();
        int count = query->value(3).toInt();
        QString code = query->value(4).toString();
        QString type = query->value(5).toString();
        QDate dateAdded = QDate::fromString(query->value(6).toString(), "dd.MM.yyyy");
        QDate dateOfChange = QDate::fromString(query->value(7).toString(), "dd.MM.yyyy");

        Product* obj = new Product(id, name, price, count, type, code, dateAdded, dateOfChange);
        base.push_back(obj);
    }
}

void MainWindow::showAllProducts()
{
    ui->tableWidget->setRowCount(base.size());
    for(int i = 0; i < base.size(); i++){
        QTableWidgetItem* itemId = new QTableWidgetItem(QString().setNum(base[i]->getId()));
        QTableWidgetItem* itemName = new QTableWidgetItem(base[i]->getName());
        QTableWidgetItem* itemPrice = new QTableWidgetItem(QString().setNum(base[i]->getPrice()));
        QTableWidgetItem* itemCount = new QTableWidgetItem(QString().setNum(base[i]->getCount()));
        QTableWidgetItem* itemCode = new QTableWidgetItem(base[i]->getCode());
        QTableWidgetItem* itemType = new QTableWidgetItem(base[i]->getType());
        QTableWidgetItem* itemDateAdded = new QTableWidgetItem(base[i]->getDateAdded().toString("dd.MM.yyyy"));
        QTableWidgetItem* itemDateOfChange = new QTableWidgetItem(base[i]->getDateOfChange().toString("dd.MM.yyyy"));

        itemId->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        itemName->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        itemPrice->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        itemCount->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        itemCode->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        itemType->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        itemDateAdded->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        itemDateOfChange->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);

        ui->tableWidget->setItem(i, 0, itemId);
        ui->tableWidget->setItem(i, 1, itemName);
        ui->tableWidget->setItem(i, 2, itemPrice);
        ui->tableWidget->setItem(i, 3, itemCount);
        ui->tableWidget->setItem(i, 4, itemCode);
        ui->tableWidget->setItem(i, 5, itemType);
        ui->tableWidget->setItem(i, 6, itemDateAdded);
        ui->tableWidget->setItem(i, 7, itemDateOfChange);
    }
}

void MainWindow::on_tableWidget_itemDoubleClicked(QTableWidgetItem *item)
{
    editForm = new DialogEditItem(item->row(), base, db, this);
    editForm->show();
    editForm->setAttribute(Qt::WA_DeleteOnClose);

}


