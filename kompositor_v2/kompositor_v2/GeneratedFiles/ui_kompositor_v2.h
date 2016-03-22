/********************************************************************************
** Form generated from reading UI file 'kompositor_v2.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KOMPOSITOR_V2_H
#define UI_KOMPOSITOR_V2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kompositor_v2Class
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QRadioButton *halfNote;
    QRadioButton *quarterNote;
    QRadioButton *eightNote;
    QRadioButton *quarterestNote;
    QRadioButton *eightrestNote;
    QPushButton *playButton;
    QLabel *sheet;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *kompositor_v2Class)
    {
        if (kompositor_v2Class->objectName().isEmpty())
            kompositor_v2Class->setObjectName(QStringLiteral("kompositor_v2Class"));
        kompositor_v2Class->resize(1010, 519);
        centralWidget = new QWidget(kompositor_v2Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 0, 211, 61));
        label->setProperty("half.png", QVariant(QPixmap(QString::fromUtf8("Resources/half.png"))));
        label->setProperty("quarter.png", QVariant(QPixmap(QString::fromUtf8("Resources/quater.png"))));
        label->setProperty("eight.png", QVariant(QPixmap(QString::fromUtf8("Resources/eight.png"))));
        label->setProperty("quarterest", QVariant(QPixmap(QString::fromUtf8("Resources/quaterrest.png"))));
        label->setProperty("eightest.png", QVariant(QPixmap(QString::fromUtf8("Resources/eightrest.png"))));
        label->setProperty("notblad.png", QVariant(QPixmap(QString::fromUtf8("Resources/notblad.png"))));
        halfNote = new QRadioButton(centralWidget);
        halfNote->setObjectName(QStringLiteral("halfNote"));
        halfNote->setGeometry(QRect(20, 70, 81, 21));
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/half.png"), QSize(), QIcon::Normal, QIcon::On);
        halfNote->setIcon(icon);
        quarterNote = new QRadioButton(centralWidget);
        quarterNote->setObjectName(QStringLiteral("quarterNote"));
        quarterNote->setGeometry(QRect(100, 70, 82, 17));
        QIcon icon1;
        icon1.addFile(QStringLiteral("Resources/quater.png"), QSize(), QIcon::Normal, QIcon::On);
        quarterNote->setIcon(icon1);
        eightNote = new QRadioButton(centralWidget);
        eightNote->setObjectName(QStringLiteral("eightNote"));
        eightNote->setGeometry(QRect(200, 70, 82, 17));
        QIcon icon2;
        icon2.addFile(QStringLiteral("Resources/eight.png"), QSize(), QIcon::Normal, QIcon::On);
        eightNote->setIcon(icon2);
        quarterestNote = new QRadioButton(centralWidget);
        quarterestNote->setObjectName(QStringLiteral("quarterestNote"));
        quarterestNote->setGeometry(QRect(290, 70, 82, 17));
        QIcon icon3;
        icon3.addFile(QStringLiteral("Resources/quaterrest.png"), QSize(), QIcon::Normal, QIcon::On);
        quarterestNote->setIcon(icon3);
        eightrestNote = new QRadioButton(centralWidget);
        eightrestNote->setObjectName(QStringLiteral("eightrestNote"));
        eightrestNote->setGeometry(QRect(400, 70, 82, 17));
        QIcon icon4;
        icon4.addFile(QStringLiteral("Resources/eightrest.png"), QSize(), QIcon::Normal, QIcon::On);
        eightrestNote->setIcon(icon4);
        playButton = new QPushButton(centralWidget);
        playButton->setObjectName(QStringLiteral("playButton"));
        playButton->setGeometry(QRect(460, 210, 75, 21));
        sheet = new QLabel(centralWidget);
        sheet->setObjectName(QStringLiteral("sheet"));
        sheet->setGeometry(QRect(100, 300, 931, 143));
        sheet->setPixmap(QPixmap(QString::fromUtf8("Resources/notblad.png")));
        kompositor_v2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(kompositor_v2Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1010, 21));
        kompositor_v2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(kompositor_v2Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        kompositor_v2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(kompositor_v2Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        kompositor_v2Class->setStatusBar(statusBar);

        retranslateUi(kompositor_v2Class);

        QMetaObject::connectSlotsByName(kompositor_v2Class);
    } // setupUi

    void retranslateUi(QMainWindow *kompositor_v2Class)
    {
        kompositor_v2Class->setWindowTitle(QApplication::translate("kompositor_v2Class", "kompositor_v2", 0));
        label->setText(QApplication::translate("kompositor_v2Class", "Kompositionsprogram for the deaf", 0));
        halfNote->setText(QApplication::translate("kompositor_v2Class", "Half", 0));
        quarterNote->setText(QApplication::translate("kompositor_v2Class", "Quarter", 0));
        eightNote->setText(QApplication::translate("kompositor_v2Class", "Eight", 0));
        quarterestNote->setText(QApplication::translate("kompositor_v2Class", "Quarterest", 0));
        eightrestNote->setText(QApplication::translate("kompositor_v2Class", "Eightrest", 0));
        playButton->setText(QApplication::translate("kompositor_v2Class", "PLAY", 0));
        sheet->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class kompositor_v2Class: public Ui_kompositor_v2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KOMPOSITOR_V2_H
