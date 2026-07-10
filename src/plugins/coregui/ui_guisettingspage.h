/********************************************************************************
** Form generated from reading UI file 'guisettingspage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUISETTINGSPAGE_H
#define UI_GUISETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

namespace CoreGUI {

class Ui_GUISettingsPage
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *lblRowsFirst;
    QLabel *lblColumnsFirst;
    QRadioButton *btnRowsFirst;
    QRadioButton *btnColumnsFirst;
    QSpacerItem *verticalSpacer;
    QGroupBox *visibleIconsGrid;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout;
    QCheckBox *userSystemFontSize;
    QLabel *label;
    QSpinBox *overrideFontSize;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QSpinBox *presentationModeMainFontSize;
    QLabel *label_3;
    QSpinBox *presentationModeEditorFontSize;

    void setupUi(QWidget *CoreGUI__GUISettingsPage)
    {
        if (CoreGUI__GUISettingsPage->objectName().isEmpty())
            CoreGUI__GUISettingsPage->setObjectName(QString::fromUtf8("CoreGUI__GUISettingsPage"));
        CoreGUI__GUISettingsPage->resize(392, 601);
        gridLayout = new QGridLayout(CoreGUI__GUISettingsPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(CoreGUI__GUISettingsPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(10);
        lblRowsFirst = new QLabel(groupBox);
        lblRowsFirst->setObjectName(QString::fromUtf8("lblRowsFirst"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblRowsFirst->sizePolicy().hasHeightForWidth());
        lblRowsFirst->setSizePolicy(sizePolicy);
        lblRowsFirst->setMinimumSize(QSize(200, 155));

        gridLayout_2->addWidget(lblRowsFirst, 0, 0, 1, 1);

        lblColumnsFirst = new QLabel(groupBox);
        lblColumnsFirst->setObjectName(QString::fromUtf8("lblColumnsFirst"));

        gridLayout_2->addWidget(lblColumnsFirst, 0, 1, 1, 1);

        btnRowsFirst = new QRadioButton(groupBox);
        btnRowsFirst->setObjectName(QString::fromUtf8("btnRowsFirst"));

        gridLayout_2->addWidget(btnRowsFirst, 1, 0, 1, 1);

        btnColumnsFirst = new QRadioButton(groupBox);
        btnColumnsFirst->setObjectName(QString::fromUtf8("btnColumnsFirst"));

        gridLayout_2->addWidget(btnColumnsFirst, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        visibleIconsGrid = new QGroupBox(CoreGUI__GUISettingsPage);
        visibleIconsGrid->setObjectName(QString::fromUtf8("visibleIconsGrid"));

        gridLayout->addWidget(visibleIconsGrid, 3, 0, 1, 1);

        groupBox_2 = new QGroupBox(CoreGUI__GUISettingsPage);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        formLayout = new QFormLayout(groupBox_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        userSystemFontSize = new QCheckBox(groupBox_2);
        userSystemFontSize->setObjectName(QString::fromUtf8("userSystemFontSize"));

        formLayout->setWidget(0, QFormLayout::LabelRole, userSystemFontSize);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        overrideFontSize = new QSpinBox(groupBox_2);
        overrideFontSize->setObjectName(QString::fromUtf8("overrideFontSize"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(overrideFontSize->sizePolicy().hasHeightForWidth());
        overrideFontSize->setSizePolicy(sizePolicy2);
        overrideFontSize->setMinimumSize(QSize(25, 0));
        overrideFontSize->setMinimum(8);
        overrideFontSize->setMaximum(24);

        formLayout->setWidget(1, QFormLayout::FieldRole, overrideFontSize);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(CoreGUI__GUISettingsPage);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        formLayout_2 = new QFormLayout(groupBox_3);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        presentationModeMainFontSize = new QSpinBox(groupBox_3);
        presentationModeMainFontSize->setObjectName(QString::fromUtf8("presentationModeMainFontSize"));
        sizePolicy2.setHeightForWidth(presentationModeMainFontSize->sizePolicy().hasHeightForWidth());
        presentationModeMainFontSize->setSizePolicy(sizePolicy2);
        presentationModeMainFontSize->setMinimum(8);
        presentationModeMainFontSize->setMaximum(24);
        presentationModeMainFontSize->setValue(14);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, presentationModeMainFontSize);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        presentationModeEditorFontSize = new QSpinBox(groupBox_3);
        presentationModeEditorFontSize->setObjectName(QString::fromUtf8("presentationModeEditorFontSize"));
        sizePolicy2.setHeightForWidth(presentationModeEditorFontSize->sizePolicy().hasHeightForWidth());
        presentationModeEditorFontSize->setSizePolicy(sizePolicy2);
        presentationModeEditorFontSize->setMinimum(8);
        presentationModeEditorFontSize->setMaximum(24);
        presentationModeEditorFontSize->setValue(16);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, presentationModeEditorFontSize);


        gridLayout->addWidget(groupBox_3, 1, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(overrideFontSize);
#endif // QT_CONFIG(shortcut)

        retranslateUi(CoreGUI__GUISettingsPage);
        QObject::connect(userSystemFontSize, SIGNAL(toggled(bool)), label, SLOT(setDisabled(bool)));
        QObject::connect(userSystemFontSize, SIGNAL(toggled(bool)), overrideFontSize, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(CoreGUI__GUISettingsPage);
    } // setupUi

    void retranslateUi(QWidget *CoreGUI__GUISettingsPage)
    {
        CoreGUI__GUISettingsPage->setWindowTitle(QCoreApplication::translate("CoreGUI::GUISettingsPage", "User Interface", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CoreGUI::GUISettingsPage", "Docking layout", nullptr));
        lblRowsFirst->setText(QCoreApplication::translate("CoreGUI::GUISettingsPage", "TextLabel", nullptr));
        lblColumnsFirst->setText(QCoreApplication::translate("CoreGUI::GUISettingsPage", "TextLabel", nullptr));
        btnRowsFirst->setText(QCoreApplication::translate("CoreGUI::GUISettingsPage", "Rows first", nullptr));
        btnColumnsFirst->setText(QCoreApplication::translate("CoreGUI::GUISettingsPage", "Co&lumns first", nullptr));
        visibleIconsGrid->setTitle(QCoreApplication::translate("CoreGUI::GUISettingsPage", "Visible icons in toolbar", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("CoreGUI::GUISettingsPage", "Interface font size", nullptr));
        userSystemFontSize->setText(QCoreApplication::translate("CoreGUI::GUISettingsPage", "Use system settings", nullptr));
        label->setText(QCoreApplication::translate("CoreGUI::GUISettingsPage", "Override font si&ze:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("CoreGUI::GUISettingsPage", "Presentation mode", nullptr));
        label_2->setText(QCoreApplication::translate("CoreGUI::GUISettingsPage", "Main font size:", nullptr));
        label_3->setText(QCoreApplication::translate("CoreGUI::GUISettingsPage", "Editor font size:", nullptr));
    } // retranslateUi

};

} // namespace CoreGUI

namespace CoreGUI {
namespace Ui {
    class GUISettingsPage: public Ui_GUISettingsPage {};
} // namespace Ui
} // namespace CoreGUI

#endif // UI_GUISETTINGSPAGE_H
