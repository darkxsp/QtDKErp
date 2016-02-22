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
 * File:   NewBusiness.h
 * Author: brasilio
 *
 * Created on 21 de Fevereiro de 2016, 00:48
 */

#ifndef _NEWBUSINESS_H
#define _NEWBUSINESS_H

#include <QtWidgets/QFileDialog>

#include "ui_NewBusiness.h"
#include "../DKDatabase.h"
#include "../utils/DKUtils.h"

class NewBusiness : public QWidget {
    Q_OBJECT
public:
    NewBusiness(DKDatabase *db);
    virtual ~NewBusiness();
private:
    Ui::NewBusiness widget;
    DKDatabase *db;
    DKUtils *utils;
    QRegExp rx_business, rx_inscricao, rx_cnpj, rx_cep;
    
    QString saveLogo(QString filename);
    QString saveBg(QString filename);
    
    private slots:
        void registerBusiness();
        void populateAddr();
        void browserLogo();
        void browserBg();
};

#endif /* _NEWBUSINESS_H */
