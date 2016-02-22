/********************************************************************************
** Form generated from reading UI file 'NewBusiness.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWBUSINESS_H
#define UI_NEWBUSINESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewBusiness
{
public:
    QGridLayout *gridLayout_8;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *le_business;
    QLabel *label_2;
    QLineEdit *le_name;
    QLabel *label_3;
    QLineEdit *le_cnpj;
    QLabel *label_4;
    QLineEdit *le_ie;
    QLabel *label_5;
    QLineEdit *le_im;
    QFrame *line;
    QFormLayout *formLayout_3;
    QLabel *label_6;
    QGridLayout *gridLayout;
    QLineEdit *le_cep;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label_7;
    QGridLayout *gridLayout_2;
    QLineEdit *le_rua;
    QLabel *label_12;
    QLineEdit *le_numero;
    QLabel *label_8;
    QGridLayout *gridLayout_3;
    QLineEdit *le_complemento;
    QLabel *label_13;
    QLineEdit *le_bairro;
    QLabel *label_9;
    QGridLayout *gridLayout_4;
    QLineEdit *le_cidade;
    QLabel *label_14;
    QLineEdit *le_uf;
    QFrame *line_2;
    QFormLayout *formLayout_2;
    QLabel *label_10;
    QLineEdit *le_phone;
    QLabel *label_11;
    QLineEdit *le_email;
    QFrame *line_3;
    QGridLayout *gridLayout_7;
    QLabel *label_15;
    QGridLayout *gridLayout_5;
    QLineEdit *le_logo;
    QPushButton *pushButton_3;
    QLabel *label_16;
    QGridLayout *gridLayout_6;
    QLineEdit *le_bg;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;

    void setupUi(QWidget *NewBusiness)
    {
        if (NewBusiness->objectName().isEmpty())
            NewBusiness->setObjectName(QStringLiteral("NewBusiness"));
        NewBusiness->resize(600, 609);
        gridLayout_8 = new QGridLayout(NewBusiness);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(NewBusiness);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        le_business = new QLineEdit(NewBusiness);
        le_business->setObjectName(QStringLiteral("le_business"));

        formLayout->setWidget(0, QFormLayout::FieldRole, le_business);

        label_2 = new QLabel(NewBusiness);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        le_name = new QLineEdit(NewBusiness);
        le_name->setObjectName(QStringLiteral("le_name"));

        formLayout->setWidget(1, QFormLayout::FieldRole, le_name);

        label_3 = new QLabel(NewBusiness);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        le_cnpj = new QLineEdit(NewBusiness);
        le_cnpj->setObjectName(QStringLiteral("le_cnpj"));
        le_cnpj->setMaximumSize(QSize(200, 16777215));

        formLayout->setWidget(2, QFormLayout::FieldRole, le_cnpj);

        label_4 = new QLabel(NewBusiness);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        le_ie = new QLineEdit(NewBusiness);
        le_ie->setObjectName(QStringLiteral("le_ie"));
        le_ie->setMaximumSize(QSize(130, 16777215));

        formLayout->setWidget(3, QFormLayout::FieldRole, le_ie);

        label_5 = new QLabel(NewBusiness);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        le_im = new QLineEdit(NewBusiness);
        le_im->setObjectName(QStringLiteral("le_im"));
        le_im->setMaximumSize(QSize(130, 16777215));

        formLayout->setWidget(4, QFormLayout::FieldRole, le_im);


        gridLayout_8->addLayout(formLayout, 0, 0, 1, 2);

        line = new QFrame(NewBusiness);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_8->addWidget(line, 1, 0, 1, 2);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_6 = new QLabel(NewBusiness);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_6);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        le_cep = new QLineEdit(NewBusiness);
        le_cep->setObjectName(QStringLiteral("le_cep"));
        le_cep->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(le_cep, 0, 0, 1, 1);

        pushButton = new QPushButton(NewBusiness);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, gridLayout);

        label_7 = new QLabel(NewBusiness);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_7);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        le_rua = new QLineEdit(NewBusiness);
        le_rua->setObjectName(QStringLiteral("le_rua"));
        le_rua->setReadOnly(true);

        gridLayout_2->addWidget(le_rua, 0, 0, 1, 1);

        label_12 = new QLabel(NewBusiness);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 0, 1, 1, 1);

        le_numero = new QLineEdit(NewBusiness);
        le_numero->setObjectName(QStringLiteral("le_numero"));
        le_numero->setMaximumSize(QSize(80, 16777215));

        gridLayout_2->addWidget(le_numero, 0, 2, 1, 1);


        formLayout_3->setLayout(1, QFormLayout::FieldRole, gridLayout_2);

        label_8 = new QLabel(NewBusiness);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(101, 0));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_8);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        le_complemento = new QLineEdit(NewBusiness);
        le_complemento->setObjectName(QStringLiteral("le_complemento"));

        gridLayout_3->addWidget(le_complemento, 0, 0, 1, 1);

        label_13 = new QLabel(NewBusiness);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_3->addWidget(label_13, 0, 1, 1, 1);

        le_bairro = new QLineEdit(NewBusiness);
        le_bairro->setObjectName(QStringLiteral("le_bairro"));
        le_bairro->setReadOnly(true);

        gridLayout_3->addWidget(le_bairro, 0, 2, 1, 1);


        formLayout_3->setLayout(2, QFormLayout::FieldRole, gridLayout_3);

        label_9 = new QLabel(NewBusiness);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_9);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        le_cidade = new QLineEdit(NewBusiness);
        le_cidade->setObjectName(QStringLiteral("le_cidade"));
        le_cidade->setReadOnly(true);

        gridLayout_4->addWidget(le_cidade, 0, 0, 1, 1);

        label_14 = new QLabel(NewBusiness);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_4->addWidget(label_14, 0, 1, 1, 1);

        le_uf = new QLineEdit(NewBusiness);
        le_uf->setObjectName(QStringLiteral("le_uf"));
        le_uf->setMaximumSize(QSize(50, 16777215));
        le_uf->setReadOnly(true);

        gridLayout_4->addWidget(le_uf, 0, 2, 1, 1);


        formLayout_3->setLayout(3, QFormLayout::FieldRole, gridLayout_4);


        gridLayout_8->addLayout(formLayout_3, 2, 0, 1, 2);

        line_2 = new QFrame(NewBusiness);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_8->addWidget(line_2, 3, 0, 1, 2);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_10 = new QLabel(NewBusiness);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(101, 0));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_10);

        le_phone = new QLineEdit(NewBusiness);
        le_phone->setObjectName(QStringLiteral("le_phone"));
        le_phone->setMaximumSize(QSize(150, 16777215));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, le_phone);

        label_11 = new QLabel(NewBusiness);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_11);

        le_email = new QLineEdit(NewBusiness);
        le_email->setObjectName(QStringLiteral("le_email"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, le_email);


        gridLayout_8->addLayout(formLayout_2, 4, 0, 1, 2);

        line_3 = new QFrame(NewBusiness);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_8->addWidget(line_3, 5, 0, 1, 2);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_15 = new QLabel(NewBusiness);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_7->addWidget(label_15, 0, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        le_logo = new QLineEdit(NewBusiness);
        le_logo->setObjectName(QStringLiteral("le_logo"));

        gridLayout_5->addWidget(le_logo, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(NewBusiness);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_5->addWidget(pushButton_3, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 0, 1, 1, 1);

        label_16 = new QLabel(NewBusiness);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_7->addWidget(label_16, 1, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        le_bg = new QLineEdit(NewBusiness);
        le_bg->setObjectName(QStringLiteral("le_bg"));

        gridLayout_6->addWidget(le_bg, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(NewBusiness);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_6->addWidget(pushButton_4, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 1, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 6, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer, 7, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(488, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_2, 8, 0, 1, 1);

        pushButton_2 = new QPushButton(NewBusiness);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_8->addWidget(pushButton_2, 8, 1, 1, 1);


        retranslateUi(NewBusiness);
        QObject::connect(pushButton_2, SIGNAL(clicked()), NewBusiness, SLOT(registerBusiness()));
        QObject::connect(pushButton, SIGNAL(clicked()), NewBusiness, SLOT(populateAddr()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), NewBusiness, SLOT(browserLogo()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), NewBusiness, SLOT(browserBg()));

        QMetaObject::connectSlotsByName(NewBusiness);
    } // setupUi

    void retranslateUi(QWidget *NewBusiness)
    {
        NewBusiness->setWindowTitle(QApplication::translate("NewBusiness", "NewBusiness", 0));
        label->setText(QApplication::translate("NewBusiness", "Empresa:", 0));
        label_2->setText(QApplication::translate("NewBusiness", "Raz\303\243o Social:", 0));
        label_3->setText(QApplication::translate("NewBusiness", "CNPJ:", 0));
        le_cnpj->setInputMask(QApplication::translate("NewBusiness", "00.000.000/0000-00", 0));
        label_4->setText(QApplication::translate("NewBusiness", "Insc. Estadual:", 0));
        label_5->setText(QApplication::translate("NewBusiness", "Insc. Municipal:", 0));
        label_6->setText(QApplication::translate("NewBusiness", "CEP:", 0));
        le_cep->setInputMask(QApplication::translate("NewBusiness", "00000-000", 0));
        pushButton->setText(QApplication::translate("NewBusiness", "Pesquisar", 0));
        label_7->setText(QApplication::translate("NewBusiness", "Logradouro:", 0));
        label_12->setText(QApplication::translate("NewBusiness", "N\302\272:", 0));
        label_8->setText(QApplication::translate("NewBusiness", "Complemento:", 0));
        label_13->setText(QApplication::translate("NewBusiness", "Bairro:", 0));
        label_9->setText(QApplication::translate("NewBusiness", "Cidade:", 0));
        label_14->setText(QApplication::translate("NewBusiness", "UF:", 0));
        label_10->setText(QApplication::translate("NewBusiness", "Telefone:", 0));
        le_phone->setInputMask(QApplication::translate("NewBusiness", "(00) 0000-0000", 0));
        label_11->setText(QApplication::translate("NewBusiness", "E-mail:", 0));
        label_15->setText(QApplication::translate("NewBusiness", "Logo:", 0));
        pushButton_3->setText(QApplication::translate("NewBusiness", "Procurar...", 0));
        label_16->setText(QApplication::translate("NewBusiness", "Marca D'agua:", 0));
        pushButton_4->setText(QApplication::translate("NewBusiness", "Procurar...", 0));
        pushButton_2->setText(QApplication::translate("NewBusiness", "Salvar", 0));
    } // retranslateUi

};

namespace Ui {
    class NewBusiness: public Ui_NewBusiness {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWBUSINESS_H
