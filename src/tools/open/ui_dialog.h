/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OpenDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QCheckBox *checkBox;
    QLabel *hint;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *OpenDialog)
    {
        if (OpenDialog->objectName().isEmpty())
            OpenDialog->setObjectName(QString::fromUtf8("OpenDialog"));
        OpenDialog->resize(432, 209);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OpenDialog->sizePolicy().hasHeightForWidth());
        OpenDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(OpenDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(OpenDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        comboBox = new QComboBox(OpenDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QFont font1;
        font1.setPointSize(13);
        comboBox->setFont(font1);
        comboBox->setIconSize(QSize(32, 32));

        verticalLayout->addWidget(comboBox);

        checkBox = new QCheckBox(OpenDialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        hint = new QLabel(OpenDialog);
        hint->setObjectName(QString::fromUtf8("hint"));
        hint->setWordWrap(true);

        verticalLayout->addWidget(hint);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(OpenDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(OpenDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(pushButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, comboBox);

        retranslateUi(OpenDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), OpenDialog, SLOT(accept()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), OpenDialog, SLOT(reject()));
        QObject::connect(checkBox, SIGNAL(toggled(bool)), hint, SLOT(setVisible(bool)));

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(OpenDialog);
    } // setupUi

    void retranslateUi(QDialog *OpenDialog)
    {
        OpenDialog->setWindowTitle(QCoreApplication::translate("OpenDialog", "\320\227\320\260\320\277\321\203\321\201\320\272 \320\232\321\203\320\274\320\270\321\200", nullptr));
        label->setText(QCoreApplication::translate("OpenDialog", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\273\320\265\320\275\320\276 \320\275\320\265\321\201\320\272\320\276\320\273\321\214\320\272\320\276 \320\262\320\260\321\200\320\270\320\260\320\275\321\202\320\276\320\262 \321\201\320\270\321\201\321\202\320\265\320\274\321\213 \320\232\321\203\320\274\320\270\321\200. \320\222 \320\272\320\260\320\272\320\276\320\274 \320\276\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273?", nullptr));
        checkBox->setText(QCoreApplication::translate("OpenDialog", "\320\227\320\260\320\277\320\276\320\274\320\275\320\270\321\202\321\214 \320\270 \320\261\320\276\320\273\321\214\321\210\320\265 \320\275\320\265 \321\201\320\277\321\200\320\260\321\210\320\270\320\262\320\260\321\202\321\214", nullptr));
        hint->setText(QCoreApplication::translate("OpenDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203 \320\264\320\273\321\217 \320\267\320\260\320\277\321\203\321\201\320\272\320\260 \320\274\320\276\320\266\320\275\320\276 \320\270\320\267 \321\200\320\260\320\267\320\264\320\265\320\273\320\260 <br/></span><span style=\" font-size:10pt; font-weight:600;\">\320\236\321\202\320\272\321\200\321\213\321\202\320\270\320\265 \321\204\320\260\320\271\320\273\320\276\320\262</span><span style=\" font-size:10pt;\"> \320\262 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260\321\205 \320\232\321\203\320\274\320\270\321\200.</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("OpenDialog", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        pushButton->setShortcut(QCoreApplication::translate("OpenDialog", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_2->setText(QCoreApplication::translate("OpenDialog", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_2->setShortcut(QCoreApplication::translate("OpenDialog", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class OpenDialog: public Ui_OpenDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
