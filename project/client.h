#ifndef CLIENT_H
#define CLIENT_H

#include <QString>

class Client
{
protected:
    int id;
    QString name;
    int discount;
    QString phone;
public:
    Client(int id, QString name, int discount, QString phone);
    ~Client();
    void setId(int id);
    void setName(QString name);
    void setDiscount(int discount);
    void setPhone(QString phone);

    int getId()const&;
    QString getName()const&;
    int getDiscount()const&;
    QString getPhone()const&;

    virtual float sale(float price) = 0;
    virtual QString getType()const& = 0;
};

class StaticClient :
        public Client
{
public:
    StaticClient(int id, QString name, int discount, QString phone);
    virtual float sale(float price) override;
    virtual QString getType()const& override;
};

class GrowingClient :
        public Client
{
public:
    GrowingClient(int id, QString name, int discount, QString phone);
    virtual float sale(float price) override;
    virtual QString getType()const& override;
};

#endif // CLIENT_H
