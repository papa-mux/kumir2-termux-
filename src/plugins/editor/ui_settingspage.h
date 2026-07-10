/********************************************************************************
** Form generated from reading UI file 'settingspage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSPAGE_H
#define UI_SETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace Editor {

class Ui_SettingsPage
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupKeyboard;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_9;
    QComboBox *layoutSwitchKey;
    QGroupBox *groupFont;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QFontComboBox *fontFamily;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *fontSize;
    QLabel *label_3;
    QPlainTextEdit *fontPreview;
    QGroupBox *groupSyntax;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *invertColors;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QToolButton *kwColor;
    QCheckBox *kwBold;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *typeColor;
    QCheckBox *typeBold;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *numericColor;
    QCheckBox *numericBold;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *literalColor;
    QCheckBox *literalBold;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_5;
    QToolButton *moduleColor;
    QCheckBox *moduleBold;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_6;
    QToolButton *algorhitmColor;
    QCheckBox *algorhitmBold;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_7;
    QToolButton *docColor;
    QCheckBox *docBold;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_8;
    QToolButton *commentColor;
    QCheckBox *commentBold;
    QGroupBox *groupInitial;
    QGridLayout *gridLayout;
    QToolButton *btnBrowseTemplateFile;
    QLineEdit *templateFileName;
    QLabel *fileNotExistsLabel;
    QLabel *label_14;
    QGroupBox *groupOther;
    QVBoxLayout *_2;
    QCheckBox *pressTextLeft;
    QCheckBox *showTrailingSpaces;
    QCheckBox *autoInsertClosingOperationalBrackets;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_15;
    QComboBox *freeCursorPositioning;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Editor__SettingsPage)
    {
        if (Editor__SettingsPage->objectName().isEmpty())
            Editor__SettingsPage->setObjectName(QString::fromUtf8("Editor__SettingsPage"));
        Editor__SettingsPage->resize(406, 914);
        verticalLayout_3 = new QVBoxLayout(Editor__SettingsPage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupKeyboard = new QGroupBox(Editor__SettingsPage);
        groupKeyboard->setObjectName(QString::fromUtf8("groupKeyboard"));
        verticalLayout_4 = new QVBoxLayout(groupKeyboard);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_12 = new QLabel(groupKeyboard);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_11->addWidget(label_12);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_9);

        layoutSwitchKey = new QComboBox(groupKeyboard);
        layoutSwitchKey->addItem(QString::fromUtf8("Alt"));
        layoutSwitchKey->addItem(QString::fromUtf8("AltGr"));
        layoutSwitchKey->addItem(QString::fromUtf8("Meta"));
        layoutSwitchKey->addItem(QString::fromUtf8("Menu"));
        layoutSwitchKey->addItem(QString::fromUtf8("ScrollLock"));
        layoutSwitchKey->addItem(QString::fromUtf8("Pause"));
        layoutSwitchKey->setObjectName(QString::fromUtf8("layoutSwitchKey"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(layoutSwitchKey->sizePolicy().hasHeightForWidth());
        layoutSwitchKey->setSizePolicy(sizePolicy);
        layoutSwitchKey->setMinimumSize(QSize(80, 0));
        layoutSwitchKey->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_11->addWidget(layoutSwitchKey);


        verticalLayout_4->addLayout(horizontalLayout_11);


        verticalLayout_3->addWidget(groupKeyboard);

        groupFont = new QGroupBox(Editor__SettingsPage);
        groupFont->setObjectName(QString::fromUtf8("groupFont"));
        verticalLayout = new QVBoxLayout(groupFont);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupFont);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        fontFamily = new QFontComboBox(groupFont);
        fontFamily->setObjectName(QString::fromUtf8("fontFamily"));
        fontFamily->setWritingSystem(QFontDatabase::Cyrillic);
        fontFamily->setFontFilters(QFontComboBox::MonospacedFonts|QFontComboBox::ScalableFonts);

        horizontalLayout_2->addWidget(fontFamily);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupFont);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        fontSize = new QSpinBox(groupFont);
        fontSize->setObjectName(QString::fromUtf8("fontSize"));
        fontSize->setMinimum(8);
        fontSize->setMaximum(48);
        fontSize->setValue(12);

        horizontalLayout->addWidget(fontSize);


        verticalLayout->addLayout(horizontalLayout);

        label_3 = new QLabel(groupFont);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        fontPreview = new QPlainTextEdit(groupFont);
        fontPreview->setObjectName(QString::fromUtf8("fontPreview"));

        verticalLayout->addWidget(fontPreview);


        verticalLayout_3->addWidget(groupFont);

        groupSyntax = new QGroupBox(Editor__SettingsPage);
        groupSyntax->setObjectName(QString::fromUtf8("groupSyntax"));
        verticalLayout_2 = new QVBoxLayout(groupSyntax);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        invertColors = new QCheckBox(groupSyntax);
        invertColors->setObjectName(QString::fromUtf8("invertColors"));

        verticalLayout_2->addWidget(invertColors);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(groupSyntax);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        kwColor = new QToolButton(groupSyntax);
        kwColor->setObjectName(QString::fromUtf8("kwColor"));

        horizontalLayout_3->addWidget(kwColor);

        kwBold = new QCheckBox(groupSyntax);
        kwBold->setObjectName(QString::fromUtf8("kwBold"));

        horizontalLayout_3->addWidget(kwBold);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(groupSyntax);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        typeColor = new QToolButton(groupSyntax);
        typeColor->setObjectName(QString::fromUtf8("typeColor"));

        horizontalLayout_4->addWidget(typeColor);

        typeBold = new QCheckBox(groupSyntax);
        typeBold->setObjectName(QString::fromUtf8("typeBold"));

        horizontalLayout_4->addWidget(typeBold);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(groupSyntax);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        numericColor = new QToolButton(groupSyntax);
        numericColor->setObjectName(QString::fromUtf8("numericColor"));

        horizontalLayout_5->addWidget(numericColor);

        numericBold = new QCheckBox(groupSyntax);
        numericBold->setObjectName(QString::fromUtf8("numericBold"));

        horizontalLayout_5->addWidget(numericBold);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(groupSyntax);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        literalColor = new QToolButton(groupSyntax);
        literalColor->setObjectName(QString::fromUtf8("literalColor"));

        horizontalLayout_6->addWidget(literalColor);

        literalBold = new QCheckBox(groupSyntax);
        literalBold->setObjectName(QString::fromUtf8("literalBold"));

        horizontalLayout_6->addWidget(literalBold);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(groupSyntax);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        moduleColor = new QToolButton(groupSyntax);
        moduleColor->setObjectName(QString::fromUtf8("moduleColor"));

        horizontalLayout_7->addWidget(moduleColor);

        moduleBold = new QCheckBox(groupSyntax);
        moduleBold->setObjectName(QString::fromUtf8("moduleBold"));

        horizontalLayout_7->addWidget(moduleBold);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(groupSyntax);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_8->addWidget(label_9);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        algorhitmColor = new QToolButton(groupSyntax);
        algorhitmColor->setObjectName(QString::fromUtf8("algorhitmColor"));

        horizontalLayout_8->addWidget(algorhitmColor);

        algorhitmBold = new QCheckBox(groupSyntax);
        algorhitmBold->setObjectName(QString::fromUtf8("algorhitmBold"));

        horizontalLayout_8->addWidget(algorhitmBold);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_10 = new QLabel(groupSyntax);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_9->addWidget(label_10);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        docColor = new QToolButton(groupSyntax);
        docColor->setObjectName(QString::fromUtf8("docColor"));

        horizontalLayout_9->addWidget(docColor);

        docBold = new QCheckBox(groupSyntax);
        docBold->setObjectName(QString::fromUtf8("docBold"));

        horizontalLayout_9->addWidget(docBold);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_11 = new QLabel(groupSyntax);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_10->addWidget(label_11);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        commentColor = new QToolButton(groupSyntax);
        commentColor->setObjectName(QString::fromUtf8("commentColor"));

        horizontalLayout_10->addWidget(commentColor);

        commentBold = new QCheckBox(groupSyntax);
        commentBold->setObjectName(QString::fromUtf8("commentBold"));

        horizontalLayout_10->addWidget(commentBold);


        verticalLayout_2->addLayout(horizontalLayout_10);


        verticalLayout_3->addWidget(groupSyntax);

        groupInitial = new QGroupBox(Editor__SettingsPage);
        groupInitial->setObjectName(QString::fromUtf8("groupInitial"));
        gridLayout = new QGridLayout(groupInitial);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnBrowseTemplateFile = new QToolButton(groupInitial);
        btnBrowseTemplateFile->setObjectName(QString::fromUtf8("btnBrowseTemplateFile"));

        gridLayout->addWidget(btnBrowseTemplateFile, 1, 1, 1, 1);

        templateFileName = new QLineEdit(groupInitial);
        templateFileName->setObjectName(QString::fromUtf8("templateFileName"));

        gridLayout->addWidget(templateFileName, 1, 0, 1, 1);

        fileNotExistsLabel = new QLabel(groupInitial);
        fileNotExistsLabel->setObjectName(QString::fromUtf8("fileNotExistsLabel"));
        QPalette palette;
        QBrush brush(QColor(192, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(87, 89, 97, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        fileNotExistsLabel->setPalette(palette);
        QFont font;
        font.setItalic(true);
        fileNotExistsLabel->setFont(font);
        fileNotExistsLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(fileNotExistsLabel, 2, 0, 1, 2);

        label_14 = new QLabel(groupInitial);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 0, 0, 1, 2);


        verticalLayout_3->addWidget(groupInitial);

        groupOther = new QGroupBox(Editor__SettingsPage);
        groupOther->setObjectName(QString::fromUtf8("groupOther"));
        _2 = new QVBoxLayout(groupOther);
        _2->setObjectName(QString::fromUtf8("_2"));
        pressTextLeft = new QCheckBox(groupOther);
        pressTextLeft->setObjectName(QString::fromUtf8("pressTextLeft"));

        _2->addWidget(pressTextLeft);

        showTrailingSpaces = new QCheckBox(groupOther);
        showTrailingSpaces->setObjectName(QString::fromUtf8("showTrailingSpaces"));

        _2->addWidget(showTrailingSpaces);

        autoInsertClosingOperationalBrackets = new QCheckBox(groupOther);
        autoInsertClosingOperationalBrackets->setObjectName(QString::fromUtf8("autoInsertClosingOperationalBrackets"));

        _2->addWidget(autoInsertClosingOperationalBrackets);

        widget = new QWidget(groupOther);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_13 = new QHBoxLayout(widget);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_15 = new QLabel(widget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_13->addWidget(label_15);

        freeCursorPositioning = new QComboBox(widget);
        freeCursorPositioning->addItem(QString());
        freeCursorPositioning->addItem(QString());
        freeCursorPositioning->addItem(QString());
        freeCursorPositioning->setObjectName(QString::fromUtf8("freeCursorPositioning"));

        horizontalLayout_13->addWidget(freeCursorPositioning);


        _2->addWidget(widget);


        verticalLayout_3->addWidget(groupOther);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

#if QT_CONFIG(shortcut)
        label_14->setBuddy(templateFileName);
#endif // QT_CONFIG(shortcut)

        retranslateUi(Editor__SettingsPage);

        QMetaObject::connectSlotsByName(Editor__SettingsPage);
    } // setupUi

    void retranslateUi(QWidget *Editor__SettingsPage)
    {
        Editor__SettingsPage->setWindowTitle(QCoreApplication::translate("Editor::SettingsPage", "Form", nullptr));
        groupKeyboard->setTitle(QCoreApplication::translate("Editor::SettingsPage", "Keyboard", nullptr));
        label_12->setText(QCoreApplication::translate("Editor::SettingsPage", "Key to temporary switch layout:", nullptr));

        groupFont->setTitle(QCoreApplication::translate("Editor::SettingsPage", "Font", nullptr));
        label->setText(QCoreApplication::translate("Editor::SettingsPage", "Family:", nullptr));
        label_2->setText(QCoreApplication::translate("Editor::SettingsPage", "Size:", nullptr));
        label_3->setText(QCoreApplication::translate("Editor::SettingsPage", "Preview:", nullptr));
        fontPreview->setPlainText(QCoreApplication::translate("Editor::SettingsPage", "The keywords of Kumir are: alg, begin, end and others", nullptr));
        groupSyntax->setTitle(QCoreApplication::translate("Editor::SettingsPage", "Syntax highlighting", nullptr));
        invertColors->setText(QCoreApplication::translate("Editor::SettingsPage", "Invert colors if system color scheme has dark background", nullptr));
        label_4->setText(QCoreApplication::translate("Editor::SettingsPage", "Keywords:", nullptr));
        kwColor->setText(QString());
        kwBold->setText(QCoreApplication::translate("Editor::SettingsPage", "Bold", nullptr));
        label_5->setText(QCoreApplication::translate("Editor::SettingsPage", "Type names:", nullptr));
        typeColor->setText(QString());
        typeBold->setText(QCoreApplication::translate("Editor::SettingsPage", "Bold", nullptr));
        label_6->setText(QCoreApplication::translate("Editor::SettingsPage", "Numeric constants:", nullptr));
        numericColor->setText(QString());
        numericBold->setText(QCoreApplication::translate("Editor::SettingsPage", "Bold", nullptr));
        label_7->setText(QCoreApplication::translate("Editor::SettingsPage", "Literal constants::", nullptr));
        literalColor->setText(QString());
        literalBold->setText(QCoreApplication::translate("Editor::SettingsPage", "Bold", nullptr));
        label_8->setText(QCoreApplication::translate("Editor::SettingsPage", "Module names:", nullptr));
        moduleColor->setText(QString());
        moduleBold->setText(QCoreApplication::translate("Editor::SettingsPage", "Bold", nullptr));
        label_9->setText(QCoreApplication::translate("Editor::SettingsPage", "Algorhitm names:", nullptr));
        algorhitmColor->setText(QString());
        algorhitmBold->setText(QCoreApplication::translate("Editor::SettingsPage", "Bold", nullptr));
        label_10->setText(QCoreApplication::translate("Editor::SettingsPage", "Algorhitm descriptions after #:", nullptr));
        docColor->setText(QString());
        docBold->setText(QCoreApplication::translate("Editor::SettingsPage", "Bold", nullptr));
        label_11->setText(QCoreApplication::translate("Editor::SettingsPage", "Comments:", nullptr));
        commentColor->setText(QString());
        commentBold->setText(QCoreApplication::translate("Editor::SettingsPage", "Bold", nullptr));
        groupInitial->setTitle(QCoreApplication::translate("Editor::SettingsPage", "Initial Text", nullptr));
        btnBrowseTemplateFile->setText(QCoreApplication::translate("Editor::SettingsPage", "Browse...", nullptr));
        fileNotExistsLabel->setText(QString());
        label_14->setText(QCoreApplication::translate("Editor::SettingsPage", "Initial program template file:", nullptr));
        groupOther->setTitle(QCoreApplication::translate("Editor::SettingsPage", "Other", nullptr));
        pressTextLeft->setText(QCoreApplication::translate("Editor::SettingsPage", "Force press program text to the left", nullptr));
        showTrailingSpaces->setText(QCoreApplication::translate("Editor::SettingsPage", "Show trailing spaces", nullptr));
        autoInsertClosingOperationalBrackets->setText(QCoreApplication::translate("Editor::SettingsPage", "Auto insert pairing operational brackets", nullptr));
        label_15->setText(QCoreApplication::translate("Editor::SettingsPage", "Free cursor positioning:", nullptr));
        freeCursorPositioning->setItemText(0, QCoreApplication::translate("Editor::SettingsPage", "Texts and comments", nullptr));
        freeCursorPositioning->setItemText(1, QCoreApplication::translate("Editor::SettingsPage", "Always", nullptr));
        freeCursorPositioning->setItemText(2, QCoreApplication::translate("Editor::SettingsPage", "Texts only", nullptr));

    } // retranslateUi

};

} // namespace Editor

namespace Editor {
namespace Ui {
    class SettingsPage: public Ui_SettingsPage {};
} // namespace Ui
} // namespace Editor

#endif // UI_SETTINGSPAGE_H
