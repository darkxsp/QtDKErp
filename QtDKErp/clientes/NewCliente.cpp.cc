/*
 * Copyright 2016 DarkSP <http://www.darksp.org>.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * File:   NewCliente.cpp
 * Author: brasilio
 *
 * Created on 20 de Fevereiro de 2016, 22:19
 */


#include <QtCore/qglobal.h>
#include <QtSql/qsqldatabase.h>

#include "NewCliente.h"

NewCliente::NewCliente(DKDatabase *db) {
    widget.setupUi(this);
    this->db = db;
    
    QRegExp rx_client = QRegExp("[\\w\\d\\s_-]{3,25}");
    QRegExp rx_inscricao = QRegExp("[\\d\\.]+");
    
    widget.cliente_->setValidator(new QRegExpValidator(rx_client));
    widget.ie_->setValidator(new QRegExpValidator(rx_inscricao));
    widget.im_->setValidator(new QRegExpValidator(rx_inscricao));
    widget.numero_->setValidator(new QIntValidator(1, 999999));
    
    QButtonGroup *grp = widget.grp_type;
    connect(grp, SIGNAL(buttonClicked(QAbstractButton *)), this, SLOT(grpChange(QAbstractButton *)));
}

NewCliente::~NewCliente() {
}

void NewCliente::grpChange(QAbstractButton *)
{
    bool pj = widget.pj->isChecked();
    widget.cnpj_->setDisabled(!pj);
    widget.ie_->setDisabled(!pj);
    widget.im_->setDisabled(!pj);
    widget.le_cpf->setDisabled(pj);
}

void NewCliente::clearAllFields()
{
    widget.cliente_->clear();
    widget.nome_->clear();
    widget.cnpj_->clear();
    widget.ie_->clear();
    widget.im_->clear();
    widget.le_cpf->clear();
    widget.cep_->clear();
    widget.rua_->clear();
    widget.numero_->clear();
    widget.complemento_->clear();
    widget.bairro_->clear();
    widget.cidade_->clear();
    widget.uf_->clear();
    widget.phone_->clear();
    widget.celphone_->clear();
    widget.email_->clear();
}

void NewCliente::populateAddr() {
    QString sql, cep;
    widget.rua_->clear();
    widget.bairro_->clear();
    widget.cidade_->clear();
    widget.uf_->clear();
    
    sql = db->getSql("address from cep");
    cep = widget.cep_->text();
    QSqlDatabase dbh = db->getConnection();
    if (!dbh.isOpen()) {
        dbh.open();
    }
    QSqlQuery query(dbh);
    query.prepare(sql);
    query.bindValue(0, cep);
    if (query.exec()) {
        if (query.next()) {
            widget.rua_->setText(query.value(0).toString());
            widget.bairro_->setText(query.value(1).toString());
            widget.cidade_->setText(query.value(2).toString());
            widget.uf_->setText(query.value(3).toString());
        }
    }
    else {
        qDebug() << query.lastError();
    }
}

void NewCliente::registerClient() {
    QString cliente, nome, tipo, cnpj, ie, im, cpf, cep, complemento, phone, celphone, email;
    qint32 numero;
    QList<QString> list;
    QVariantList slist;
    QList<QVariantList> lvars;
    QSqlDatabase dbh = db->getConnection();
    bool pj = widget.pj->isChecked();
    QRegExp rx_client = QRegExp("[\\w\\d\\s_-]{3,25}");
    QRegExp rx_phone = QRegExp("^\\([0-9]{2}\\) [\\d]{4,5}-[\\d]{4}$");
    QRegExp rx_cep = QRegExp("^[0-9]{5}-[\\d]{3}$");
    
    cliente = widget.cliente_->text();
    nome = widget.nome_->text();
    tipo = widget.pj->isChecked() ? "PJ" : "PF";
    cnpj = pj ? widget.cnpj_->text() : NULL;
    ie = pj ? widget.ie_->text() : NULL;
    im = pj ? widget.im_->text() : NULL;
    cpf = pj ? NULL : widget.le_cpf->text();
    cep = widget.cep_->text();
    numero = widget.numero_->text().toInt();
    complemento = widget.complemento_->text();
    phone = widget.phone_->text();
    celphone = widget.celphone_->text();
    email = widget.email_->text();

    QMessageBox msg;

    if (rx_client.indexIn(cliente) < 0) {
        msg.setText("Por favor, preencha o campo Cliente");
        msg.setIcon(QMessageBox::Critical);
        msg.exec();
        return;
    } else if (nome.isEmpty()) {
        msg.setText("Por favor, preencha o campo Nome");
        msg.setIcon(QMessageBox::Critical);
        msg.exec();
        return;
    } else if (rx_cep.indexIn(cep) == -1 || widget.rua_->text().isEmpty() || widget.numero_->text().isEmpty()) {
        msg.setText("Por favor, preencha o endereço (CEP, rua, número, bairro, cidade e uf)");
        msg.setIcon(QMessageBox::Critical);
        msg.exec();
        return;
    }
    else if (rx_phone.indexIn(phone) == -1 && rx_phone.indexIn(celphone) == -1 && email.isEmpty()) {
        msg.setText("Por favor, preencha ao menos uma forma de contato Telefone, Celular ou E-Mail");
        msg.setIcon(QMessageBox::Critical);
        msg.exec();
        return;
    }
    
    slist.append(1);
    slist.append(cliente);
    slist.append(tipo);
    slist.append(nome);
    slist.append(cnpj);
    slist.append(cpf);
    slist.append(ie);
    slist.append(im);
    lvars.append(slist);
    
    slist.clear();
    slist.append(cliente);
    slist.append(cep);
    slist.append(numero);
    slist.append(complemento);
    lvars.append(slist);
    
    slist.clear();
    slist.append(cliente);
    slist.append(phone);
    lvars.append(slist);
    
    slist.clear();
    slist.append(cliente);
    slist.append(email);
    lvars.append(slist);
    
    
    list.append(db->getSql("insert clientes"));
    list.append(db->getSql("insert clnt_address"));
    list.append(db->getSql("insert clnt_phone"));
    list.append(db->getSql("insert clnt_email"));
    
    
    
    if (rx_phone.indexIn(celphone) > -1) {
        list.append(db->getSql("insert clnt_phone"));
        slist.clear();
        slist.append(cliente);
        slist.append(celphone);
        lvars.append(slist);
    }
    
    
    for (int i=0; i<list.size(); i++) {
        QSqlQuery query(dbh);
        query.prepare(list.value(i));
        for (int j=0; j<lvars.value(i).size(); j++) {
            query.bindValue(j, lvars.value(i).value(j));
        }
        if (!query.exec()) {
            qDebug() << query.lastError();
        }
    }
    msg.setText("Novo cliente salvo com sucesso!");
    msg.setIcon(QMessageBox::Information);
    msg.exec();
    
    clearAllFields();
}
