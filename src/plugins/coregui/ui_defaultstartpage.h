/********************************************************************************
** Form generated from reading UI file 'defaultstartpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEFAULTSTARTPAGE_H
#define UI_DEFAULTSTARTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace CoreGUI {

class Ui_DefaultStartPage
{
public:
    QVBoxLayout *verticalLayout_5;
    QWidget *headerBox;
    QHBoxLayout *horizontalLayout;
    QLabel *headerText;
    QScrollArea *centralViewScroll;
    QWidget *centralScrollPane;
    QVBoxLayout *verticalLayout;
    QWidget *centralView;
    QGridLayout *centralViewLayout;
    QWidget *programsBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *programsText;
    QPushButton *btnNewProgram;
    QPushButton *btnLoadProgram;
    QWidget *programsList;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;
    QWidget *coursesBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *coursesText;
    QPushButton *btnShowCourses;
    QWidget *coursesList;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_3;
    QWidget *helpBox;
    QVBoxLayout *verticalLayout_4;
    QLabel *helpText;
    QPushButton *btnShowHelp;
    QWidget *helpList;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer;
    QWidget *footerBox;

    void setupUi(QWidget *CoreGUI__DefaultStartPage)
    {
        if (CoreGUI__DefaultStartPage->objectName().isEmpty())
            CoreGUI__DefaultStartPage->setObjectName(QString::fromUtf8("CoreGUI__DefaultStartPage"));
        CoreGUI__DefaultStartPage->resize(551, 344);
        verticalLayout_5 = new QVBoxLayout(CoreGUI__DefaultStartPage);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        headerBox = new QWidget(CoreGUI__DefaultStartPage);
        headerBox->setObjectName(QString::fromUtf8("headerBox"));
        horizontalLayout = new QHBoxLayout(headerBox);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        headerText = new QLabel(headerBox);
        headerText->setObjectName(QString::fromUtf8("headerText"));

        horizontalLayout->addWidget(headerText);


        verticalLayout_5->addWidget(headerBox);

        centralViewScroll = new QScrollArea(CoreGUI__DefaultStartPage);
        centralViewScroll->setObjectName(QString::fromUtf8("centralViewScroll"));
        centralViewScroll->setWidgetResizable(true);
        centralScrollPane = new QWidget();
        centralScrollPane->setObjectName(QString::fromUtf8("centralScrollPane"));
        centralScrollPane->setGeometry(QRect(0, 0, 549, 314));
        verticalLayout = new QVBoxLayout(centralScrollPane);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        centralView = new QWidget(centralScrollPane);
        centralView->setObjectName(QString::fromUtf8("centralView"));
        centralViewLayout = new QGridLayout(centralView);
        centralViewLayout->setSpacing(10);
        centralViewLayout->setObjectName(QString::fromUtf8("centralViewLayout"));
        centralViewLayout->setContentsMargins(10, 10, 10, 10);
        programsBox = new QWidget(centralView);
        programsBox->setObjectName(QString::fromUtf8("programsBox"));
        verticalLayout_2 = new QVBoxLayout(programsBox);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        programsText = new QLabel(programsBox);
        programsText->setObjectName(QString::fromUtf8("programsText"));

        verticalLayout_2->addWidget(programsText);

        btnNewProgram = new QPushButton(programsBox);
        btnNewProgram->setObjectName(QString::fromUtf8("btnNewProgram"));
        btnNewProgram->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(btnNewProgram);

        btnLoadProgram = new QPushButton(programsBox);
        btnLoadProgram->setObjectName(QString::fromUtf8("btnLoadProgram"));
        btnLoadProgram->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(btnLoadProgram);

        programsList = new QWidget(programsBox);
        programsList->setObjectName(QString::fromUtf8("programsList"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(programsList->sizePolicy().hasHeightForWidth());
        programsList->setSizePolicy(sizePolicy);
        verticalLayout_6 = new QVBoxLayout(programsList);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);


        verticalLayout_2->addWidget(programsList);


        centralViewLayout->addWidget(programsBox, 0, 0, 1, 1);

        coursesBox = new QWidget(centralView);
        coursesBox->setObjectName(QString::fromUtf8("coursesBox"));
        verticalLayout_3 = new QVBoxLayout(coursesBox);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        coursesText = new QLabel(coursesBox);
        coursesText->setObjectName(QString::fromUtf8("coursesText"));

        verticalLayout_3->addWidget(coursesText);

        btnShowCourses = new QPushButton(coursesBox);
        btnShowCourses->setObjectName(QString::fromUtf8("btnShowCourses"));
        btnShowCourses->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_3->addWidget(btnShowCourses);

        coursesList = new QWidget(coursesBox);
        coursesList->setObjectName(QString::fromUtf8("coursesList"));
        sizePolicy.setHeightForWidth(coursesList->sizePolicy().hasHeightForWidth());
        coursesList->setSizePolicy(sizePolicy);
        verticalLayout_7 = new QVBoxLayout(coursesList);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);


        verticalLayout_3->addWidget(coursesList);


        centralViewLayout->addWidget(coursesBox, 0, 1, 1, 1);

        helpBox = new QWidget(centralView);
        helpBox->setObjectName(QString::fromUtf8("helpBox"));
        verticalLayout_4 = new QVBoxLayout(helpBox);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        helpText = new QLabel(helpBox);
        helpText->setObjectName(QString::fromUtf8("helpText"));

        verticalLayout_4->addWidget(helpText);

        btnShowHelp = new QPushButton(helpBox);
        btnShowHelp->setObjectName(QString::fromUtf8("btnShowHelp"));
        btnShowHelp->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_4->addWidget(btnShowHelp);

        helpList = new QWidget(helpBox);
        helpList->setObjectName(QString::fromUtf8("helpList"));
        sizePolicy.setHeightForWidth(helpList->sizePolicy().hasHeightForWidth());
        helpList->setSizePolicy(sizePolicy);
        verticalLayout_8 = new QVBoxLayout(helpList);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_4);


        verticalLayout_4->addWidget(helpList);


        centralViewLayout->addWidget(helpBox, 0, 2, 1, 1);


        verticalLayout->addWidget(centralView);

        verticalSpacer = new QSpacerItem(20, 45, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        centralViewScroll->setWidget(centralScrollPane);

        verticalLayout_5->addWidget(centralViewScroll);

        footerBox = new QWidget(CoreGUI__DefaultStartPage);
        footerBox->setObjectName(QString::fromUtf8("footerBox"));

        verticalLayout_5->addWidget(footerBox);


        retranslateUi(CoreGUI__DefaultStartPage);

        QMetaObject::connectSlotsByName(CoreGUI__DefaultStartPage);
    } // setupUi

    void retranslateUi(QWidget *CoreGUI__DefaultStartPage)
    {
        CoreGUI__DefaultStartPage->setWindowTitle(QCoreApplication::translate("CoreGUI::DefaultStartPage", "Start", nullptr));
        headerText->setText(QCoreApplication::translate("CoreGUI::DefaultStartPage", "TextLabel", nullptr));
        programsText->setText(QCoreApplication::translate("CoreGUI::DefaultStartPage", "Programs", nullptr));
        btnNewProgram->setText(QCoreApplication::translate("CoreGUI::DefaultStartPage", "New Program", nullptr));
        btnLoadProgram->setText(QCoreApplication::translate("CoreGUI::DefaultStartPage", "Load Program", nullptr));
        coursesText->setText(QCoreApplication::translate("CoreGUI::DefaultStartPage", "Courses", nullptr));
        btnShowCourses->setText(QCoreApplication::translate("CoreGUI::DefaultStartPage", "Show Courses", nullptr));
        helpText->setText(QCoreApplication::translate("CoreGUI::DefaultStartPage", "Help", nullptr));
        btnShowHelp->setText(QCoreApplication::translate("CoreGUI::DefaultStartPage", "Show Help", nullptr));
    } // retranslateUi

};

} // namespace CoreGUI

namespace CoreGUI {
namespace Ui {
    class DefaultStartPage: public Ui_DefaultStartPage {};
} // namespace Ui
} // namespace CoreGUI

#endif // UI_DEFAULTSTARTPAGE_H
