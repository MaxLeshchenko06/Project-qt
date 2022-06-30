#ifndef CASHREGISTER_H
#define CASHREGISTER_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVector>
#include "client.h"
#include <QTableWidgetItem>
#include "dialogeditclient.h"
#include "product.h"

namespace Ui {
class CashRegister;
}

class CashRegister : public QDialog
{
    Q_OBJECT

public slots:
    void showAllProducts();
signals:
    void valueChanged();
public:
    explicit CashRegister(QSqlDatabase db, QVector<Client*>& clientBase, QVector<Product*>& base, QWidget *parent = nullptr);
    ~CashRegister();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::CashRegister *ui;
    QSqlDatabase db;
    QVector<Client*>& clientBase;
    QVector<Product*>& base;
    QSqlQuery* query;
    QVector<Product*> list;
};

#endif // CASHREGISTER_H
