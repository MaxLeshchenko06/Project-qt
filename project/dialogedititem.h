#ifndef DIALOGEDITITEM_H
#define DIALOGEDITITEM_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVector>
#include <iostream>
#include "product.h"

namespace Ui {
class DialogEditItem;
}

class DialogEditItem : public QDialog
{
    Q_OBJECT

public:
    explicit DialogEditItem(int index, QVector<Product*>& base, QSqlDatabase db, QWidget *parent = nullptr);
    ~DialogEditItem();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

signals:
    void valueChanged();
private:
    Ui::DialogEditItem *ui;
    QSqlQuery* query;
    int index;
    QVector<Product*>& base;
};

#endif // DIALOGEDITITEM_H
