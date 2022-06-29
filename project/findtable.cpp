#include "findtable.h"
#include "ui_findtable.h"

void FindTable::showAllProducts()
{
    int i;
    ui->tableWidget->setRowCount(index.size());
    for(int j = 0; j < index.size(); j++){
        i = index[j];
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

        ui->tableWidget->setItem(j, 0, itemId);
        ui->tableWidget->setItem(j, 1, itemName);
        ui->tableWidget->setItem(j, 2, itemPrice);
        ui->tableWidget->setItem(j, 3, itemCount);
        ui->tableWidget->setItem(j, 4, itemCode);
        ui->tableWidget->setItem(j, 5, itemType);
        ui->tableWidget->setItem(j, 6, itemDateAdded);
        ui->tableWidget->setItem(j, 7, itemDateOfChange);
        valueChanged();
    }
}

FindTable::FindTable(QVector<int> index, QVector<Product*>& base, QSqlDatabase db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindTable),
    base{base},
    index{index},
    db{db}
{
    ui->setupUi(this);
    query = new QSqlQuery(db);
    showAllProducts();
    connect(this,SIGNAL(valueChanged()),parent,SLOT(showAllProducts()));
    connect(this,SIGNAL(valueDelete()),parent,SLOT(getProductsFromDB()));
}



FindTable::~FindTable()
{
    delete ui;
}

void FindTable::on_tableWidget_itemDoubleClicked(QTableWidgetItem *item)
{
    int id = ui->tableWidget->item(item->row() , 0)->text().toInt();
    for(int i = 0; i < base.size(); i++){
        if(base[i]->getId() == id){
            editForm = new DialogEditItem(i, base, db, this);
            editForm->exec();
            break;
        }
    }
}


void FindTable::on_pushButton_clicked()
{
    this->close();
}


void FindTable::on_pushButton_2_clicked()
{
    for(int i = 0; i < index.size(); i++){
        query->prepare("DELETE FROM products WHERE Id = :id");
        query->bindValue(":id", base[index[i]]->getId());
        query->exec();
    }
    valueDelete();
    this->close();
}

