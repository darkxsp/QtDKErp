/********************************************************************************
** Form generated from reading UI file 'MainForm.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFORM_H
#define UI_MAINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QAction *_newClient;
    QAction *ac_newBusiness;
    QAction *ac_newOrcamento;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *vLayout;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuEmpresa;
    QMenu *menuClientes;
    QMenu *menuOr_amentos;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName(QStringLiteral("MainForm"));
        MainForm->resize(800, 600);
        _newClient = new QAction(MainForm);
        _newClient->setObjectName(QStringLiteral("_newClient"));
        ac_newBusiness = new QAction(MainForm);
        ac_newBusiness->setObjectName(QStringLiteral("ac_newBusiness"));
        ac_newOrcamento = new QAction(MainForm);
        ac_newOrcamento->setObjectName(QStringLiteral("ac_newOrcamento"));
        centralwidget = new QWidget(MainForm);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        vLayout = new QVBoxLayout();
        vLayout->setObjectName(QStringLiteral("vLayout"));

        gridLayout->addLayout(vLayout, 0, 0, 1, 1);

        MainForm->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainForm);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QStringLiteral("menuArquivo"));
        menuEmpresa = new QMenu(menubar);
        menuEmpresa->setObjectName(QStringLiteral("menuEmpresa"));
        menuClientes = new QMenu(menubar);
        menuClientes->setObjectName(QStringLiteral("menuClientes"));
        menuOr_amentos = new QMenu(menubar);
        menuOr_amentos->setObjectName(QStringLiteral("menuOr_amentos"));
        MainForm->setMenuBar(menubar);
        statusbar = new QStatusBar(MainForm);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainForm->setStatusBar(statusbar);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuEmpresa->menuAction());
        menubar->addAction(menuClientes->menuAction());
        menubar->addAction(menuOr_amentos->menuAction());
        menuEmpresa->addAction(ac_newBusiness);
        menuClientes->addAction(_newClient);
        menuOr_amentos->addAction(ac_newOrcamento);

        retranslateUi(MainForm);
        QObject::connect(_newClient, SIGNAL(triggered()), MainForm, SLOT(newClient()));
        QObject::connect(ac_newBusiness, SIGNAL(triggered()), MainForm, SLOT(newBusiness()));
        QObject::connect(ac_newOrcamento, SIGNAL(triggered()), MainForm, SLOT(newOrcamento()));

        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QMainWindow *MainForm)
    {
        MainForm->setWindowTitle(QApplication::translate("MainForm", "MainForm", 0));
        _newClient->setText(QApplication::translate("MainForm", "Novo cliente", 0));
        ac_newBusiness->setText(QApplication::translate("MainForm", "Nova Empresa", 0));
        ac_newOrcamento->setText(QApplication::translate("MainForm", "Novo Or\303\247amento", 0));
        menuArquivo->setTitle(QApplication::translate("MainForm", "Arquivo", 0));
        menuEmpresa->setTitle(QApplication::translate("MainForm", "Empresa", 0));
        menuClientes->setTitle(QApplication::translate("MainForm", "Clientes", 0));
        menuOr_amentos->setTitle(QApplication::translate("MainForm", "Or\303\247amentos", 0));
    } // retranslateUi

};

namespace Ui {
    class MainForm: public Ui_MainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORM_H
