#include "product.h"

Product::Product(int id, QString name, float price, int count, QString type, QString code, QDate dateAdded, QDate dateOfChange)
{
    this->id = id;
    this->name = name;
    this->price = price;
    this->count = count;
    this->type = type;
    this->code = code;
    this->dateAdded = dateAdded;
    this->dateOfChange = dateOfChange;

}

Product::~Product()
{

}

void Product::setId(int id)
{
    this->id = id;
}

void Product::setName(QString name)
{
    this->name = name;
}

void Product::setPrice(float price)
{
    this->price = price;
}

void Product::setCount(int count)
{
    this->count = count;
}

void Product::setType(QString type)
{
    this->type = type;
}

void Product::setCode(QString code)
{
    this->code = code;
}

void Product::setDateAdded(QDate dateAdded)
{
    this->dateAdded = dateAdded;
}

void Product::setDateOfChange(QDate dateOfChange)
{
    this->dateOfChange = dateOfChange;
}

int Product::getId() const &
{
    return id;
}

QString Product::getName() const &
{
    return name;
}

float Product::getPrice() const &
{
    return price;
}

int Product::getCount() const &
{
    return count;
}

QString Product::getType() const &
{
    return type;
}

QString Product::getCode() const &
{
    return code;
}

QDate Product::getDateAdded() const &
{
    return dateAdded;
}

QDate Product::getDateOfChange() const &
{
    return dateOfChange;
}

QString Product::toString() const &
{
    return QString().setNum(id) + "=" + name + "=" + QString().setNum(price) +
            "=" + QString().setNum(count) + "=" + type + "=" + code + "=" +
            dateAdded.toString("dd.MM.yyyy") + "=" + dateOfChange.toString("dd.MM.yyyy");
}
