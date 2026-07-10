/********************************************************************************
** Form generated from reading UI file 'printdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTDIALOG_H
#define UI_PRINTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>

namespace DocBookViewer {

class Ui_PrintDialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTreeWidget *itemsChooser;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QComboBox *paperSize;
    QLabel *pagesCountLabel;
    QPushButton *estimatePagesButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DocBookViewer__PrintDialog)
    {
        if (DocBookViewer__PrintDialog->objectName().isEmpty())
            DocBookViewer__PrintDialog->setObjectName(QString::fromUtf8("DocBookViewer__PrintDialog"));
        DocBookViewer__PrintDialog->resize(400, 434);
        gridLayout_2 = new QGridLayout(DocBookViewer__PrintDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(DocBookViewer__PrintDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        itemsChooser = new QTreeWidget(groupBox);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        itemsChooser->setHeaderItem(__qtreewidgetitem);
        itemsChooser->setObjectName(QString::fromUtf8("itemsChooser"));
        itemsChooser->header()->setVisible(false);

        gridLayout->addWidget(itemsChooser, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(DocBookViewer__PrintDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        paperSize = new QComboBox(groupBox_2);
        paperSize->addItem(QString());
        paperSize->addItem(QString());
        paperSize->setObjectName(QString::fromUtf8("paperSize"));

        gridLayout_3->addWidget(paperSize, 0, 1, 1, 1);

        pagesCountLabel = new QLabel(groupBox_2);
        pagesCountLabel->setObjectName(QString::fromUtf8("pagesCountLabel"));

        gridLayout_3->addWidget(pagesCountLabel, 1, 0, 1, 1);

        estimatePagesButton = new QPushButton(groupBox_2);
        estimatePagesButton->setObjectName(QString::fromUtf8("estimatePagesButton"));

        gridLayout_3->addWidget(estimatePagesButton, 1, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DocBookViewer__PrintDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);

#if QT_CONFIG(shortcut)
        pagesCountLabel->setBuddy(estimatePagesButton);
#endif // QT_CONFIG(shortcut)

        retranslateUi(DocBookViewer__PrintDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DocBookViewer__PrintDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DocBookViewer__PrintDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DocBookViewer__PrintDialog);
    } // setupUi

    void retranslateUi(QDialog *DocBookViewer__PrintDialog)
    {
        DocBookViewer__PrintDialog->setWindowTitle(QCoreApplication::translate("DocBookViewer::PrintDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DocBookViewer::PrintDialog", "Items to print", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DocBookViewer::PrintDialog", "Pages options", nullptr));
        label->setText(QCoreApplication::translate("DocBookViewer::PrintDialog", "Page size:", nullptr));
        paperSize->setItemText(0, QCoreApplication::translate("DocBookViewer::PrintDialog", "A4", nullptr));
        paperSize->setItemText(1, QCoreApplication::translate("DocBookViewer::PrintDialog", "A5", nullptr));

        pagesCountLabel->setText(QCoreApplication::translate("DocBookViewer::PrintDialog", "Pages count: unknown", nullptr));
        estimatePagesButton->setText(QCoreApplication::translate("DocBookViewer::PrintDialog", "Estimate pages count", nullptr));
    } // retranslateUi

};

} // namespace DocBookViewer

namespace DocBookViewer {
namespace Ui {
    class PrintDialog: public Ui_PrintDialog {};
} // namespace Ui
} // namespace DocBookViewer

#endif // UI_PRINTDIALOG_H
