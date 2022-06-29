/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *find;
    QGridLayout *gridLayout_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QDateEdit *dateEdit_2;
    QDateEdit *dateEdit;
    QCheckBox *checkBox;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QDateEdit *dateEdit_3;
    QDateEdit *dateEdit_4;
    QCheckBox *checkBox_2;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QSpinBox *spinBox_2;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *pushButton_3;
    QLabel *label_12;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_4;
    QComboBox *comboBox;
    QWidget *add;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox_6;
    QFormLayout *formLayout_3;
    QLabel *label_9;
    QLineEdit *lineEdit_3;
    QLabel *label_10;
    QLineEdit *lineEdit_4;
    QLabel *label_22;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_11;
    QSpinBox *spinBox_4;
    QLabel *label_13;
    QComboBox *comboBox_2;
    QPushButton *pushButton_4;
    QWidget *sort;
    QGridLayout *gridLayout_16;
    QGroupBox *groupBox_17;
    QGridLayout *gridLayout_17;
    QPushButton *pushButton_11;
    QPushButton *pushButton;
    QPushButton *pushButton_9;
    QPushButton *pushButton_12;
    QPushButton *pushButton_10;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1109, 611);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: white;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(400, 0));
        tabWidget->setMaximumSize(QSize(400, 16777215));
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        find = new QWidget();
        find->setObjectName(QString::fromUtf8("find"));
        gridLayout_5 = new QGridLayout(find);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        scrollArea = new QScrollArea(find);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(0, 300));
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -281, 377, 759));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 200));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(100, 0));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(99999999);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBox);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(100, 0));
        label_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_2);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QFont font1;
        font1.setPointSize(12);
        pushButton_2->setFont(font1);

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButton_2);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8(""));
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 121));
        groupBox_3->setCursor(QCursor(Qt::ArrowCursor));
        groupBox_3->setCheckable(true);
        groupBox_3->setChecked(true);
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        dateEdit_2 = new QDateEdit(groupBox_3);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(dateEdit_2, 1, 0, 1, 1);

        dateEdit = new QDateEdit(groupBox_3);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(dateEdit, 0, 0, 1, 1);

        checkBox = new QCheckBox(groupBox_3);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setChecked(true);

        gridLayout_2->addWidget(checkBox, 1, 1, 1, 1);


        formLayout_2->setWidget(1, QFormLayout::FieldRole, groupBox_3);

        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setMinimumSize(QSize(0, 121));
        groupBox_4->setCheckable(true);
        groupBox_4->setChecked(false);
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        dateEdit_3 = new QDateEdit(groupBox_4);
        dateEdit_3->setObjectName(QString::fromUtf8("dateEdit_3"));
        dateEdit_3->setMinimumSize(QSize(0, 0));

        gridLayout_3->addWidget(dateEdit_3, 1, 0, 1, 1);

        dateEdit_4 = new QDateEdit(groupBox_4);
        dateEdit_4->setObjectName(QString::fromUtf8("dateEdit_4"));
        dateEdit_4->setMinimumSize(QSize(0, 0));

        gridLayout_3->addWidget(dateEdit_4, 0, 0, 1, 1);

        checkBox_2 = new QCheckBox(groupBox_4);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setChecked(true);

        gridLayout_3->addWidget(checkBox_2, 1, 1, 1, 1);


        formLayout_2->setWidget(3, QFormLayout::FieldRole, groupBox_4);

        groupBox_5 = new QGroupBox(groupBox_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setMinimumSize(QSize(0, 0));
        groupBox_5->setMaximumSize(QSize(16777215, 16777215));
        groupBox_5->setCheckable(true);
        groupBox_5->setChecked(false);
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        spinBox_2 = new QSpinBox(groupBox_5);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMaximum(99999999);

        gridLayout_6->addWidget(spinBox_2, 0, 0, 1, 1);


        formLayout_2->setWidget(5, QFormLayout::FieldRole, groupBox_5);

        doubleSpinBox = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMaximum(1000000.000000000000000);

        formLayout_2->setWidget(7, QFormLayout::FieldRole, doubleSpinBox);

        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font1);

        formLayout_2->setWidget(11, QFormLayout::FieldRole, pushButton_3);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(100, 0));
        label_12->setFont(font);

        formLayout_2->setWidget(10, QFormLayout::LabelRole, label_12);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(100, 0));
        label_5->setFont(font);

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(100, 0));
        label_6->setFont(font);

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(170, 0));
        label_7->setFont(font);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_7);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(170, 0));
        label_4->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        comboBox = new QComboBox(groupBox_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout_2->setWidget(10, QFormLayout::FieldRole, comboBox);


        gridLayout_4->addWidget(groupBox_2, 1, 0, 2, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_5->addWidget(scrollArea, 0, 0, 1, 1);

        tabWidget->addTab(find, QString());
        add = new QWidget();
        add->setObjectName(QString::fromUtf8("add"));
        gridLayout_7 = new QGridLayout(add);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        groupBox_6 = new QGroupBox(add);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setMaximumSize(QSize(16777215, 350));
        groupBox_6->setFlat(false);
        groupBox_6->setCheckable(false);
        formLayout_3 = new QFormLayout(groupBox_6);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_9 = new QLabel(groupBox_6);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(100, 0));
        label_9->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_9);

        lineEdit_3 = new QLineEdit(groupBox_6);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit_3);

        label_10 = new QLabel(groupBox_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(100, 0));
        label_10->setFont(font);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_10);

        lineEdit_4 = new QLineEdit(groupBox_6);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lineEdit_4);

        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMinimumSize(QSize(100, 0));
        label_22->setFont(font);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_22);

        doubleSpinBox_3 = new QDoubleSpinBox(groupBox_6);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setMaximum(100000000.000000000000000);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_3);

        label_11 = new QLabel(groupBox_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(100, 0));
        label_11->setFont(font);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_11);

        spinBox_4 = new QSpinBox(groupBox_6);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setMaximum(99999999);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, spinBox_4);

        label_13 = new QLabel(groupBox_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(100, 0));
        label_13->setFont(font);

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_13);

        comboBox_2 = new QComboBox(groupBox_6);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, comboBox_2);

        pushButton_4 = new QPushButton(groupBox_6);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font1);

        formLayout_3->setWidget(5, QFormLayout::FieldRole, pushButton_4);


        gridLayout_7->addWidget(groupBox_6, 0, 0, 1, 1);

        tabWidget->addTab(add, QString());
        sort = new QWidget();
        sort->setObjectName(QString::fromUtf8("sort"));
        gridLayout_16 = new QGridLayout(sort);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        groupBox_17 = new QGroupBox(sort);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        gridLayout_17 = new QGridLayout(groupBox_17);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        pushButton_11 = new QPushButton(groupBox_17);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setMinimumSize(QSize(0, 50));

        gridLayout_17->addWidget(pushButton_11, 6, 0, 1, 1);

        pushButton = new QPushButton(groupBox_17);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 50));

        gridLayout_17->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_9 = new QPushButton(groupBox_17);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(0, 50));

        gridLayout_17->addWidget(pushButton_9, 2, 0, 1, 1);

        pushButton_12 = new QPushButton(groupBox_17);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setMinimumSize(QSize(0, 50));

        gridLayout_17->addWidget(pushButton_12, 4, 0, 1, 1);

        pushButton_10 = new QPushButton(groupBox_17);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setMinimumSize(QSize(0, 50));

        gridLayout_17->addWidget(pushButton_10, 3, 0, 1, 1);


        gridLayout_16->addWidget(groupBox_17, 0, 0, 1, 1);

        tabWidget->addTab(sort, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 1, 1);

        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
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
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setTextElideMode(Qt::ElideLeft);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1109, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Find one", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Id", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Code", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Find Item", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Find all", nullptr));
        groupBox_3->setTitle(QString());
        checkBox->setText(QString());
        groupBox_4->setTitle(QString());
        checkBox_2->setText(QString());
        groupBox_5->setTitle(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Find Items", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Count", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Date of change", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Date added", nullptr));
        comboBox->setItemText(0, QString());
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "None", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Food", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Other", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(find), QCoreApplication::translate("MainWindow", "Find item", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "Add", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Code", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Count", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "Food", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "Other", nullptr));

        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Add Item", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(add), QCoreApplication::translate("MainWindow", "Add item", nullptr));
        groupBox_17->setTitle(QCoreApplication::translate("MainWindow", "Sort", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Sort by date added", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Sort by name", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Sort by id", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Sort by date of change", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Sort by price", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(sort), QCoreApplication::translate("MainWindow", "Sort", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Count", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Code", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Date added", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Date of change", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
