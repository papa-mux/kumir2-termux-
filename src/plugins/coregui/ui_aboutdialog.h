/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <kumir2-libs/widgets/utf8textbrowser.h>

namespace CoreGUI {

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabAbout;
    QGridLayout *gridLayout;
    Widgets::Utf8TextBrowser *aboutTextBrowser;
    QWidget *tabLicense;
    QVBoxLayout *verticalLayout_2;
    Widgets::Utf8TextBrowser *licenseTextBrowser;
    QWidget *tabSystemInformation;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *versionInfoStack;
    QWidget *pageKumirApp;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *version;
    QLabel *label_3;
    QLineEdit *lastModified;
    QSpacerItem *verticalSpacer;
    QWidget *pageCustomApp;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QLineEdit *customVersion;
    QLabel *label_4;
    QLineEdit *kumirPlatformVersion;
    QSpacerItem *verticalSpacer_2;
    QTableWidget *tableWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnCopyEnvironmentAndVersion;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;

    void setupUi(QDialog *CoreGUI__AboutDialog)
    {
        if (CoreGUI__AboutDialog->objectName().isEmpty())
            CoreGUI__AboutDialog->setObjectName(QString::fromUtf8("CoreGUI__AboutDialog"));
        CoreGUI__AboutDialog->resize(647, 494);
        verticalLayout = new QVBoxLayout(CoreGUI__AboutDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(CoreGUI__AboutDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabAbout = new QWidget();
        tabAbout->setObjectName(QString::fromUtf8("tabAbout"));
        gridLayout = new QGridLayout(tabAbout);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        aboutTextBrowser = new Widgets::Utf8TextBrowser(tabAbout);
        aboutTextBrowser->setObjectName(QString::fromUtf8("aboutTextBrowser"));

        gridLayout->addWidget(aboutTextBrowser, 0, 0, 1, 1);

        tabWidget->addTab(tabAbout, QString());
        tabLicense = new QWidget();
        tabLicense->setObjectName(QString::fromUtf8("tabLicense"));
        verticalLayout_2 = new QVBoxLayout(tabLicense);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        licenseTextBrowser = new Widgets::Utf8TextBrowser(tabLicense);
        licenseTextBrowser->setObjectName(QString::fromUtf8("licenseTextBrowser"));

        verticalLayout_2->addWidget(licenseTextBrowser);

        tabWidget->addTab(tabLicense, QString());
        tabSystemInformation = new QWidget();
        tabSystemInformation->setObjectName(QString::fromUtf8("tabSystemInformation"));
        verticalLayout_4 = new QVBoxLayout(tabSystemInformation);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        versionInfoStack = new QStackedWidget(tabSystemInformation);
        versionInfoStack->setObjectName(QString::fromUtf8("versionInfoStack"));
        pageKumirApp = new QWidget();
        pageKumirApp->setObjectName(QString::fromUtf8("pageKumirApp"));
        verticalLayout_3 = new QVBoxLayout(pageKumirApp);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(pageKumirApp);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        version = new QLineEdit(pageKumirApp);
        version->setObjectName(QString::fromUtf8("version"));
        version->setReadOnly(true);

        verticalLayout_3->addWidget(version);

        label_3 = new QLabel(pageKumirApp);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        lastModified = new QLineEdit(pageKumirApp);
        lastModified->setObjectName(QString::fromUtf8("lastModified"));
        lastModified->setReadOnly(true);

        verticalLayout_3->addWidget(lastModified);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        versionInfoStack->addWidget(pageKumirApp);
        pageCustomApp = new QWidget();
        pageCustomApp->setObjectName(QString::fromUtf8("pageCustomApp"));
        verticalLayout_5 = new QVBoxLayout(pageCustomApp);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(pageCustomApp);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_5->addWidget(label_2);

        customVersion = new QLineEdit(pageCustomApp);
        customVersion->setObjectName(QString::fromUtf8("customVersion"));
        customVersion->setReadOnly(true);

        verticalLayout_5->addWidget(customVersion);

        label_4 = new QLabel(pageCustomApp);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_5->addWidget(label_4);

        kumirPlatformVersion = new QLineEdit(pageCustomApp);
        kumirPlatformVersion->setObjectName(QString::fromUtf8("kumirPlatformVersion"));
        kumirPlatformVersion->setReadOnly(true);

        verticalLayout_5->addWidget(kumirPlatformVersion);

        verticalSpacer_2 = new QSpacerItem(20, 87, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        versionInfoStack->addWidget(pageCustomApp);

        verticalLayout_4->addWidget(versionInfoStack);

        tableWidget = new QTableWidget(tabSystemInformation);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout_4->addWidget(tableWidget);

        tabWidget->addTab(tabSystemInformation, QString());

        verticalLayout->addWidget(tabWidget);

        widget = new QWidget(CoreGUI__AboutDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnCopyEnvironmentAndVersion = new QPushButton(widget);
        btnCopyEnvironmentAndVersion->setObjectName(QString::fromUtf8("btnCopyEnvironmentAndVersion"));

        horizontalLayout->addWidget(btnCopyEnvironmentAndVersion);

        horizontalSpacer = new QSpacerItem(283, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClose = new QPushButton(widget);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addWidget(widget);

        QWidget::setTabOrder(btnClose, btnCopyEnvironmentAndVersion);
        QWidget::setTabOrder(btnCopyEnvironmentAndVersion, tabWidget);
        QWidget::setTabOrder(tabWidget, licenseTextBrowser);
        QWidget::setTabOrder(licenseTextBrowser, tableWidget);

        retranslateUi(CoreGUI__AboutDialog);
        QObject::connect(btnClose, SIGNAL(clicked()), CoreGUI__AboutDialog, SLOT(accept()));

        tabWidget->setCurrentIndex(1);
        versionInfoStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CoreGUI__AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *CoreGUI__AboutDialog)
    {
        CoreGUI__AboutDialog->setWindowTitle(QCoreApplication::translate("CoreGUI::AboutDialog", "About Kumir", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabAbout), QCoreApplication::translate("CoreGUI::AboutDialog", "About", nullptr));
        licenseTextBrowser->setHtml(QCoreApplication::translate("CoreGUI::AboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Roboto'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans'; font-size:12pt; font-style:italic;\">\320\227\320\260 \320\277\321\200\320\265\320\264\320\265\320\273\320\260\320\274\320\270 \320\240\320\276\321\201\321\201\320\270\320\271\321\201\320\272\320\276\320\271 \320\244\320\265\320\264\320\265\321\200\320\260\321\206\320\270\320\270 \320\264\320\260\320\275\320\275\320\260\321\217 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\274\320\276\320\266\320\265\321\202 \321\201\320\262\320\276\320\261\320\276\320\264\320\275\320\276 \321\200\320\260\321"
                        "\201\320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\321\217\321\202\321\214\321\201\321\217 \320\277\320\276 \320\273\320\270\321\206\320\265\320\275\321\206\320\270\320\270 GNU GPL v2.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Droid Sans'; font-size:12pt; font-style:italic;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans'; font-size:12pt; font-style:italic;\">\320\235\320\260 \321\202\320\265\321\200\321\200\320\270\321\202\320\276\321\200\320\270\320\270 \320\240\320\276\321\201\321\201\320\270\320\271\321\201\320\272\320\276\320\271 \320\244\320\265\320\264\320\265\321\200\320\260\321\206\320\270\320\270 \320\264\320\260\320\275\320\275\320\260\321\217 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \321\200\320"
                        "\260\321\201\320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\321\217\320\265\321\202\321\201\321\217 \320\262 \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\320\270\320\270 \321\201 \320\264\320\260\320\275\320\275\321\213\320\274 \320\233\320\270\321\206\320\265\320\275\320\267\320\270\320\276\320\275\320\275\321\213\320\274 \321\201\320\276\320\263\320\273\320\260\321\210\320\265\320\275\320\270\320\265\320\274.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Droid Sans'; font-size:12pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Droid Sans'; font-size:12pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\""
                        "><span style=\" font-family:'Droid Sans'; font-size:12pt;\">\320\233\320\230\320\246\320\225\320\235\320\227\320\230\320\236\320\235\320\235\320\236\320\225 \320\241\320\236\320\223\320\233\320\220\320\250\320\225\320\235\320\230\320\225</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Droid Sans'; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans'; font-size:12pt;\">1. \320\243\321\201\321\202\320\260\320\275\320\260\320\262\320\273\320\270\320\262\320\260\321\217 \320\264\320\260\320\275\320\275\321\213\320\271 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\275\321\213\320\271 \320\277\321\200\320\276\320\264\321\203\320\272\321\202, \320\222\321\213 \320\260\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320"
                        "\265\321\201\320\272\320\270 \320\277\321\200\320\270\320\275\320\270\320\274\320\260\320\265\321\202\320\265 \321\203\321\201\320\273\320\276\320\262\320\270\321\217 \320\264\320\260\320\275\320\275\320\276\320\263\320\276 \320\273\320\270\321\206\320\265\320\275\320\267\320\270\320\276\320\275\320\275\320\276\320\263\320\276 \321\201\320\276\320\263\320\273\320\260\321\210\320\265\320\275\320\270\321\217.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Droid Sans'; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans'; font-size:12pt;\">2. \320\222\321\213 \320\274\320\276\320\266\320\265\321\202\320\265 \321\203\321\201\321\202\320\260\320\275\320\260\320\262\320\273\320\270\320\262\320\260\321\202\321\214 \320\264\320\260\320\275\320\275\321\203\321"
                        "\216 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203 \320\275\320\260 \320\273\321\216\320\261\320\276\320\265 \321\207\320\270\321\201\320\273\320\276 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\276\320\262 \320\275\320\265\320\276\320\263\321\200\320\260\320\275\320\270\321\207\320\265\320\275\320\275\320\276\320\265 \321\207\320\270\321\201\320\273\320\276 \321\200\320\260\320\267.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Droid Sans'; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans'; font-size:12pt;\">3. \320\222\321\213 \320\274\320\276\320\266\320\265\321\202\320\265 \320\264\320\265\320\273\320\260\321\202\321\214  \320\275\320\265\320\276\320\263\321\200\320\260\320\275\320\270"
                        "\321\207\320\265\320\275\320\275\320\276\320\265 \321\207\320\270\321\201\320\273\320\276 \320\272\320\276\320\277\320\270\320\271 \320\264\320\260\320\275\320\275\320\276\320\263\320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\275\320\276\320\263\320\276 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\260.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Droid Sans'; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans'; font-size:12pt;\">4. \320\222\321\213 \320\274\320\276\320\266\320\265\321\202\320\265 \320\277\320\265\321\200\320\265\320\264\320\260\320\262\320\260\321\202\321\214 \320\272\320\276\320\277\320\270\320\270 \320\264\320\260\320\275\320\275\320\276\320\263\320\276 \320\277\321\200\320\276\320"
                        "\263\321\200\320\260\320\274\320\274\320\275\320\276\320\263\320\276 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\260 \320\262\320\276\320\267\320\274\320\265\320\267\320\264\320\275\320\276 \320\270\320\273\320\270 \320\261\320\265\320\267\320\262\320\276\320\267\320\274\320\265\320\267\320\264\320\275\320\276 \320\275\320\265\320\276\320\263\321\200\320\260\320\275\320\270\321\207\320\265\320\275\320\275\320\276\320\274\321\203 \321\207\320\270\321\201\320\273\321\203 \321\202\321\200\320\265\321\202\321\214\320\270\321\205 \320\273\320\270\321\206.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Droid Sans'; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans'; font-size:12pt;\">5. \320\222\321\213 \320\270\320\274\320\265\320\265\321"
                        "\202\320\265 \320\277\321\200\320\260\320\262\320\276 \320\267\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\201 \321\201\320\260\320\271\321\202\320\260 \321\200\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272\320\260 \320\270\321\201\321\205\320\276\320\264\320\275\321\213\320\265 \321\202\320\265\320\272\321\201\321\202\321\213 \320\264\320\260\320\275\320\275\320\276\320\263\320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\275\320\276\320\263\320\276 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\260 \320\270 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\321\214 \320\270\321\205 \320\262 \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\320\270\320\270 \321\201 \321\202\321\200\320\265\320\261\320\276\320\262\320\260\320\275\320\270\321\217\320\274\320\270 \320\273\320\270\321\206\320\265\320\275\320\267\320\270\320\270 GNU GPL v2, \321\202"
                        "\320\265\320\272\321\201\321\202 \320\272\320\276\321\202\320\276\321\200\320\276\320\271 \320\275\320\260 \320\260\320\275\320\263\320\273\320\270\320\271\321\201\320\272\320\276\320\274 \321\217\320\267\321\213\320\272\320\265 \320\277\321\200\320\270\320\273\320\260\320\263\320\260\320\265\321\202\321\201\321\217 \320\262 \321\204\320\260\320\271\320\273\320\265 license.gpl.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Droid Sans'; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Droid Sans'; font-size:12pt;\">6. \320\240\320\260\320\267\321\200\320\260\320\261\320\276\321\202\321\207\320\270\320\272 \320\275\320\265 \320\264\320\260\320\265\321\202 \320\275\320\270\320\272\320\260\320\272\320\270\321\205 \320\263\320\260\321\200\320\260\320\275\321\202"
                        "\320\270\320\271 \321\200\320\260\320\261\320\276\321\202\320\276\321\201\320\277\320\276\320\261\320\276\321\201\320\275\320\276\321\201\321\202\320\270 \320\264\320\260\320\275\320\275\320\276\320\263\320\276 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\260 \320\270 \320\275\320\265 \320\275\320\265\321\201\320\265\321\202 \320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\320\265\320\275\320\275\320\276\321\201\321\202\320\270 \320\267\320\260 \320\273\321\216\320\261\320\276\320\271 \321\203\321\211\320\265\321\200\320\261, \320\277\321\200\320\270\321\207\320\270\320\275\320\265\320\275\320\275\321\213\320\271 \320\262\321\201\320\273\320\265\320\264\321\201\321\202\320\262\320\270\320\270 \321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\270 \320\270\320\273\320\270 \320\267\320\260\320\277\321\203\321\201\320\272\320\260 \320\264\320\260\320\275\320\275\320\276\320\263\320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\275\320\276"
                        "\320\263\320\276 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\260.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Droid Sans'; font-size:12pt;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabLicense), QCoreApplication::translate("CoreGUI::AboutDialog", "Licensee", nullptr));
        label->setText(QCoreApplication::translate("CoreGUI::AboutDialog", "Version:", nullptr));
        version->setText(QCoreApplication::translate("CoreGUI::AboutDialog", "unknown", nullptr));
        label_3->setText(QCoreApplication::translate("CoreGUI::AboutDialog", "Last modified:", nullptr));
        lastModified->setText(QCoreApplication::translate("CoreGUI::AboutDialog", "unknown", nullptr));
        label_2->setText(QCoreApplication::translate("CoreGUI::AboutDialog", "Application Version:", nullptr));
        customVersion->setText(QCoreApplication::translate("CoreGUI::AboutDialog", "unknown", nullptr));
        label_4->setText(QCoreApplication::translate("CoreGUI::AboutDialog", "Based on Kumir Platform Version:", nullptr));
        kumirPlatformVersion->setText(QCoreApplication::translate("CoreGUI::AboutDialog", "unknown", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CoreGUI::AboutDialog", "Parameter", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CoreGUI::AboutDialog", "Value", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabSystemInformation), QCoreApplication::translate("CoreGUI::AboutDialog", "System Information", nullptr));
        btnCopyEnvironmentAndVersion->setText(QCoreApplication::translate("CoreGUI::AboutDialog", "Copy system information to clipboard", nullptr));
        btnClose->setText(QCoreApplication::translate("CoreGUI::AboutDialog", "Close", nullptr));
#if QT_CONFIG(shortcut)
        btnClose->setShortcut(QCoreApplication::translate("CoreGUI::AboutDialog", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

} // namespace CoreGUI

namespace CoreGUI {
namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui
} // namespace CoreGUI

#endif // UI_ABOUTDIALOG_H
