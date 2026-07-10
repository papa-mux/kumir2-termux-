/********************************************************************************
** Form generated from reading UI file 'iosettingseditorpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IOSETTINGSEDITORPAGE_H
#define UI_IOSETTINGSEDITORPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace CoreGUI {

class Ui_IOSettingsEditorPage
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *useFixedWidth;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpinBox *widthInCharacters;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *CoreGUI__IOSettingsEditorPage)
    {
        if (CoreGUI__IOSettingsEditorPage->objectName().isEmpty())
            CoreGUI__IOSettingsEditorPage->setObjectName(QString::fromUtf8("CoreGUI__IOSettingsEditorPage"));
        CoreGUI__IOSettingsEditorPage->resize(400, 300);
        verticalLayout = new QVBoxLayout(CoreGUI__IOSettingsEditorPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(CoreGUI__IOSettingsEditorPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        useFixedWidth = new QCheckBox(groupBox);
        useFixedWidth->setObjectName(QString::fromUtf8("useFixedWidth"));

        verticalLayout_2->addWidget(useFixedWidth);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(false);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widthInCharacters = new QSpinBox(groupBox);
        widthInCharacters->setObjectName(QString::fromUtf8("widthInCharacters"));
        widthInCharacters->setEnabled(false);
        widthInCharacters->setMinimum(1);
        widthInCharacters->setMaximum(1000);
        widthInCharacters->setValue(80);

        horizontalLayout->addWidget(widthInCharacters);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 184, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

#if QT_CONFIG(shortcut)
        label->setBuddy(widthInCharacters);
#endif // QT_CONFIG(shortcut)

        retranslateUi(CoreGUI__IOSettingsEditorPage);
        QObject::connect(useFixedWidth, SIGNAL(toggled(bool)), label, SLOT(setEnabled(bool)));
        QObject::connect(useFixedWidth, SIGNAL(toggled(bool)), widthInCharacters, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(CoreGUI__IOSettingsEditorPage);
    } // setupUi

    void retranslateUi(QWidget *CoreGUI__IOSettingsEditorPage)
    {
        CoreGUI__IOSettingsEditorPage->setWindowTitle(QCoreApplication::translate("CoreGUI::IOSettingsEditorPage", "Input/Output", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CoreGUI::IOSettingsEditorPage", "Terminal width", nullptr));
        useFixedWidth->setText(QCoreApplication::translate("CoreGUI::IOSettingsEditorPage", "Use fixed width for new launch sessions", nullptr));
        label->setText(QCoreApplication::translate("CoreGUI::IOSettingsEditorPage", "Width in characters:", nullptr));
    } // retranslateUi

};

} // namespace CoreGUI

namespace CoreGUI {
namespace Ui {
    class IOSettingsEditorPage: public Ui_IOSettingsEditorPage {};
} // namespace Ui
} // namespace CoreGUI

#endif // UI_IOSETTINGSEDITORPAGE_H
