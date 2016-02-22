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
 * File:   NewCliente.h
 * Author: brasilio
 *
 * Created on 20 de Fevereiro de 2016, 22:19
 */

#ifndef _NEWCLIENTE_H
#define _NEWCLIENTE_H
#include <QtCore/QtCore>
#include <QtWidgets/QWidget>
#include <QtWidgets/QMainWindow>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtWidgets/QMessageBox>

#include "DKDatabase.h"
#include "ui_NewCliente.h"

class NewCliente : public QWidget {
    Q_OBJECT
public:
    NewCliente(DKDatabase *db);
    virtual ~NewCliente();
private:
    Ui::NewCliente widget;
    DKDatabase *db;
    void clearAllFields();

private slots:
    void populateAddr();
    void registerClient();
    void grpChange(QAbstractButton *btn);
};

#endif /* _NEWCLIENTE_H */
