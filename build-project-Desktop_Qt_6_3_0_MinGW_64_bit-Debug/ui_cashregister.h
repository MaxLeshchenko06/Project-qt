/********************************************************************************
** Form generated from reading UI file 'cashregister.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASHREGISTER_H
#define UI_CASHREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_CashRegister
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QTableWidget *tableWidget_2;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QSpinBox *spinBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *CashRegister)
    {
        if (CashRegister->objectName().isEmpty())
            CashRegister->setObjectName(QString::fromUtf8("CashRegister"));
        CashRegister->resize(936, 568);
        gridLayout = new QGridLayout(CashRegister);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(CashRegister);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setMaximumSize(QSize(16777215, 150));
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setTextElideMode(Qt::ElideLeft);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        groupBox = new QGroupBox(CashRegister);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(300, 150));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(100, 0));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton_5);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButton);


        gridLayout->addWidget(groupBox, 0, 1, 1, 2);

        tableWidget_2 = new QTableWidget(CashRegister);
        if (tableWidget_2->columnCount() < 6)
            tableWidget_2->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem10);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget_2->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_2->setTextElideMode(Qt::ElideLeft);
        tableWidget_2->horizontalHeader()->setCascadingSectionResizes(false);

        gridLayout->addWidget(tableWidget_2, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(CashRegister);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(300, 16777215));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(100, 0));
        label_2->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        spinBox = new QSpinBox(groupBox_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(1);
        spinBox->setMaximum(1000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, spinBox);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, pushButton_2);


        gridLayout->addWidget(groupBox_2, 1, 1, 1, 2);

        pushButton_3 = new QPushButton(CashRegister);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 1, 1, 1);

        pushButton_4 = new QPushButton(CashRegister);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 2, 2, 1, 1);


        retranslateUi(CashRegister);

        QMetaObject::connectSlotsByName(CashRegister);
    } // setupUi

    void retranslateUi(QDialog *CashRegister)
    {
        CashRegister->setWindowTitle(QCoreApplication::translate("CashRegister", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CashRegister", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CashRegister", "Full name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CashRegister", "Discount", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("CashRegister", "Phone", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("CashRegister", "Type", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CashRegister", "Client", nullptr));
        label->setText(QCoreApplication::translate("CashRegister", "Client phone", nullptr));
        pushButton_5->setText(QCoreApplication::translate("CashRegister", "Delete", nullptr));
        pushButton->setText(QCoreApplication::translate("CashRegister", "Ok", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("CashRegister", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("CashRegister", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("CashRegister", "Count", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("CashRegister", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("CashRegister", "Code", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("CashRegister", "Type", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("CashRegister", "Product", nullptr));
        label_2->setText(QCoreApplication::translate("CashRegister", "Code", nullptr));
        label_3->setText(QCoreApplication::translate("CashRegister", "Count", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CashRegister", "Ok", nullptr));
        pushButton_3->setText(QCoreApplication::translate("CashRegister", "Sell", nullptr));
        pushButton_4->setText(QCoreApplication::translate("CashRegister", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CashRegister: public Ui_CashRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHREGISTER_H
