/********************************************************************************
** Form generated from reading UI file 'datacollect.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATACOLLECT_H
#define UI_DATACOLLECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
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
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_datacollect
{
public:
    QWidget *centralWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_ThemeColor;
    QComboBox *comboBox_ThemeColor;
    QGroupBox *groupBox_RadiationSpectrum;
    QPushButton *pushButton_ParmSet_RS;
    QPushButton *pushButton_Initial_RS;
    QPushButton *pushButton_Connect_RS;
    QPushButton *pushButton_disconnect_RS;
    QPushButton *pushButton_Start_RS;
    QPushButton *pushButton_Stop_RS;
    QCheckBox *checkBox_AutoSave_RS;
    QPushButton *pushButton_SaveData_RS;
    QGroupBox *groupBox_Track;
    QCheckBox *checkBox_AutoCalibretion_TK;
    QPushButton *pushButton_ManualCalibration_TK;
    QLabel *label_Thresh_TK;
    QGroupBox *groupBox_Thresh_TK;
    QSpinBox *spinBox_Thresh_TK;
    QPushButton *pushButton_Reset_TK;
    QCheckBox *checkBox_AutoSave_TK;
    QPushButton *pushButton_SaveData_TK;
    QGroupBox *groupBox_VibrationMirror;
    QPushButton *pushButton_ModuStart_VM;
    QPushButton *pushButton_ModuStop_VM;
    QLabel *pushButton_ControllerState_VM;
    QLineEdit *lineEdit_ControllerState_VM;
    QCheckBox *checkBox_AutoControl_VM;
    QLineEdit *lineEdit_Amplitude_VM;
    QLabel *label_Amplitude_VM;
    QLineEdit *lineEdit_Frequency_VM;
    QLabel *label_Frequency_VM;
    QGroupBox *groupBox_Debug;
    QComboBox *comboBox_DebugState_DB;
    QPushButton *pushButton_Command_DB;
    QTextBrowser *textBrowser;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tableWidget;
    QWidget *tab_2;
    QTableWidget *tableWidget_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_ShowImageTK;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *datacollect)
    {
        if (datacollect->objectName().isEmpty())
            datacollect->setObjectName(QString::fromUtf8("datacollect"));
        datacollect->resize(919, 734);
        centralWidget = new QWidget(datacollect);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 10, 241, 591));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 239, 589));
        label_ThemeColor = new QLabel(scrollAreaWidgetContents);
        label_ThemeColor->setObjectName(QString::fromUtf8("label_ThemeColor"));
        label_ThemeColor->setGeometry(QRect(20, 11, 54, 21));
        comboBox_ThemeColor = new QComboBox(scrollAreaWidgetContents);
        comboBox_ThemeColor->addItem(QString());
        comboBox_ThemeColor->setObjectName(QString::fromUtf8("comboBox_ThemeColor"));
        comboBox_ThemeColor->setGeometry(QRect(80, 10, 131, 22));
        groupBox_RadiationSpectrum = new QGroupBox(scrollAreaWidgetContents);
        groupBox_RadiationSpectrum->setObjectName(QString::fromUtf8("groupBox_RadiationSpectrum"));
        groupBox_RadiationSpectrum->setGeometry(QRect(20, 50, 201, 141));
        pushButton_ParmSet_RS = new QPushButton(groupBox_RadiationSpectrum);
        pushButton_ParmSet_RS->setObjectName(QString::fromUtf8("pushButton_ParmSet_RS"));
        pushButton_ParmSet_RS->setGeometry(QRect(10, 20, 81, 23));
        pushButton_Initial_RS = new QPushButton(groupBox_RadiationSpectrum);
        pushButton_Initial_RS->setObjectName(QString::fromUtf8("pushButton_Initial_RS"));
        pushButton_Initial_RS->setGeometry(QRect(110, 20, 81, 23));
        pushButton_Connect_RS = new QPushButton(groupBox_RadiationSpectrum);
        pushButton_Connect_RS->setObjectName(QString::fromUtf8("pushButton_Connect_RS"));
        pushButton_Connect_RS->setGeometry(QRect(10, 50, 81, 23));
        pushButton_disconnect_RS = new QPushButton(groupBox_RadiationSpectrum);
        pushButton_disconnect_RS->setObjectName(QString::fromUtf8("pushButton_disconnect_RS"));
        pushButton_disconnect_RS->setGeometry(QRect(110, 50, 81, 23));
        pushButton_Start_RS = new QPushButton(groupBox_RadiationSpectrum);
        pushButton_Start_RS->setObjectName(QString::fromUtf8("pushButton_Start_RS"));
        pushButton_Start_RS->setGeometry(QRect(10, 80, 81, 23));
        pushButton_Stop_RS = new QPushButton(groupBox_RadiationSpectrum);
        pushButton_Stop_RS->setObjectName(QString::fromUtf8("pushButton_Stop_RS"));
        pushButton_Stop_RS->setGeometry(QRect(110, 80, 81, 23));
        checkBox_AutoSave_RS = new QCheckBox(groupBox_RadiationSpectrum);
        checkBox_AutoSave_RS->setObjectName(QString::fromUtf8("checkBox_AutoSave_RS"));
        checkBox_AutoSave_RS->setGeometry(QRect(20, 110, 71, 21));
        pushButton_SaveData_RS = new QPushButton(groupBox_RadiationSpectrum);
        pushButton_SaveData_RS->setObjectName(QString::fromUtf8("pushButton_SaveData_RS"));
        pushButton_SaveData_RS->setGeometry(QRect(110, 110, 81, 23));
        groupBox_Track = new QGroupBox(scrollAreaWidgetContents);
        groupBox_Track->setObjectName(QString::fromUtf8("groupBox_Track"));
        groupBox_Track->setGeometry(QRect(20, 200, 201, 131));
        checkBox_AutoCalibretion_TK = new QCheckBox(groupBox_Track);
        checkBox_AutoCalibretion_TK->setObjectName(QString::fromUtf8("checkBox_AutoCalibretion_TK"));
        checkBox_AutoCalibretion_TK->setGeometry(QRect(10, 20, 81, 21));
        pushButton_ManualCalibration_TK = new QPushButton(groupBox_Track);
        pushButton_ManualCalibration_TK->setObjectName(QString::fromUtf8("pushButton_ManualCalibration_TK"));
        pushButton_ManualCalibration_TK->setGeometry(QRect(110, 20, 81, 23));
        label_Thresh_TK = new QLabel(groupBox_Track);
        label_Thresh_TK->setObjectName(QString::fromUtf8("label_Thresh_TK"));
        label_Thresh_TK->setGeometry(QRect(10, 50, 54, 12));
        groupBox_Thresh_TK = new QGroupBox(groupBox_Track);
        groupBox_Thresh_TK->setObjectName(QString::fromUtf8("groupBox_Thresh_TK"));
        groupBox_Thresh_TK->setGeometry(QRect(10, 50, 71, 51));
        spinBox_Thresh_TK = new QSpinBox(groupBox_Thresh_TK);
        spinBox_Thresh_TK->setObjectName(QString::fromUtf8("spinBox_Thresh_TK"));
        spinBox_Thresh_TK->setGeometry(QRect(10, 20, 51, 22));
        pushButton_Reset_TK = new QPushButton(groupBox_Track);
        pushButton_Reset_TK->setObjectName(QString::fromUtf8("pushButton_Reset_TK"));
        pushButton_Reset_TK->setGeometry(QRect(110, 60, 81, 23));
        checkBox_AutoSave_TK = new QCheckBox(groupBox_Track);
        checkBox_AutoSave_TK->setObjectName(QString::fromUtf8("checkBox_AutoSave_TK"));
        checkBox_AutoSave_TK->setGeometry(QRect(10, 100, 71, 21));
        pushButton_SaveData_TK = new QPushButton(groupBox_Track);
        pushButton_SaveData_TK->setObjectName(QString::fromUtf8("pushButton_SaveData_TK"));
        pushButton_SaveData_TK->setGeometry(QRect(110, 100, 81, 23));
        groupBox_VibrationMirror = new QGroupBox(scrollAreaWidgetContents);
        groupBox_VibrationMirror->setObjectName(QString::fromUtf8("groupBox_VibrationMirror"));
        groupBox_VibrationMirror->setGeometry(QRect(20, 350, 201, 141));
        pushButton_ModuStart_VM = new QPushButton(groupBox_VibrationMirror);
        pushButton_ModuStart_VM->setObjectName(QString::fromUtf8("pushButton_ModuStart_VM"));
        pushButton_ModuStart_VM->setGeometry(QRect(10, 20, 81, 23));
        pushButton_ModuStop_VM = new QPushButton(groupBox_VibrationMirror);
        pushButton_ModuStop_VM->setObjectName(QString::fromUtf8("pushButton_ModuStop_VM"));
        pushButton_ModuStop_VM->setGeometry(QRect(110, 20, 81, 23));
        pushButton_ControllerState_VM = new QLabel(groupBox_VibrationMirror);
        pushButton_ControllerState_VM->setObjectName(QString::fromUtf8("pushButton_ControllerState_VM"));
        pushButton_ControllerState_VM->setGeometry(QRect(20, 50, 71, 21));
        lineEdit_ControllerState_VM = new QLineEdit(groupBox_VibrationMirror);
        lineEdit_ControllerState_VM->setObjectName(QString::fromUtf8("lineEdit_ControllerState_VM"));
        lineEdit_ControllerState_VM->setGeometry(QRect(110, 50, 81, 20));
        checkBox_AutoControl_VM = new QCheckBox(groupBox_VibrationMirror);
        checkBox_AutoControl_VM->setObjectName(QString::fromUtf8("checkBox_AutoControl_VM"));
        checkBox_AutoControl_VM->setGeometry(QRect(10, 110, 101, 21));
        lineEdit_Amplitude_VM = new QLineEdit(groupBox_VibrationMirror);
        lineEdit_Amplitude_VM->setObjectName(QString::fromUtf8("lineEdit_Amplitude_VM"));
        lineEdit_Amplitude_VM->setGeometry(QRect(40, 80, 51, 20));
        label_Amplitude_VM = new QLabel(groupBox_VibrationMirror);
        label_Amplitude_VM->setObjectName(QString::fromUtf8("label_Amplitude_VM"));
        label_Amplitude_VM->setGeometry(QRect(10, 80, 31, 21));
        lineEdit_Frequency_VM = new QLineEdit(groupBox_VibrationMirror);
        lineEdit_Frequency_VM->setObjectName(QString::fromUtf8("lineEdit_Frequency_VM"));
        lineEdit_Frequency_VM->setGeometry(QRect(140, 80, 51, 20));
        label_Frequency_VM = new QLabel(groupBox_VibrationMirror);
        label_Frequency_VM->setObjectName(QString::fromUtf8("label_Frequency_VM"));
        label_Frequency_VM->setGeometry(QRect(110, 80, 31, 21));
        groupBox_Debug = new QGroupBox(scrollAreaWidgetContents);
        groupBox_Debug->setObjectName(QString::fromUtf8("groupBox_Debug"));
        groupBox_Debug->setGeometry(QRect(20, 510, 201, 71));
        comboBox_DebugState_DB = new QComboBox(groupBox_Debug);
        comboBox_DebugState_DB->addItem(QString());
        comboBox_DebugState_DB->setObjectName(QString::fromUtf8("comboBox_DebugState_DB"));
        comboBox_DebugState_DB->setGeometry(QRect(8, 30, 81, 22));
        pushButton_Command_DB = new QPushButton(groupBox_Debug);
        pushButton_Command_DB->setObjectName(QString::fromUtf8("pushButton_Command_DB"));
        pushButton_Command_DB->setGeometry(QRect(110, 30, 81, 23));
        scrollArea->setWidget(scrollAreaWidgetContents);
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(260, 480, 256, 192));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(260, 0, 321, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(590, 10, 321, 181));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tableWidget = new QTableWidget(tab);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 321, 161));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableWidget_2 = new QTableWidget(tab_2);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(0, 0, 321, 161));
        tabWidget->addTab(tab_2, QString());
        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(260, 210, 321, 261));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_ShowImageTK = new QLabel(centralWidget);
        label_ShowImageTK->setObjectName(QString::fromUtf8("label_ShowImageTK"));
        label_ShowImageTK->setGeometry(QRect(590, 200, 311, 271));
        datacollect->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(datacollect);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 919, 23));
        datacollect->setMenuBar(menuBar);
        mainToolBar = new QToolBar(datacollect);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        datacollect->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(datacollect);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        datacollect->setStatusBar(statusBar);

        retranslateUi(datacollect);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(datacollect);
    } // setupUi

    void retranslateUi(QMainWindow *datacollect)
    {
        datacollect->setWindowTitle(QApplication::translate("datacollect", "datacollect", nullptr));
        label_ThemeColor->setText(QApplication::translate("datacollect", "\344\270\273\351\242\230\351\242\234\350\211\262:", nullptr));
        comboBox_ThemeColor->setItemText(0, QApplication::translate("datacollect", "\351\273\221\350\211\262", nullptr));

        groupBox_RadiationSpectrum->setTitle(QApplication::translate("datacollect", "\350\276\220\345\260\204\350\260\261\351\207\207\351\233\206\346\216\247\345\210\266", nullptr));
        pushButton_ParmSet_RS->setText(QApplication::translate("datacollect", "\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        pushButton_Initial_RS->setText(QApplication::translate("datacollect", "\345\210\235\345\247\213\345\214\226\350\207\252\346\243\200", nullptr));
        pushButton_Connect_RS->setText(QApplication::translate("datacollect", "\347\275\221\347\273\234\350\277\236\346\216\245", nullptr));
        pushButton_disconnect_RS->setText(QApplication::translate("datacollect", "\347\275\221\347\273\234\346\226\255\345\274\200", nullptr));
        pushButton_Start_RS->setText(QApplication::translate("datacollect", "\345\220\257\345\212\250", nullptr));
        pushButton_Stop_RS->setText(QApplication::translate("datacollect", "\345\201\234\346\255\242", nullptr));
        checkBox_AutoSave_RS->setText(QApplication::translate("datacollect", "\350\207\252\345\212\250\344\277\235\345\255\230", nullptr));
        pushButton_SaveData_RS->setText(QApplication::translate("datacollect", "\344\277\235\345\255\230", nullptr));
        groupBox_Track->setTitle(QApplication::translate("datacollect", "\347\262\276\350\267\237\350\270\252\346\216\247\345\210\266", nullptr));
        checkBox_AutoCalibretion_TK->setText(QApplication::translate("datacollect", "\344\273\273\345\212\241\345\211\215\346\240\241\345\207\206", nullptr));
        pushButton_ManualCalibration_TK->setText(QApplication::translate("datacollect", "\346\211\213\345\212\250\345\256\236\346\227\266\346\240\241\345\207\206", nullptr));
        label_Thresh_TK->setText(QString());
        groupBox_Thresh_TK->setTitle(QApplication::translate("datacollect", "2*2\351\230\210\345\200\274", nullptr));
        pushButton_Reset_TK->setText(QApplication::translate("datacollect", "\346\240\241\345\207\206\346\225\260\346\215\256\345\244\215\344\275\215", nullptr));
        checkBox_AutoSave_TK->setText(QApplication::translate("datacollect", "\350\207\252\345\212\250\344\277\235\345\255\230", nullptr));
        pushButton_SaveData_TK->setText(QApplication::translate("datacollect", "\344\277\235\345\255\230", nullptr));
        groupBox_VibrationMirror->setTitle(QApplication::translate("datacollect", "\346\214\257\345\212\250\345\217\215\345\260\204\351\225\234\346\216\247\345\210\266", nullptr));
        pushButton_ModuStart_VM->setText(QApplication::translate("datacollect", "\345\220\257\345\212\250\357\274\210\346\214\257\351\225\234\357\274\211", nullptr));
        pushButton_ModuStop_VM->setText(QApplication::translate("datacollect", "\345\201\234\346\255\242\357\274\210\346\214\257\351\225\234\357\274\211", nullptr));
        pushButton_ControllerState_VM->setText(QApplication::translate("datacollect", "\346\214\257\351\225\234\346\216\247\345\210\266\345\231\250", nullptr));
        checkBox_AutoControl_VM->setText(QApplication::translate("datacollect", "\350\207\252\345\212\250\345\220\257\345\201\234", nullptr));
        label_Amplitude_VM->setText(QApplication::translate("datacollect", "\346\214\257\345\271\205", nullptr));
        label_Frequency_VM->setText(QApplication::translate("datacollect", "\351\242\221\347\216\207", nullptr));
        groupBox_Debug->setTitle(QApplication::translate("datacollect", "\350\260\203\350\257\225", nullptr));
        comboBox_DebugState_DB->setItemText(0, QApplication::translate("datacollect", "\350\207\252\346\243\200", nullptr));

        pushButton_Command_DB->setText(QApplication::translate("datacollect", "\345\217\221\351\200\201\345\221\275\344\273\244", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("datacollect", "\346\225\260\346\215\256\351\241\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("datacollect", "\346\265\213\351\207\217\345\200\274", nullptr));
        label_ShowImageTK->setText(QApplication::translate("datacollect", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class datacollect: public Ui_datacollect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATACOLLECT_H
