/********************************************************************************
** Form generated from reading UI file 'dialogeditclient.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGEDITCLIENT_H
#define UI_DIALOGEDITCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_DialogEditClient
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QSpinBox *spinBox;
    QLabel *label_9;
    QLineEdit *lineEdit_3;
    QLabel *label_10;
    QLineEdit *lineEdit_4;

    void setupUi(QDialog *DialogEditClient)
    {
        if (DialogEditClient->objectName().isEmpty())
            DialogEditClient->setObjectName(QString::fromUtf8("DialogEditClient"));
        DialogEditClient->resize(445, 373);
        gridLayout = new QGridLayout(DialogEditClient);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(DialogEditClient);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(DialogEditClient);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(DialogEditClient);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

        groupBox = new QGroupBox(DialogEditClient);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(150, 40));
        QFont font;
        font.setPointSize(10);
        label_8->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_8);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(150, 40));
        label_7->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(150, 40));
        label_5->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(15);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBox);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(150, 40));
        label_9->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_9);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_3);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(150, 40));
        label_10->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_10);

        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setEnabled(false);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_4);


        gridLayout->addWidget(groupBox, 0, 0, 1, 3);


        retranslateUi(DialogEditClient);

        QMetaObject::connectSlotsByName(DialogEditClient);
    } // setupUi

    void retranslateUi(QDialog *DialogEditClient)
    {
        DialogEditClient->setWindowTitle(QCoreApplication::translate("DialogEditClient", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogEditClient", "Ok", nullptr));
        pushButton_3->setText(QCoreApplication::translate("DialogEditClient", "Cancel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DialogEditClient", "Delete", nullptr));
        groupBox->setTitle(QString());
        label_8->setText(QCoreApplication::translate("DialogEditClient", "Id", nullptr));
        label_7->setText(QCoreApplication::translate("DialogEditClient", "Name", nullptr));
        label_5->setText(QCoreApplication::translate("DialogEditClient", "Discount", nullptr));
        label_9->setText(QCoreApplication::translate("DialogEditClient", "Phone", nullptr));
        label_10->setText(QCoreApplication::translate("DialogEditClient", "Type", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogEditClient: public Ui_DialogEditClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGEDITCLIENT_H
