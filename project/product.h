#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>
#include <QDate>

class Product
{
private:
    int id;
    QString name;
    float price;
    int count;
    QString type;
    QString code;
    QDate dateAdded;
    QDate dateOfChange;
public:
    Product(int id, QString name, float price, int count, QString type, QString code, QDate dateAdded, QDate dateOfChange);
    ~Product();
    void setId(int id);
    void setName(QString name);
    void setPrice(float price);
    void setCount(int count);
    void setType(QString type);
    void setCode(QString code);
    void setDateAdded(QDate dateAdded);
    void setDateOfChange(QDate dateOfChange);

    int getId()const&;
    QString getName()const&;
    float getPrice()const&;
    int getCount()const&;
    QString getType()const&;
    QString getCode()const&;
    QDate getDateAdded()const&;
    QDate getDateOfChange()const&;

    QString toString()const&;
};

#endif // PRODUCT_H
