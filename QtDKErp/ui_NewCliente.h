/********************************************************************************
** Form generated from reading UI file 'NewCliente.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCLIENTE_H
#define UI_NEWCLIENTE_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewCliente
{
public:
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *cliente_;
    QLabel *label_2;
    QLineEdit *nome_;
    QLabel *label_3;
    QFormLayout *formLayout;
    QRadioButton *pj;
    QRadioButton *pf;
    QLabel *label_4;
    QLineEdit *cnpj_;
    QLabel *label_5;
    QLineEdit *ie_;
    QLabel *label_6;
    QLineEdit *im_;
    QLabel *label_7;
    QLineEdit *le_cpf;
    QFrame *line;
    QGridLayout *gridLayout_6;
    QLabel *label_8;
    QGridLayout *gridLayout_2;
    QLineEdit *cep_;
    QPushButton *btn_search;
    QSpacerItem *horizontalSpacer;
    QLabel *label_9;
    QGridLayout *gridLayout_3;
    QLineEdit *rua_;
    QLabel *label_10;
    QLineEdit *numero_;
    QLabel *label_11;
    QGridLayout *gridLayout_4;
    QLineEdit *complemento_;
    QLabel *label_12;
    QLineEdit *bairro_;
    QLabel *label_13;
    QGridLayout *gridLayout_5;
    QLineEdit *cidade_;
    QLabel *label_14;
    QLineEdit *uf_;
    QFrame *line_2;
    QFormLayout *formLayout_2;
    QLabel *label_15;
    QLineEdit *phone_;
    QLabel *label_16;
    QLineEdit *celphone_;
    QLabel *label_17;
    QLineEdit *email_;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_save;
    QButtonGroup *grp_type;

    void setupUi(QWidget *NewCliente)
    {
        if (NewCliente->objectName().isEmpty())
            NewCliente->setObjectName(QStringLiteral("NewCliente"));
        NewCliente->resize(809, 665);
        gridLayout_7 = new QGridLayout(NewCliente);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(NewCliente);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cliente_ = new QLineEdit(NewCliente);
        cliente_->setObjectName(QStringLiteral("cliente_"));
        cliente_->setMaximumSize(QSize(300, 16777215));

        gridLayout->addWidget(cliente_, 0, 1, 2, 1);

        label_2 = new QLabel(NewCliente);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 2, 1);

        nome_ = new QLineEdit(NewCliente);
        nome_->setObjectName(QStringLiteral("nome_"));

        gridLayout->addWidget(nome_, 2, 1, 1, 1);

        label_3 = new QLabel(NewCliente);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        pj = new QRadioButton(NewCliente);
        grp_type = new QButtonGroup(NewCliente);
        grp_type->setObjectName(QStringLiteral("grp_type"));
        grp_type->addButton(pj);
        pj->setObjectName(QStringLiteral("pj"));
        pj->setChecked(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, pj);

        pf = new QRadioButton(NewCliente);
        grp_type->addButton(pf);
        pf->setObjectName(QStringLiteral("pf"));

        formLayout->setWidget(0, QFormLayout::FieldRole, pf);


        gridLayout->addLayout(formLayout, 3, 1, 1, 1);

        label_4 = new QLabel(NewCliente);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        cnpj_ = new QLineEdit(NewCliente);
        cnpj_->setObjectName(QStringLiteral("cnpj_"));
        cnpj_->setMaximumSize(QSize(190, 16777215));

        gridLayout->addWidget(cnpj_, 4, 1, 1, 1);

        label_5 = new QLabel(NewCliente);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        ie_ = new QLineEdit(NewCliente);
        ie_->setObjectName(QStringLiteral("ie_"));
        ie_->setMaximumSize(QSize(150, 16777215));

        gridLayout->addWidget(ie_, 5, 1, 1, 1);

        label_6 = new QLabel(NewCliente);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        im_ = new QLineEdit(NewCliente);
        im_->setObjectName(QStringLiteral("im_"));
        im_->setMaximumSize(QSize(150, 16777215));

        gridLayout->addWidget(im_, 6, 1, 1, 1);

        label_7 = new QLabel(NewCliente);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        le_cpf = new QLineEdit(NewCliente);
        le_cpf->setObjectName(QStringLiteral("le_cpf"));
        le_cpf->setEnabled(false);
        le_cpf->setMaximumSize(QSize(130, 16777215));
        le_cpf->setReadOnly(false);

        gridLayout->addWidget(le_cpf, 7, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout, 0, 0, 1, 2);

        line = new QFrame(NewCliente);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_7->addWidget(line, 1, 0, 1, 2);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_8 = new QLabel(NewCliente);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(132, 0));

        gridLayout_6->addWidget(label_8, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        cep_ = new QLineEdit(NewCliente);
        cep_->setObjectName(QStringLiteral("cep_"));
        cep_->setMaximumSize(QSize(150, 16777215));

        gridLayout_2->addWidget(cep_, 0, 0, 1, 1);

        btn_search = new QPushButton(NewCliente);
        btn_search->setObjectName(QStringLiteral("btn_search"));

        gridLayout_2->addWidget(btn_search, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 0, 1, 1, 1);

        label_9 = new QLabel(NewCliente);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_6->addWidget(label_9, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        rua_ = new QLineEdit(NewCliente);
        rua_->setObjectName(QStringLiteral("rua_"));

        gridLayout_3->addWidget(rua_, 0, 0, 1, 1);

        label_10 = new QLabel(NewCliente);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 0, 1, 1, 1);

        numero_ = new QLineEdit(NewCliente);
        numero_->setObjectName(QStringLiteral("numero_"));
        numero_->setMaximumSize(QSize(90, 16777215));

        gridLayout_3->addWidget(numero_, 0, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 1, 1, 1, 1);

        label_11 = new QLabel(NewCliente);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_6->addWidget(label_11, 2, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        complemento_ = new QLineEdit(NewCliente);
        complemento_->setObjectName(QStringLiteral("complemento_"));
        complemento_->setMaximumSize(QSize(300, 16777215));

        gridLayout_4->addWidget(complemento_, 0, 0, 1, 1);

        label_12 = new QLabel(NewCliente);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_4->addWidget(label_12, 0, 1, 1, 1);

        bairro_ = new QLineEdit(NewCliente);
        bairro_->setObjectName(QStringLiteral("bairro_"));

        gridLayout_4->addWidget(bairro_, 0, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 2, 1, 1, 1);

        label_13 = new QLabel(NewCliente);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_6->addWidget(label_13, 3, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        cidade_ = new QLineEdit(NewCliente);
        cidade_->setObjectName(QStringLiteral("cidade_"));

        gridLayout_5->addWidget(cidade_, 0, 0, 1, 1);

        label_14 = new QLabel(NewCliente);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_5->addWidget(label_14, 0, 1, 1, 1);

        uf_ = new QLineEdit(NewCliente);
        uf_->setObjectName(QStringLiteral("uf_"));
        uf_->setMaximumSize(QSize(50, 16777215));

        gridLayout_5->addWidget(uf_, 0, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 3, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 2, 0, 1, 2);

        line_2 = new QFrame(NewCliente);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_7->addWidget(line_2, 3, 0, 1, 2);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_15 = new QLabel(NewCliente);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(132, 0));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_15);

        phone_ = new QLineEdit(NewCliente);
        phone_->setObjectName(QStringLiteral("phone_"));
        phone_->setMaximumSize(QSize(150, 16777215));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, phone_);

        label_16 = new QLabel(NewCliente);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_16);

        celphone_ = new QLineEdit(NewCliente);
        celphone_->setObjectName(QStringLiteral("celphone_"));
        celphone_->setMaximumSize(QSize(150, 16777215));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, celphone_);

        label_17 = new QLabel(NewCliente);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_17);

        email_ = new QLineEdit(NewCliente);
        email_->setObjectName(QStringLiteral("email_"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, email_);


        gridLayout_7->addLayout(formLayout_2, 4, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 34, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer, 5, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(697, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 6, 0, 1, 1);

        btn_save = new QPushButton(NewCliente);
        btn_save->setObjectName(QStringLiteral("btn_save"));

        gridLayout_7->addWidget(btn_save, 6, 1, 1, 1);


        retranslateUi(NewCliente);
        QObject::connect(btn_search, SIGNAL(clicked()), NewCliente, SLOT(populateAddr()));
        QObject::connect(btn_save, SIGNAL(clicked()), NewCliente, SLOT(registerClient()));

        QMetaObject::connectSlotsByName(NewCliente);
    } // setupUi

    void retranslateUi(QWidget *NewCliente)
    {
        NewCliente->setWindowTitle(QApplication::translate("NewCliente", "NewCliente", 0));
        label->setText(QApplication::translate("NewCliente", "Cliente:", 0));
        label_2->setText(QApplication::translate("NewCliente", "Nome/Raz\303\243o Social:", 0));
        label_3->setText(QApplication::translate("NewCliente", "Tipo:", 0));
        pj->setText(QApplication::translate("NewCliente", "Pessoa Juridica", 0));
        pf->setText(QApplication::translate("NewCliente", "Pessoa Fis\303\255ca", 0));
        label_4->setText(QApplication::translate("NewCliente", "CNPJ:", 0));
        cnpj_->setInputMask(QApplication::translate("NewCliente", "00.000.000/0000-00", 0));
        label_5->setText(QApplication::translate("NewCliente", "Insc. Estadual:", 0));
        label_6->setText(QApplication::translate("NewCliente", "Insc. Municipal:", 0));
        label_7->setText(QApplication::translate("NewCliente", "CPF:", 0));
        le_cpf->setInputMask(QApplication::translate("NewCliente", "000.000.000-00", 0));
        label_8->setText(QApplication::translate("NewCliente", "CEP:", 0));
        cep_->setInputMask(QApplication::translate("NewCliente", "00000-000", 0));
        btn_search->setText(QApplication::translate("NewCliente", "Pesquisar", 0));
        label_9->setText(QApplication::translate("NewCliente", "Logradouro:", 0));
        label_10->setText(QApplication::translate("NewCliente", "N\302\272:", 0));
        label_11->setText(QApplication::translate("NewCliente", "Complemento:", 0));
        label_12->setText(QApplication::translate("NewCliente", "Bairro:", 0));
        label_13->setText(QApplication::translate("NewCliente", "Cidade:", 0));
        label_14->setText(QApplication::translate("NewCliente", "UF:", 0));
        label_15->setText(QApplication::translate("NewCliente", "Telefone:", 0));
        phone_->setInputMask(QApplication::translate("NewCliente", "(00) 0000-0000", 0));
        label_16->setText(QApplication::translate("NewCliente", "Celular:", 0));
        celphone_->setInputMask(QApplication::translate("NewCliente", "(00) 00000-0000", 0));
        label_17->setText(QApplication::translate("NewCliente", "E-Mail:", 0));
        btn_save->setText(QApplication::translate("NewCliente", "Salvar", 0));
    } // retranslateUi

};

namespace Ui {
    class NewCliente: public Ui_NewCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCLIENTE_H
