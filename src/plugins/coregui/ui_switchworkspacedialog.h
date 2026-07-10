/********************************************************************************
** Form generated from reading UI file 'switchworkspacedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SWITCHWORKSPACEDIALOG_H
#define UI_SWITCHWORKSPACEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

namespace CoreGUI {

class Ui_SwitchWorkspaceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CoreGUI__SwitchWorkspaceDialog)
    {
        if (CoreGUI__SwitchWorkspaceDialog->objectName().isEmpty())
            CoreGUI__SwitchWorkspaceDialog->setObjectName(QString::fromUtf8("CoreGUI__SwitchWorkspaceDialog"));
        CoreGUI__SwitchWorkspaceDialog->resize(699, 285);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CoreGUI__SwitchWorkspaceDialog->sizePolicy().hasHeightForWidth());
        CoreGUI__SwitchWorkspaceDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(CoreGUI__SwitchWorkspaceDialog);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(CoreGUI__SwitchWorkspaceDialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy1);
        textBrowser->setMaximumSize(QSize(16777215, 120));
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(CoreGUI__SwitchWorkspaceDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(CoreGUI__SwitchWorkspaceDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy2);
        comboBox->setEditable(true);

        horizontalLayout->addWidget(comboBox);

        pushButton = new QPushButton(CoreGUI__SwitchWorkspaceDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        checkBox = new QCheckBox(CoreGUI__SwitchWorkspaceDialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(CoreGUI__SwitchWorkspaceDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(comboBox, pushButton);
        QWidget::setTabOrder(pushButton, checkBox);
        QWidget::setTabOrder(checkBox, buttonBox);
        QWidget::setTabOrder(buttonBox, textBrowser);

        retranslateUi(CoreGUI__SwitchWorkspaceDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CoreGUI__SwitchWorkspaceDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CoreGUI__SwitchWorkspaceDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CoreGUI__SwitchWorkspaceDialog);
    } // setupUi

    void retranslateUi(QDialog *CoreGUI__SwitchWorkspaceDialog)
    {
        CoreGUI__SwitchWorkspaceDialog->setWindowTitle(QCoreApplication::translate("CoreGUI::SwitchWorkspaceDialog", "Workspace Launcher", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("CoreGUI::SwitchWorkspaceDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Droid Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("CoreGUI::SwitchWorkspaceDialog", "Workspace:", nullptr));
        pushButton->setText(QCoreApplication::translate("CoreGUI::SwitchWorkspaceDialog", "Browse...", nullptr));
        checkBox->setText(QCoreApplication::translate("CoreGUI::SwitchWorkspaceDialog", "Use this as the default and do not ask again", nullptr));
    } // retranslateUi

};

} // namespace CoreGUI

namespace CoreGUI {
namespace Ui {
    class SwitchWorkspaceDialog: public Ui_SwitchWorkspaceDialog {};
} // namespace Ui
} // namespace CoreGUI

#endif // UI_SWITCHWORKSPACEDIALOG_H
