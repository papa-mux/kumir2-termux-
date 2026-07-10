/********************************************************************************
** Form generated from reading UI file 'macrolisteditor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACROLISTEDITOR_H
#define UI_MACROLISTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

namespace Editor {

class Ui_MacroListEditor
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout;
    QToolButton *btnRemove;
    QPushButton *btnEdit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;

    void setupUi(QDialog *Editor__MacroListEditor)
    {
        if (Editor__MacroListEditor->objectName().isEmpty())
            Editor__MacroListEditor->setObjectName(QString::fromUtf8("Editor__MacroListEditor"));
        Editor__MacroListEditor->resize(447, 300);
        verticalLayout_2 = new QVBoxLayout(Editor__MacroListEditor);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        listWidget = new QListWidget(Editor__MacroListEditor);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        horizontalLayout_2->addWidget(listWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnRemove = new QToolButton(Editor__MacroListEditor);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));
        btnRemove->setMinimumSize(QSize(32, 32));
        btnRemove->setMaximumSize(QSize(32, 32));
        btnRemove->setIconSize(QSize(22, 22));
        btnRemove->setAutoRaise(false);

        verticalLayout->addWidget(btnRemove);

        btnEdit = new QPushButton(Editor__MacroListEditor);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));
        btnEdit->setMinimumSize(QSize(32, 32));
        btnEdit->setMaximumSize(QSize(32, 32));
        btnEdit->setIconSize(QSize(22, 22));

        verticalLayout->addWidget(btnEdit);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClose = new QPushButton(Editor__MacroListEditor);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout->addWidget(btnClose);


        verticalLayout_2->addLayout(horizontalLayout);

        QWidget::setTabOrder(listWidget, btnClose);
        QWidget::setTabOrder(btnClose, btnRemove);
        QWidget::setTabOrder(btnRemove, btnEdit);

        retranslateUi(Editor__MacroListEditor);
        QObject::connect(btnClose, SIGNAL(clicked()), Editor__MacroListEditor, SLOT(accept()));

        QMetaObject::connectSlotsByName(Editor__MacroListEditor);
    } // setupUi

    void retranslateUi(QDialog *Editor__MacroListEditor)
    {
        Editor__MacroListEditor->setWindowTitle(QCoreApplication::translate("Editor::MacroListEditor", "List of recorded keyboard sequences", nullptr));
#if QT_CONFIG(tooltip)
        btnRemove->setToolTip(QCoreApplication::translate("Editor::MacroListEditor", "Remove", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemove->setText(QString());
#if QT_CONFIG(tooltip)
        btnEdit->setToolTip(QCoreApplication::translate("Editor::MacroListEditor", "Edit...", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEdit->setText(QString());
        btnClose->setText(QCoreApplication::translate("Editor::MacroListEditor", "Close", nullptr));
    } // retranslateUi

};

} // namespace Editor

namespace Editor {
namespace Ui {
    class MacroListEditor: public Ui_MacroListEditor {};
} // namespace Ui
} // namespace Editor

#endif // UI_MACROLISTEDITOR_H
