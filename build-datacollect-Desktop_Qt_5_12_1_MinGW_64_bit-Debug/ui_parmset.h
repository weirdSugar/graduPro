/********************************************************************************
** Form generated from reading UI file 'parmset.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARMSET_H
#define UI_PARMSET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_parmset
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *parmset)
    {
        if (parmset->objectName().isEmpty())
            parmset->setObjectName(QString::fromUtf8("parmset"));
        parmset->resize(400, 300);
        pushButton = new QPushButton(parmset);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 130, 75, 23));

        retranslateUi(parmset);

        QMetaObject::connectSlotsByName(parmset);
    } // setupUi

    void retranslateUi(QDialog *parmset)
    {
        parmset->setWindowTitle(QApplication::translate("parmset", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("parmset", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class parmset: public Ui_parmset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARMSET_H
