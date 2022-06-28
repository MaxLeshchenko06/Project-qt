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

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void getProductsFromDB();
public slots:
    void showAllProducts();
private slots:
    void on_tableWidget_itemDoubleClicked(QTableWidgetItem *item);

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QSqlQuery* query;
    QVector<Product*> base;
    DialogEditItem* editForm;
};
#endif // MAINWINDOW_H
