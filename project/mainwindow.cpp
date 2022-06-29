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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getProductsFromDB()
{
    base.clear();
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
    showAllProducts();
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
    editForm->exec();
    editForm->setAttribute(Qt::WA_DeleteOnClose);
}



void MainWindow::on_pushButton_4_clicked()
{
try{
    QString name = ui->lineEdit_3->text();
    QString code = ui->lineEdit_4->text();
    if(name == "" || code == "")
        throw new EmptyValues();
    for(int i = 0; i < base.size(); i++)
        if(name == base[i]->getName() || code == base[i]->getCode())
            throw new RepeatingValues();
    float price = ui->doubleSpinBox_3->value();
    int count = ui->spinBox_4->value();
    QString type = ui->comboBox_2->currentText();
    QDate d(QDate::currentDate());
    query->prepare("INSERT INTO products (Name, Price, [Count], Code, Type, [Date added], [Date of change])"
                   " VALUES (:name, :price, :count, :code, :type, :dateAdded, :dateOfChange); ");
    query->bindValue(":name", name);
    query->bindValue(":price", price);
    query->bindValue(":count", count);
    query->bindValue(":code", code);
    query->bindValue(":type", type);
    query->bindValue(":dateAdded", d.toString("dd.MM.yyyy"));
    query->bindValue(":dateOfChange", d.toString("dd.MM.yyyy"));
    query->exec();
    query->prepare("SELECT Id FROM products WHERE Name = :name");
    query->bindValue(":name", name);
    query->exec();
    query->next();
    int id = query->value(0).toInt();
    base.push_back(new Product(id, name, price, count, type, code, d, d));
    showAllProducts();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->doubleSpinBox_3->setValue(0.0);
    ui->spinBox_4->setValue(0);
    ui->comboBox_2->setCurrentIndex(0);
    }
    catch(Exception* obj){
        obj->showMsg(this);
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    int id = ui->spinBox->value();
    QString name = ui->lineEdit->text();
    QString code = ui->lineEdit_2->text();
    bool found = false;
    if(id != 0 || name != "" || code != ""){
        for(int i = 0; i < ui->tableWidget->rowCount(); i++){
            if((id == 0 || ui->tableWidget->item(i, 0)->text() == QString().setNum(id)) &&
                    (name == "" || ui->tableWidget->item(i, 1)->text() == name) &&
                    (code == "" || ui->tableWidget->item(i, 4)->text() == code)){
                ui->tableWidget->selectRow(i);
                found = true;
            }
        }
        if(!found)
            QMessageBox::about(this, "Alert", "Not found");
    }
    else{
        QMessageBox::about(this, "Alert", "Empty lines");
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    try{
        if((ui->groupBox_3->isChecked() && ((ui->dateEdit_2->isEnabled() &&
          (ui->dateEdit->date() > ui->dateEdit_2->date() || ui->dateEdit->date() > QDate::currentDate()
           || ui->dateEdit_2->date() > QDate::currentDate())) ||
          (!ui->dateEdit_2->isEnabled() && (ui->dateEdit->date() > QDate::currentDate())))) ||
          (ui->groupBox_4->isChecked() && ((ui->dateEdit_3->isEnabled() &&
          (ui->dateEdit_4->date() > ui->dateEdit_3->date() || ui->dateEdit_4->date() > QDate::currentDate()
           || ui->dateEdit_3->date() > QDate::currentDate())) ||
          (!ui->dateEdit_3->isEnabled() && (ui->dateEdit_4->date() > QDate::currentDate())))))
            throw new IncorrectDate();
        if(!ui->groupBox_3->isChecked() && !ui->groupBox_4->isChecked() &&
           !ui->groupBox_5->isChecked() && ui->doubleSpinBox->value() == 0.0 && ui->comboBox->currentIndex() == 0)
                throw new EmptyValues();
        QVector<int> index;
        for(int i = 0; i < base.size(); i++){
            if((!ui->groupBox_3->isChecked() ||
                ((ui->dateEdit_2->isEnabled() &&
                  (ui->dateEdit->date() <= base[i]->getDateAdded() && ui->dateEdit_2->date() >= base[i]->getDateAdded())) ||
                (!ui->dateEdit_2->isEnabled() && (ui->dateEdit->date() == base[i]->getDateAdded())))) &&
               (!ui->groupBox_4->isChecked() ||
                 ((ui->dateEdit_3->isEnabled() &&
                   (ui->dateEdit_4->date() <= base[i]->getDateOfChange() && ui->dateEdit_3->date() >= base[i]->getDateOfChange())) ||
                 (!ui->dateEdit_3->isEnabled() && (ui->dateEdit_4->date() == base[i]->getDateOfChange())))) &&
               (!ui->groupBox_5->isChecked() || ui->spinBox_2->value() == base[i]->getCount()) &&
               (ui->doubleSpinBox->value() == 0.0 || ui->doubleSpinBox->value() == base[i]->getPrice()) &&
               (ui->comboBox->currentIndex() == 0 || ui->comboBox->currentText() == base[i]->getType())){
                index.push_back(i);

            }
        }
        if(index.size() == 0)
            QMessageBox::about(this, "Alert", "Not found");
        else{
            findTable = new FindTable(index, base, db, this);
            findTable->exec();
        }
    }

    catch(Exception* obj){
        obj->showMsg(this);
    }
}


void MainWindow::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1 == 0)
        ui->dateEdit_3->setEnabled(false);
    else
        ui->dateEdit_3->setEnabled(true);
}


void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1 == 0)
        ui->dateEdit_2->setEnabled(false);
    else
        ui->dateEdit_2->setEnabled(true);
}

