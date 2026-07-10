/********************************************************************************
** Form generated from reading UI file 'findreplace.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDREPLACE_H
#define UI_FINDREPLACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace Editor {

class Ui_FindReplace
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *findContainer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *find;
    QToolButton *btnPrev;
    QToolButton *btnNext;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *btnMore;
    QSpacerItem *horizontalSpacer;
    QToolButton *btnClose;
    QWidget *replaceContainer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *replace;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnReplace;
    QPushButton *btnReplaceAll;
    QWidget *optionsContainer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *searchMode;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *matchCase;

    void setupUi(QWidget *Editor__FindReplace)
    {
        if (Editor__FindReplace->objectName().isEmpty())
            Editor__FindReplace->setObjectName(QString::fromUtf8("Editor__FindReplace"));
        Editor__FindReplace->resize(492, 120);
        verticalLayout = new QVBoxLayout(Editor__FindReplace);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        findContainer = new QWidget(Editor__FindReplace);
        findContainer->setObjectName(QString::fromUtf8("findContainer"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(findContainer->sizePolicy().hasHeightForWidth());
        findContainer->setSizePolicy(sizePolicy);
        findContainer->setMinimumSize(QSize(0, 32));
        horizontalLayout = new QHBoxLayout(findContainer);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(findContainer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(80, 0));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        find = new QLineEdit(findContainer);
        find->setObjectName(QString::fromUtf8("find"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(find->sizePolicy().hasHeightForWidth());
        find->setSizePolicy(sizePolicy1);
        find->setMinimumSize(QSize(200, 0));
        find->setBaseSize(QSize(220, 0));

        horizontalLayout->addWidget(find);

        btnPrev = new QToolButton(findContainer);
        btnPrev->setObjectName(QString::fromUtf8("btnPrev"));
        btnPrev->setText(QString::fromUtf8("<"));
        btnPrev->setAutoRaise(false);

        horizontalLayout->addWidget(btnPrev);

        btnNext = new QToolButton(findContainer);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));
        btnNext->setText(QString::fromUtf8(">"));
        btnNext->setAutoRaise(false);

        horizontalLayout->addWidget(btnNext);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnMore = new QToolButton(findContainer);
        btnMore->setObjectName(QString::fromUtf8("btnMore"));
        btnMore->setText(QString::fromUtf8("O"));
        btnMore->setCheckable(true);
        btnMore->setAutoRaise(false);

        horizontalLayout->addWidget(btnMore);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClose = new QToolButton(findContainer);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setText(QString::fromUtf8("X"));
        btnClose->setAutoRaise(false);

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addWidget(findContainer);

        replaceContainer = new QWidget(Editor__FindReplace);
        replaceContainer->setObjectName(QString::fromUtf8("replaceContainer"));
        sizePolicy.setHeightForWidth(replaceContainer->sizePolicy().hasHeightForWidth());
        replaceContainer->setSizePolicy(sizePolicy);
        replaceContainer->setMinimumSize(QSize(0, 32));
        horizontalLayout_2 = new QHBoxLayout(replaceContainer);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(replaceContainer);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(80, 0));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        replace = new QLineEdit(replaceContainer);
        replace->setObjectName(QString::fromUtf8("replace"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(replace->sizePolicy().hasHeightForWidth());
        replace->setSizePolicy(sizePolicy2);
        replace->setMinimumSize(QSize(150, 0));
        replace->setBaseSize(QSize(200, 0));

        horizontalLayout_2->addWidget(replace);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        btnReplace = new QPushButton(replaceContainer);
        btnReplace->setObjectName(QString::fromUtf8("btnReplace"));

        horizontalLayout_2->addWidget(btnReplace);

        btnReplaceAll = new QPushButton(replaceContainer);
        btnReplaceAll->setObjectName(QString::fromUtf8("btnReplaceAll"));

        horizontalLayout_2->addWidget(btnReplaceAll);


        verticalLayout->addWidget(replaceContainer);

        optionsContainer = new QWidget(Editor__FindReplace);
        optionsContainer->setObjectName(QString::fromUtf8("optionsContainer"));
        sizePolicy.setHeightForWidth(optionsContainer->sizePolicy().hasHeightForWidth());
        optionsContainer->setSizePolicy(sizePolicy);
        optionsContainer->setMinimumSize(QSize(0, 32));
        horizontalLayout_3 = new QHBoxLayout(optionsContainer);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(optionsContainer);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        searchMode = new QComboBox(optionsContainer);
        searchMode->addItem(QString());
        searchMode->addItem(QString());
        searchMode->setObjectName(QString::fromUtf8("searchMode"));

        horizontalLayout_3->addWidget(searchMode);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        matchCase = new QCheckBox(optionsContainer);
        matchCase->setObjectName(QString::fromUtf8("matchCase"));

        horizontalLayout_3->addWidget(matchCase);


        verticalLayout->addWidget(optionsContainer);

#if QT_CONFIG(shortcut)
        label->setBuddy(find);
        label_2->setBuddy(replace);
        label_3->setBuddy(searchMode);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(find, replace);
        QWidget::setTabOrder(replace, btnReplace);
        QWidget::setTabOrder(btnReplace, btnReplaceAll);
        QWidget::setTabOrder(btnReplaceAll, searchMode);
        QWidget::setTabOrder(searchMode, matchCase);
        QWidget::setTabOrder(matchCase, btnPrev);
        QWidget::setTabOrder(btnPrev, btnNext);
        QWidget::setTabOrder(btnNext, btnMore);
        QWidget::setTabOrder(btnMore, btnClose);

        retranslateUi(Editor__FindReplace);

        QMetaObject::connectSlotsByName(Editor__FindReplace);
    } // setupUi

    void retranslateUi(QWidget *Editor__FindReplace)
    {
        Editor__FindReplace->setWindowTitle(QCoreApplication::translate("Editor::FindReplace", "Form", nullptr));
        label->setText(QCoreApplication::translate("Editor::FindReplace", "Find:", nullptr));
#if QT_CONFIG(tooltip)
        btnPrev->setToolTip(QCoreApplication::translate("Editor::FindReplace", "Find previous", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        btnPrev->setShortcut(QCoreApplication::translate("Editor::FindReplace", "Shift+F3", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        btnNext->setToolTip(QCoreApplication::translate("Editor::FindReplace", "Find next", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        btnNext->setShortcut(QCoreApplication::translate("Editor::FindReplace", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        btnMore->setToolTip(QCoreApplication::translate("Editor::FindReplace", "Show options", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnClose->setToolTip(QCoreApplication::translate("Editor::FindReplace", "Close search", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        btnClose->setShortcut(QCoreApplication::translate("Editor::FindReplace", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        label_2->setText(QCoreApplication::translate("Editor::FindReplace", "Replace:", nullptr));
        btnReplace->setText(QCoreApplication::translate("Editor::FindReplace", "Replace", nullptr));
        btnReplaceAll->setText(QCoreApplication::translate("Editor::FindReplace", "Replace All", nullptr));
        label_3->setText(QCoreApplication::translate("Editor::FindReplace", "Search mode:", nullptr));
        searchMode->setItemText(0, QCoreApplication::translate("Editor::FindReplace", "Plain text", nullptr));
        searchMode->setItemText(1, QCoreApplication::translate("Editor::FindReplace", "Pattern", nullptr));

        matchCase->setText(QCoreApplication::translate("Editor::FindReplace", "Match case", nullptr));
    } // retranslateUi

};

} // namespace Editor

namespace Editor {
namespace Ui {
    class FindReplace: public Ui_FindReplace {};
} // namespace Ui
} // namespace Editor

#endif // UI_FINDREPLACE_H
