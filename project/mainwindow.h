#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVector>
#include <iostream>
#include <QTableWidgetItem>
#include "product.h"
#include "dialogedititem.h"
#include "myexception.h"
#include "findtable.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void getProductsFromDB();
    void showAllProducts();
private slots:
    void on_tableWidget_itemDoubleClicked(QTableWidgetItem *item);

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QSqlQuery* query;
    QVector<Product*> base;
    DialogEditItem* editForm;
    FindTable* findTable;
};
#endif // MAINWINDOW_H
