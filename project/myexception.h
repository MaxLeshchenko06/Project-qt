#ifndef MYEXCEPTION_H
#define MYEXCEPTION_H

#include <QMessageBox>

class Exception
{
public:
    virtual void showMsg(QWidget *parent)const& = 0;
};

class EmptyValues
    : public Exception
{
    virtual void showMsg(QWidget *parent)const& override{
        QMessageBox::about(parent, "Error", "Empty values");
    }
};

class RepeatingValues
        : public Exception
{
    virtual void showMsg(QWidget *parent)const& override{
        QMessageBox::about(parent, "Error", "Repeating values");
    }
};

class IncorrectDate
        :public Exception
{
    virtual void showMsg(QWidget *parent)const& override{
        QMessageBox::about(parent, "Error", "Incorrect date");
    }
};

#endif // MYEXCEPTION_H
