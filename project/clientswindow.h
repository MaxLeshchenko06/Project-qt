#ifndef CLIENTSWINDOW_H
#define CLIENTSWINDOW_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVector>
#include "client.h"
#include <QTableWidgetItem>
#include "dialogeditclient.h"

namespace Ui {
class ClientsWindow;
}

class ClientsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ClientsWindow(QSqlDatabase db, QVector<Client*>& clientBase, QWidget *parent = nullptr);
    ~ClientsWindow();
public slots:
    void showAllClients();
private slots:
    void on_pushButton_clicked();

    void on_tableWidget_itemDoubleClicked(QTableWidgetItem *item);

private:
    Ui::ClientsWindow *ui;
    QSqlQuery* query;
    QVector<Client*>& base;
    QSqlDatabase db;
    DialogEditClient* editForm;
};

#endif // CLIENTSWINDOW_H
