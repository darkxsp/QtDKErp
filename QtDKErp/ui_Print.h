/********************************************************************************
** Form generated from reading UI file 'Print.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINT_H
#define UI_PRINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Print
{
public:
    QGridLayout *gridLayout;
    QGraphicsView *gv;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *Print)
    {
        if (Print->objectName().isEmpty())
            Print->setObjectName(QStringLiteral("Print"));
        Print->resize(625, 565);
        gridLayout = new QGridLayout(Print);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gv = new QGraphicsView(Print);
        gv->setObjectName(QStringLiteral("gv"));

        gridLayout->addWidget(gv, 0, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(422, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(Print);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton = new QPushButton(Print);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 2, 1, 1);


        retranslateUi(Print);

        QMetaObject::connectSlotsByName(Print);
    } // setupUi

    void retranslateUi(QWidget *Print)
    {
        Print->setWindowTitle(QApplication::translate("Print", "Print", 0));
        pushButton_2->setText(QApplication::translate("Print", "Fechar", 0));
        pushButton->setText(QApplication::translate("Print", "Imprimir", 0));
    } // retranslateUi

};

namespace Ui {
    class Print: public Ui_Print {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINT_H
