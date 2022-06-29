#ifndef DIALOGEDITCLIENT_H
#define DIALOGEDITCLIENT_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVector>
#include <client.h>
#include "myexception.h"

namespace Ui {
class DialogEditClient;
}

class DialogEditClient : public QDialog
{
    Q_OBJECT

public:
    explicit DialogEditClient(int index, QVector<Client*>& base, QSqlDatabase db, QWidget *parent = nullptr);
    ~DialogEditClient();
signals:
    void valueChanged();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::DialogEditClient *ui;
    QSqlQuery* query;
    int index;
    QVector<Client*>& base;
};

#endif // DIALOGEDITCLIENT_H
