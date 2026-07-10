/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>
#include "menubar.h"

namespace CoreGUI {

class Ui_MainWindow
{
public:
    QAction *actionNewProgram;
    QAction *actionNewText;
    QAction *actionOpen;
    QAction *actionRecent_files;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionSave_all;
    QAction *actionClose;
    QAction *actionSwitch_workspace;
    QAction *actionExit;
    QAction *actionUsage;
    QAction *actionAbout;
    QAction *actionPreferences;
    QAction *actionNew_pascal_program;
    QAction *actionRestore_previous_session;
    QAction *actionVariables;
    QAction *actionShow_Console_Pane;
    QAction *actionMake_native_executable;
    QAction *actionLanguage_Quick_Reference;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    MenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuEdit;
    QMenu *menuInsert;
    QMenu *menuRun;
    QMenu *menuWindow;

    void setupUi(QMainWindow *CoreGUI__MainWindow)
    {
        if (CoreGUI__MainWindow->objectName().isEmpty())
            CoreGUI__MainWindow->setObjectName(QString::fromUtf8("CoreGUI__MainWindow"));
        CoreGUI__MainWindow->resize(742, 542);
        CoreGUI__MainWindow->setTabShape(QTabWidget::Triangular);
        CoreGUI__MainWindow->setDockNestingEnabled(false);
        CoreGUI__MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        actionNewProgram = new QAction(CoreGUI__MainWindow);
        actionNewProgram->setObjectName(QString::fromUtf8("actionNewProgram"));
        actionNewText = new QAction(CoreGUI__MainWindow);
        actionNewText->setObjectName(QString::fromUtf8("actionNewText"));
        actionOpen = new QAction(CoreGUI__MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionRecent_files = new QAction(CoreGUI__MainWindow);
        actionRecent_files->setObjectName(QString::fromUtf8("actionRecent_files"));
        actionSave = new QAction(CoreGUI__MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_as = new QAction(CoreGUI__MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionSave_all = new QAction(CoreGUI__MainWindow);
        actionSave_all->setObjectName(QString::fromUtf8("actionSave_all"));
        actionClose = new QAction(CoreGUI__MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionSwitch_workspace = new QAction(CoreGUI__MainWindow);
        actionSwitch_workspace->setObjectName(QString::fromUtf8("actionSwitch_workspace"));
        actionExit = new QAction(CoreGUI__MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExit->setMenuRole(QAction::QuitRole);
        actionUsage = new QAction(CoreGUI__MainWindow);
        actionUsage->setObjectName(QString::fromUtf8("actionUsage"));
        actionUsage->setCheckable(false);
        actionUsage->setShortcutContext(Qt::ApplicationShortcut);
        actionAbout = new QAction(CoreGUI__MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionPreferences = new QAction(CoreGUI__MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionPreferences->setMenuRole(QAction::PreferencesRole);
        actionNew_pascal_program = new QAction(CoreGUI__MainWindow);
        actionNew_pascal_program->setObjectName(QString::fromUtf8("actionNew_pascal_program"));
        actionRestore_previous_session = new QAction(CoreGUI__MainWindow);
        actionRestore_previous_session->setObjectName(QString::fromUtf8("actionRestore_previous_session"));
        actionVariables = new QAction(CoreGUI__MainWindow);
        actionVariables->setObjectName(QString::fromUtf8("actionVariables"));
        actionVariables->setCheckable(false);
        actionVariables->setShortcutContext(Qt::ApplicationShortcut);
        actionShow_Console_Pane = new QAction(CoreGUI__MainWindow);
        actionShow_Console_Pane->setObjectName(QString::fromUtf8("actionShow_Console_Pane"));
        actionShow_Console_Pane->setCheckable(true);
        actionMake_native_executable = new QAction(CoreGUI__MainWindow);
        actionMake_native_executable->setObjectName(QString::fromUtf8("actionMake_native_executable"));
        actionLanguage_Quick_Reference = new QAction(CoreGUI__MainWindow);
        actionLanguage_Quick_Reference->setObjectName(QString::fromUtf8("actionLanguage_Quick_Reference"));
        actionLanguage_Quick_Reference->setShortcutContext(Qt::ApplicationShortcut);
        actionLanguage_Quick_Reference->setVisible(false);
        centralwidget = new QWidget(CoreGUI__MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(10);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        CoreGUI__MainWindow->setCentralWidget(centralwidget);
        menubar = new MenuBar(CoreGUI__MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 742, 28));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuFile->setTearOffEnabled(false);
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuHelp->setTearOffEnabled(false);
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuInsert = new QMenu(menubar);
        menuInsert->setObjectName(QString::fromUtf8("menuInsert"));
        menuRun = new QMenu(menubar);
        menuRun->setObjectName(QString::fromUtf8("menuRun"));
        menuWindow = new QMenu(menubar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
        CoreGUI__MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuInsert->menuAction());
        menubar->addAction(menuRun->menuAction());
        menubar->addAction(menuWindow->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNewProgram);
        menuFile->addAction(actionNewText);
        menuFile->addSeparator();
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionRecent_files);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(actionSave_all);
        menuFile->addAction(actionMake_native_executable);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuFile->addSeparator();
        menuFile->addAction(actionSwitch_workspace);
        menuFile->addAction(actionRestore_previous_session);
        menuFile->addSeparator();
        menuFile->addAction(actionPreferences);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionUsage);
        menuHelp->addAction(actionVariables);
        menuHelp->addAction(actionLanguage_Quick_Reference);
        menuHelp->addAction(actionAbout);
        menuWindow->addAction(actionShow_Console_Pane);

        retranslateUi(CoreGUI__MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), CoreGUI__MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(CoreGUI__MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CoreGUI__MainWindow)
    {
        CoreGUI__MainWindow->setWindowTitle(QCoreApplication::translate("CoreGUI::MainWindow", "Kumir", nullptr));
        actionNewProgram->setText(QCoreApplication::translate("CoreGUI::MainWindow", "&New program", nullptr));
#if QT_CONFIG(shortcut)
        actionNewProgram->setShortcut(QCoreApplication::translate("CoreGUI::MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNewText->setText(QCoreApplication::translate("CoreGUI::MainWindow", "New te&xt", nullptr));
#if QT_CONFIG(shortcut)
        actionNewText->setShortcut(QCoreApplication::translate("CoreGUI::MainWindow", "Ctrl+Shift+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("CoreGUI::MainWindow", "&Open...", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("CoreGUI::MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRecent_files->setText(QCoreApplication::translate("CoreGUI::MainWindow", "&Recent files", nullptr));
        actionSave->setText(QCoreApplication::translate("CoreGUI::MainWindow", "&Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("CoreGUI::MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("CoreGUI::MainWindow", "Sa&ve as...", nullptr));
        actionSave_all->setText(QCoreApplication::translate("CoreGUI::MainWindow", "Save a&ll", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_all->setShortcut(QCoreApplication::translate("CoreGUI::MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose->setText(QCoreApplication::translate("CoreGUI::MainWindow", "&Close", nullptr));
#if QT_CONFIG(shortcut)
        actionClose->setShortcut(QCoreApplication::translate("CoreGUI::MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSwitch_workspace->setText(QCoreApplication::translate("CoreGUI::MainWindow", "Switch &workspace...", nullptr));
        actionExit->setText(QCoreApplication::translate("CoreGUI::MainWindow", "&Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("CoreGUI::MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUsage->setText(QCoreApplication::translate("CoreGUI::MainWindow", "&Manuals", nullptr));
#if QT_CONFIG(shortcut)
        actionUsage->setShortcut(QCoreApplication::translate("CoreGUI::MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("CoreGUI::MainWindow", "&About...", nullptr));
        actionPreferences->setText(QCoreApplication::translate("CoreGUI::MainWindow", "&Preferences...", nullptr));
        actionNew_pascal_program->setText(QCoreApplication::translate("CoreGUI::MainWindow", "New Pascal program", nullptr));
#if QT_CONFIG(shortcut)
        actionNew_pascal_program->setShortcut(QCoreApplication::translate("CoreGUI::MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRestore_previous_session->setText(QCoreApplication::translate("CoreGUI::MainWindow", "Restore prev&ious session", nullptr));
        actionVariables->setText(QCoreApplication::translate("CoreGUI::MainWindow", "&Variable Current Values", nullptr));
#if QT_CONFIG(shortcut)
        actionVariables->setShortcut(QCoreApplication::translate("CoreGUI::MainWindow", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShow_Console_Pane->setText(QCoreApplication::translate("CoreGUI::MainWindow", "&Show Console Pane", nullptr));
#if QT_CONFIG(shortcut)
        actionShow_Console_Pane->setShortcut(QCoreApplication::translate("CoreGUI::MainWindow", "F12", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMake_native_executable->setText(QCoreApplication::translate("CoreGUI::MainWindow", "&Make native executable...", nullptr));
        actionLanguage_Quick_Reference->setText(QCoreApplication::translate("CoreGUI::MainWindow", "Language Quick Reference", nullptr));
#if QT_CONFIG(shortcut)
        actionLanguage_Quick_Reference->setShortcut(QCoreApplication::translate("CoreGUI::MainWindow", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        menuFile->setTitle(QCoreApplication::translate("CoreGUI::MainWindow", "Fi&le", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("CoreGUI::MainWindow", "Help", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("CoreGUI::MainWindow", "Edit", nullptr));
        menuInsert->setTitle(QCoreApplication::translate("CoreGUI::MainWindow", "&Insert", nullptr));
        menuRun->setTitle(QCoreApplication::translate("CoreGUI::MainWindow", "&Run", nullptr));
        menuWindow->setTitle(QCoreApplication::translate("CoreGUI::MainWindow", "Wi&ndow", nullptr));
    } // retranslateUi

};

} // namespace CoreGUI

namespace CoreGUI {
namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui
} // namespace CoreGUI

#endif // UI_MAINWINDOW_H
