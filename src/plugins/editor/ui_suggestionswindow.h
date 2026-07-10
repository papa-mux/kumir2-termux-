/********************************************************************************
** Form generated from reading UI file 'suggestionswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUGGESTIONSWINDOW_H
#define UI_SUGGESTIONSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QWidget>

namespace Editor {

class Ui_SuggestionsWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QListView *alist;

    void setupUi(QWidget *Editor__SuggestionsWindow)
    {
        if (Editor__SuggestionsWindow->objectName().isEmpty())
            Editor__SuggestionsWindow->setObjectName(QString::fromUtf8("Editor__SuggestionsWindow"));
        Editor__SuggestionsWindow->resize(246, 180);
        Editor__SuggestionsWindow->setAutoFillBackground(true);
        horizontalLayout = new QHBoxLayout(Editor__SuggestionsWindow);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        alist = new QListView(Editor__SuggestionsWindow);
        alist->setObjectName(QString::fromUtf8("alist"));
        alist->setEditTriggers(QAbstractItemView::NoEditTriggers);

        horizontalLayout->addWidget(alist);


        retranslateUi(Editor__SuggestionsWindow);

        QMetaObject::connectSlotsByName(Editor__SuggestionsWindow);
    } // setupUi

    void retranslateUi(QWidget *Editor__SuggestionsWindow)
    {
        Editor__SuggestionsWindow->setWindowTitle(QCoreApplication::translate("Editor::SuggestionsWindow", "Suggestions", nullptr));
    } // retranslateUi

};

} // namespace Editor

namespace Editor {
namespace Ui {
    class SuggestionsWindow: public Ui_SuggestionsWindow {};
} // namespace Ui
} // namespace Editor

#endif // UI_SUGGESTIONSWINDOW_H
