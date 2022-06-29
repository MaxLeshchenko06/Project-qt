#include "client.h"


Client::Client(int id, QString name, int discount, QString phone)
{
    this->id = id;
    this->name = name;
    this->discount = discount;
    this->phone = phone;
}

Client::~Client()
{

}

void Client::setId(int id)
{
    this->id = id;
}

void Client::setName(QString name)
{
    this->name = name;
}

void Client::setDiscount(int discount)
{
    this->discount = discount;
}

void Client::setPhone(QString phone)
{
    this->phone = phone;
}

int Client::getId() const &
{
    return id;
}

QString Client::getName() const &
{
    return name;
}

int Client::getDiscount() const &
{
    return discount;
}

QString Client::getPhone() const &
{
    return phone;
}

StaticClient::StaticClient(int id, QString name, int discount, QString phone):
    Client(id, name, discount, phone)
{
}

float StaticClient::sale(float price)
{
    return price * (1 - discount / 100);
}

QString StaticClient::getType() const &
{
    return "static";
}

GrowingClient::GrowingClient(int id, QString name, int discount, QString phone):
    Client(id, name, discount, phone)
{
}

float GrowingClient::sale(float price)
{
    if(discount < 15 && price >= 1000.0)
        discount++;
    return price * (1 - discount / 100);
}

QString GrowingClient::getType() const &
{
    return "growing";
}
