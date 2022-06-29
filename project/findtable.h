#ifndef FINDTABLE_H
#define FINDTABLE_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVector>
#include <iostream>
#include <QTableWidgetItem>
#include "product.h"
#include "dialogedititem.h"
#include "myexception.h"

namespace Ui {
class FindTable;
}

class FindTable : public QDialog
{
    Q_OBJECT
//public slots:
signals:
    void valueChanged();
    void valueDelete();
public:

    explicit FindTable(QVector<int> index, QVector<Product*>& base, QSqlDatabase db, QWidget *parent = nullptr);
    ~FindTable();
public slots:
    void showAllProducts();
private slots:
    void on_tableWidget_itemDoubleClicked(QTableWidgetItem *item);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::FindTable *ui;
    QSqlQuery* query;
    QVector<Product*>& base;
    QVector<int> index;
    DialogEditItem* editForm;
    QSqlDatabase db;
};

#endif // FINDTABLE_H
