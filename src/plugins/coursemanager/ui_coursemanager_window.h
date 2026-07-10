/********************************************************************************
** Form generated from reading UI file 'coursemanager_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEMANAGER_WINDOW_H
#define UI_COURSEMANAGER_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowTask
{
public:
    QAction *loadCurs;
    QAction *checkTask;
    QAction *action_3;
    QAction *action_4;
    QAction *actionClose;
    QAction *do_task;
    QAction *actionSave;
    QAction *actionReset;
    QAction *actionTested;
    QAction *actionAdd;
    QAction *actionRemove;
    QAction *actionEdit;
    QAction *addDeep;
    QAction *actionSaveK;
    QAction *actionSaveKas;
    QAction *actionNewK;
    QAction *actionup;
    QAction *actionDown;
    QAction *actionNext;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QTreeView *treeView;
    QWidget *webView;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindowTask)
    {
        if (MainWindowTask->objectName().isEmpty())
            MainWindowTask->setObjectName(QString::fromUtf8("MainWindowTask"));
        MainWindowTask->resize(545, 405);
        MainWindowTask->setMinimumSize(QSize(100, 100));
        loadCurs = new QAction(MainWindowTask);
        loadCurs->setObjectName(QString::fromUtf8("loadCurs"));
        checkTask = new QAction(MainWindowTask);
        checkTask->setObjectName(QString::fromUtf8("checkTask"));
        checkTask->setEnabled(false);
        action_3 = new QAction(MainWindowTask);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_3->setEnabled(false);
        action_4 = new QAction(MainWindowTask);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_4->setEnabled(false);
        actionClose = new QAction(MainWindowTask);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        do_task = new QAction(MainWindowTask);
        do_task->setObjectName(QString::fromUtf8("do_task"));
        do_task->setEnabled(false);
        do_task->setVisible(false);
        actionSave = new QAction(MainWindowTask);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave->setEnabled(false);
        actionReset = new QAction(MainWindowTask);
        actionReset->setObjectName(QString::fromUtf8("actionReset"));
        actionReset->setEnabled(false);
        actionTested = new QAction(MainWindowTask);
        actionTested->setObjectName(QString::fromUtf8("actionTested"));
        actionTested->setEnabled(false);
        actionAdd = new QAction(MainWindowTask);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        actionAdd->setCheckable(false);
        actionRemove = new QAction(MainWindowTask);
        actionRemove->setObjectName(QString::fromUtf8("actionRemove"));
        actionEdit = new QAction(MainWindowTask);
        actionEdit->setObjectName(QString::fromUtf8("actionEdit"));
        actionEdit->setEnabled(false);
        addDeep = new QAction(MainWindowTask);
        addDeep->setObjectName(QString::fromUtf8("addDeep"));
        actionSaveK = new QAction(MainWindowTask);
        actionSaveK->setObjectName(QString::fromUtf8("actionSaveK"));
        actionSaveK->setVisible(false);
        actionSaveKas = new QAction(MainWindowTask);
        actionSaveKas->setObjectName(QString::fromUtf8("actionSaveKas"));
        actionNewK = new QAction(MainWindowTask);
        actionNewK->setObjectName(QString::fromUtf8("actionNewK"));
        actionup = new QAction(MainWindowTask);
        actionup->setObjectName(QString::fromUtf8("actionup"));
        actionup->setEnabled(false);
        actionDown = new QAction(MainWindowTask);
        actionDown->setObjectName(QString::fromUtf8("actionDown"));
        actionDown->setEnabled(false);
        actionNext = new QAction(MainWindowTask);
        actionNext->setObjectName(QString::fromUtf8("actionNext"));
        actionNext->setEnabled(false);
        centralWidget = new QWidget(MainWindowTask);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        treeView = new QTreeView(splitter);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setMinimumSize(QSize(50, 100));
        QFont font;
        font.setPointSize(10);
        font.setKerning(false);
        treeView->setFont(font);
        treeView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        treeView->setProperty("showDropIndicator", QVariant(false));
        treeView->setIconSize(QSize(20, 20));
        treeView->setIndentation(15);
        treeView->setUniformRowHeights(true);
        treeView->setAnimated(true);
        splitter->addWidget(treeView);
        webView = new QWidget(splitter);
        webView->setObjectName(QString::fromUtf8("webView"));
        splitter->addWidget(webView);

        gridLayout_2->addWidget(splitter, 0, 0, 1, 1);

        MainWindowTask->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindowTask);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindowTask->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(loadCurs);
        mainToolBar->addAction(do_task);
        mainToolBar->addAction(checkTask);
        mainToolBar->addAction(actionNext);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionup);
        mainToolBar->addAction(actionDown);

        retranslateUi(MainWindowTask);

        QMetaObject::connectSlotsByName(MainWindowTask);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowTask)
    {
        MainWindowTask->setWindowTitle(QCoreApplication::translate("MainWindowTask", "\320\237\321\200\320\260\320\272\321\202\320\270\320\272\321\203\320\274", nullptr));
        loadCurs->setText(QCoreApplication::translate("MainWindowTask", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\272\321\203\321\200\321\201", nullptr));
        checkTask->setText(QCoreApplication::translate("MainWindowTask", "\320\237\321\200\320\276\320\262\320\265\321\200\320\270\321\202\321\214", nullptr));
        action_3->setText(QCoreApplication::translate("MainWindowTask", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214", nullptr));
        action_4->setText(QCoreApplication::translate("MainWindowTask", "\320\237\320\276\320\264\321\201\320\272\320\260\320\267\320\272\320\260", nullptr));
        actionClose->setText(QCoreApplication::translate("MainWindowTask", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        do_task->setText(QCoreApplication::translate("MainWindowTask", "\320\222\321\213\320\277\320\276\320\273\320\275\321\217\321\202\321\214", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindowTask", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272...", nullptr));
        actionReset->setText(QCoreApplication::translate("MainWindowTask", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 \320\272 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\271", nullptr));
        actionTested->setText(QCoreApplication::translate("MainWindowTask", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 \320\272 \320\277\321\200\320\276\320\262\320\265\321\200\320\265\320\275\320\275\320\276\320\271", nullptr));
        actionAdd->setText(QCoreApplication::translate("MainWindowTask", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        actionRemove->setText(QCoreApplication::translate("MainWindowTask", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 ", nullptr));
        actionEdit->setText(QCoreApplication::translate("MainWindowTask", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        addDeep->setText(QCoreApplication::translate("MainWindowTask", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262\320\263\320\273\321\203\320\261\321\214", nullptr));
        actionSaveK->setText(QCoreApplication::translate("MainWindowTask", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        actionSaveKas->setText(QCoreApplication::translate("MainWindowTask", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272...", nullptr));
        actionNewK->setText(QCoreApplication::translate("MainWindowTask", "\320\235\320\276\320\262\321\213\320\271 \320\272\321\203\321\200\321\201", nullptr));
        actionup->setText(QCoreApplication::translate("MainWindowTask", "\320\237\320\265\321\200\320\265\320\274\320\265\321\201\321\202\320\270\321\202\321\214 \320\262\320\262\320\265\321\200\321\205", nullptr));
        actionDown->setText(QCoreApplication::translate("MainWindowTask", "\320\237\320\265\321\200\320\265\320\274\320\265\321\201\321\202\320\270\321\202\321\214 \320\262\320\275\320\270\320\267", nullptr));
        actionNext->setText(QCoreApplication::translate("MainWindowTask", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\265\320\265 \320\267\320\260\320\264\320\260\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowTask: public Ui_MainWindowTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEMANAGER_WINDOW_H
