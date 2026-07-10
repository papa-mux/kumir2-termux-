/********************************************************************************
** Form generated from reading UI file 'pult.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PULT_H
#define UI_PULT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GrasshopperPult
{
public:
    QPushButton *RightB;
    QPushButton *LeftB;
    QToolButton *ClearLog;
    QFrame *frame;
    QLabel *label;
    QToolButton *toKumir;
    QLCDNumber *FwdNumber;
    QLCDNumber *BackNumber;
    QPushButton *colorB;

    void setupUi(QWidget *GrasshopperPult)
    {
        if (GrasshopperPult->objectName().isEmpty())
            GrasshopperPult->setObjectName(QString::fromUtf8("GrasshopperPult"));
        GrasshopperPult->resize(254, 400);
        GrasshopperPult->setMinimumSize(QSize(254, 400));
        GrasshopperPult->setMaximumSize(QSize(254, 450));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(118, 170, 110, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(177, 255, 165, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(147, 212, 137, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(59, 85, 55, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(78, 113, 73, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush7(QColor(126, 182, 118, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush8(QColor(186, 212, 182, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        GrasshopperPult->setPalette(palette);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        GrasshopperPult->setFont(font);
        RightB = new QPushButton(GrasshopperPult);
        RightB->setObjectName(QString::fromUtf8("RightB"));
        RightB->setGeometry(QRect(10, 175, 160, 56));
        LeftB = new QPushButton(GrasshopperPult);
        LeftB->setObjectName(QString::fromUtf8("LeftB"));
        LeftB->setGeometry(QRect(10, 245, 160, 56));
        ClearLog = new QToolButton(GrasshopperPult);
        ClearLog->setObjectName(QString::fromUtf8("ClearLog"));
        ClearLog->setGeometry(QRect(210, 30, 31, 45));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush10(QColor(117, 168, 109, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush10);
        QBrush brush11(QColor(176, 252, 164, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush11);
        QBrush brush12(QColor(146, 210, 136, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        QBrush brush13(QColor(58, 84, 54, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush13);
        QBrush brush14(QColor(78, 112, 72, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush15(QColor(186, 211, 182, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        ClearLog->setPalette(palette1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        ClearLog->setIcon(icon);
        frame = new QFrame(GrasshopperPult);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(5, 365, 231, 21));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 5, 211, 20));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(60);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        toKumir = new QToolButton(GrasshopperPult);
        toKumir->setObjectName(QString::fromUtf8("toKumir"));
        toKumir->setEnabled(false);
        toKumir->setGeometry(QRect(210, 85, 31, 45));
        QPalette palette2;
        QBrush brush16(QColor(170, 170, 0, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush16);
        toKumir->setPalette(palette2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/kumir.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/kumir.png"), QSize(), QIcon::Normal, QIcon::On);
        toKumir->setIcon(icon1);
        FwdNumber = new QLCDNumber(GrasshopperPult);
        FwdNumber->setObjectName(QString::fromUtf8("FwdNumber"));
        FwdNumber->setGeometry(QRect(180, 180, 64, 46));
        FwdNumber->setAutoFillBackground(false);
        FwdNumber->setDigitCount(3);
        FwdNumber->setProperty("intValue", QVariant(3));
        BackNumber = new QLCDNumber(GrasshopperPult);
        BackNumber->setObjectName(QString::fromUtf8("BackNumber"));
        BackNumber->setGeometry(QRect(180, 250, 64, 46));
        BackNumber->setAutoFillBackground(false);
        BackNumber->setDigitCount(3);
        BackNumber->setProperty("intValue", QVariant(2));
        colorB = new QPushButton(GrasshopperPult);
        colorB->setObjectName(QString::fromUtf8("colorB"));
        colorB->setGeometry(QRect(40, 310, 171, 46));

        retranslateUi(GrasshopperPult);

        QMetaObject::connectSlotsByName(GrasshopperPult);
    } // setupUi

    void retranslateUi(QWidget *GrasshopperPult)
    {
        GrasshopperPult->setWindowTitle(QCoreApplication::translate("GrasshopperPult", "\320\237\321\203\320\273\321\214\321\202", nullptr));
        RightB->setText(QCoreApplication::translate("GrasshopperPult", "Right", nullptr));
        LeftB->setText(QCoreApplication::translate("GrasshopperPult", "Left", nullptr));
        ClearLog->setText(QCoreApplication::translate("GrasshopperPult", "...", nullptr));
        label->setText(QString());
#if QT_CONFIG(tooltip)
        toKumir->setToolTip(QCoreApplication::translate("GrasshopperPult", "\320\241\320\272\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
#endif // QT_CONFIG(tooltip)
        toKumir->setText(QCoreApplication::translate("GrasshopperPult", "...", nullptr));
        colorB->setText(QCoreApplication::translate("GrasshopperPult", "\320\237\320\265\321\200\320\265\320\272\321\200\320\260\321\201\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GrasshopperPult: public Ui_GrasshopperPult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PULT_H
