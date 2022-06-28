/********************************************************************************
** Form generated from reading UI file 'dialogedititem.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGEDITITEM_H
#define UI_DIALOGEDITITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_DialogEditItem
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QLineEdit *lineEdit;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_5;
    QSpinBox *spinBox;
    QLabel *label_9;
    QLineEdit *lineEdit_3;
    QLabel *label_10;
    QComboBox *comboBox;
    QLabel *label_11;
    QDateEdit *dateEdit;
    QLabel *label_12;
    QDateEdit *dateEdit_2;
    QLabel *label_8;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *DialogEditItem)
    {
        if (DialogEditItem->objectName().isEmpty())
            DialogEditItem->setObjectName(QString::fromUtf8("DialogEditItem"));
        DialogEditItem->resize(480, 502);
        gridLayout = new QGridLayout(DialogEditItem);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(DialogEditItem);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        groupBox = new QGroupBox(DialogEditItem);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(false);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(150, 40));
        QFont font;
        font.setPointSize(10);
        label_7->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_7);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(150, 40));
        label_6->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_6);

        doubleSpinBox = new QDoubleSpinBox(groupBox);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, doubleSpinBox);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(150, 40));
        label_5->setFont(font);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_5);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, spinBox);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(150, 40));
        label_9->setFont(font);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_9);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, lineEdit_3);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(150, 40));
        label_10->setFont(font);

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_10);

        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, comboBox);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(150, 40));
        label_11->setFont(font);

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_11);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setEnabled(false);

        formLayout_2->setWidget(6, QFormLayout::FieldRole, dateEdit);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(150, 40));
        label_12->setFont(font);

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label_12);

        dateEdit_2 = new QDateEdit(groupBox);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setEnabled(false);

        formLayout_2->setWidget(7, QFormLayout::FieldRole, dateEdit_2);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(150, 40));
        label_8->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_8);


        gridLayout->addWidget(groupBox, 0, 0, 1, 3);

        pushButton_3 = new QPushButton(DialogEditItem);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 1, 1, 1);

        pushButton_2 = new QPushButton(DialogEditItem);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 2, 1, 1);


        retranslateUi(DialogEditItem);

        QMetaObject::connectSlotsByName(DialogEditItem);
    } // setupUi

    void retranslateUi(QDialog *DialogEditItem)
    {
        DialogEditItem->setWindowTitle(QCoreApplication::translate("DialogEditItem", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogEditItem", "Ok", nullptr));
        groupBox->setTitle(QString());
        label_7->setText(QCoreApplication::translate("DialogEditItem", "Name", nullptr));
        label_6->setText(QCoreApplication::translate("DialogEditItem", "Price", nullptr));
        label_5->setText(QCoreApplication::translate("DialogEditItem", "Count", nullptr));
        label_9->setText(QCoreApplication::translate("DialogEditItem", "Code", nullptr));
        label_10->setText(QCoreApplication::translate("DialogEditItem", "Type", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("DialogEditItem", "None", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("DialogEditItem", "Food", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("DialogEditItem", "Other", nullptr));

        label_11->setText(QCoreApplication::translate("DialogEditItem", "Date added", nullptr));
        label_12->setText(QCoreApplication::translate("DialogEditItem", "Date of change", nullptr));
        label_8->setText(QCoreApplication::translate("DialogEditItem", "Id", nullptr));
        pushButton_3->setText(QCoreApplication::translate("DialogEditItem", "Cancel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DialogEditItem", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogEditItem: public Ui_DialogEditItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGEDITITEM_H
