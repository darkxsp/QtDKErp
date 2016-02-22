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
 * File:   NewBusiness.cpp
 * Author: brasilio
 *
 * Created on 21 de Fevereiro de 2016, 00:48
 */

#include <QtCore/qnamespace.h>
#include <QtCore/qiodevice.h>
#include <QtCore/qdebug.h>
#include <QtCore/qregexp.h>
#include <QtCore/qvariant.h>

#include "NewBusiness.h"

NewBusiness::NewBusiness(DKDatabase *db) {
    widget.setupUi(this);
    this->db = db;
    this->utils = new DKUtils();
    rx_business = QRegExp("[\\w\\d\\s_-]{3,25}");
    rx_inscricao = QRegExp("[\\d\\.]+");
    rx_cnpj = QRegExp("[\\d]{2}\\.[\\d]{3}\\.[\\d]{3}/[\\d]{4}-[\\d]{2}");
    rx_cep = QRegExp("[\\d]{5}-[\\d]{3}");
    
    widget.le_business->setValidator(new QRegExpValidator(rx_business));
    widget.le_ie->setValidator(new QRegExpValidator(rx_inscricao));
    widget.le_im->setValidator(new QRegExpValidator(rx_inscricao));
    widget.le_numero->setValidator(new QIntValidator(1, 999999));
}

NewBusiness::~NewBusiness() {
}

void NewBusiness::registerBusiness() {
    QString business, name, cnpj, ie, im, cep, rua, complemento, bairro, cidade, uf, phone, email, logo, bg;
    QStringList querys;
    QList<QVariantList> vars;
    QVariantList list;
    
    business = widget.le_business->text();
    name = widget.le_name->text();
    cnpj = widget.le_cnpj->text();
    ie = widget.le_ie->text();
    im = widget.le_im->text();
    cep = widget.le_cep->text();
    rua = widget.le_rua->text();
    complemento = widget.le_complemento->text();
    bairro = widget.le_bairro->text();
    cidade = widget.le_cidade->text();
    uf = widget.le_uf->text();
    phone = widget.le_phone->text();
    email = widget.le_email->text();
    logo = saveLogo(widget.le_logo->text());
    bg = saveBg(widget.le_bg->text());
    int numero = widget.le_numero->text().toInt();
    
    if (rx_business.indexIn(business) == -1) {
        utils->messageBoxError("Por favor, preencha o campo Empresa");
    }
    else if (name.isEmpty()) {
        utils->messageBoxError("Por favor, preencha o campo Razão Social");
    }
    else if (rx_cnpj.indexIn(cnpj) == -1) {
        utils->messageBoxError("Por favor, preecnha o campo CNPJ com um CNPJ válido");
    }
    else if (rx_cep.indexIn(cep) == -1 || rua.isEmpty()) {
        utils->messageBoxError("Por favor, preencha o endereço da empresa.");
    }
    else if (utils->rx_phone.indexIn(phone) == -1) {
        utils->messageBoxError("Por favor, preencha o campo Telefone");
    }
    else {
        querys.append(db->getSql("insert business"));
        querys.append(db->getSql("insert business_address"));
        querys.append(db->getSql("insert business_phone"));
        querys.append(db->getSql("insert business_email"));
        
        list << 1 << business << name << cnpj << ie << im << logo << bg;
        vars << list;
        list.clear();
        list << business << cep << numero << complemento << business;
        vars << list;
        list.clear();
        list << business << phone << business;
        vars << list;
        list.clear();
        list << business << email << business;
        vars << list;
        
        for (int i=0; i<querys.size(); i++) {
            QSqlQuery query(db->getConnection());
            query.prepare(querys.value(i));
            for (int j=0; j<vars.value(i).size(); j++) {
                query.bindValue(j, vars.value(i).value(j));
            }
            qDebug() << query.lastQuery();
            if (!query.exec()) {
                qDebug() << query.lastError();
            }
        }
    }
    
}

QString NewBusiness::saveBg(QString filename) {
    QString sfilename;
    QFile logofile(filename);
    DKUtils *utils = new DKUtils();
    sfilename = QString("img/%0.png").arg(utils->uniqid());
    if (logofile.exists()) {
        QImage img(filename);
        QPixmap pixmap;
        pixmap = pixmap.fromImage(img.scaled(744, 1052, Qt::KeepAspectRatio));
        QFile sfile(sfilename);
        sfile.open(QIODevice::WriteOnly);
        pixmap.save(&sfile, "png");
        sfile.close();
        return sfilename;
    }
    return NULL;
}

QString NewBusiness::saveLogo(QString filename) {
    QString sfilename;
    QFile logofile(filename);
    DKUtils *utils = new DKUtils();
    sfilename = QString("img/%0.png").arg(utils->uniqid());
    if (logofile.exists()) {
        QImage img(filename);
        QPixmap pixmap;
        pixmap = pixmap.fromImage(img.scaled(100, 50, Qt::KeepAspectRatio));
        QFile sfile(sfilename);
        sfile.open(QIODevice::WriteOnly);
        pixmap.save(&sfile, "png");
        sfile.close();
        return sfilename;
    }
    return NULL;
}

void NewBusiness::populateAddr() {
    QString cep = widget.le_cep->text();
    QString sql = db->getSql("address from cep");
    QSqlQuery query(db->getConnection());
    query.prepare(sql);
    query.bindValue(0, cep);
    if (query.exec()) {
        if (query.next()) {
            widget.le_rua->setText(query.value(0).toString());
            widget.le_bairro->setText(query.value(1).toString());
            widget.le_cidade->setText(query.value(2).toString());
            widget.le_uf->setText(query.value(3).toString());
        }
    }
}

void NewBusiness::browserLogo() {
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFile);
    dialog.setAcceptMode(QFileDialog::AcceptOpen);
    dialog.setNameFilter(tr("Imagens (*.png *.jpg *.jpeg *.bmp)"));
    QStringList filenames;
    if (dialog.exec()) {
        filenames = dialog.selectedFiles();
    }
    
    if (filenames.size() > 0) {
        widget.le_logo->setText(filenames.value(0));
    }
}

void NewBusiness::browserBg() {
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::ExistingFile);
    dialog.setAcceptMode(QFileDialog::AcceptOpen);
    dialog.setNameFilter(tr("Imagens (*.png *.jpg *.jpeg *.bmp)"));
    QStringList filenames;
    if (dialog.exec()) {
        filenames = dialog.selectedFiles();
    }

    if (filenames.size() > 0) {
        widget.le_bg->setText(filenames.value(0));
    }
}
