/********************************************************************************
** Form generated from reading UI file 'systemopenfilesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMOPENFILESETTINGS_H
#define UI_SYSTEMOPENFILESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace CoreGUI {

class Ui_SystemOpenFileSettings
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QWidget *CoreGUI__SystemOpenFileSettings)
    {
        if (CoreGUI__SystemOpenFileSettings->objectName().isEmpty())
            CoreGUI__SystemOpenFileSettings->setObjectName(QString::fromUtf8("CoreGUI__SystemOpenFileSettings"));
        CoreGUI__SystemOpenFileSettings->resize(317, 232);
        verticalLayout = new QVBoxLayout(CoreGUI__SystemOpenFileSettings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(CoreGUI__SystemOpenFileSettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        verticalLayout->addWidget(groupBox);


        retranslateUi(CoreGUI__SystemOpenFileSettings);

        QMetaObject::connectSlotsByName(CoreGUI__SystemOpenFileSettings);
    } // setupUi

    void retranslateUi(QWidget *CoreGUI__SystemOpenFileSettings)
    {
        CoreGUI__SystemOpenFileSettings->setWindowTitle(QCoreApplication::translate("CoreGUI::SystemOpenFileSettings", "File Open", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CoreGUI::SystemOpenFileSettings", "Open .kum file by system in:", nullptr));
    } // retranslateUi

};

} // namespace CoreGUI

namespace CoreGUI {
namespace Ui {
    class SystemOpenFileSettings: public Ui_SystemOpenFileSettings {};
} // namespace Ui
} // namespace CoreGUI

#endif // UI_SYSTEMOPENFILESETTINGS_H
