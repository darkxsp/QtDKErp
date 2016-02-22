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
 * File:   MainForm.h
 * Author: brasilio
 *
 * Created on 20 de Fevereiro de 2016, 22:04
 */

#ifndef _MAINFORM_H
#define _MAINFORM_H

#include <QtCore/QtCore>
#include <QtWidgets/QWidget>
#include <QtWidgets/QMainWindow>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>

#include "ui_MainForm.h"
#include "DKDatabase.h"
#include "recibos/Print.h"

class MainForm : public QMainWindow {
    Q_OBJECT
public:
    MainForm();
    virtual ~MainForm();
private:
    Ui::MainForm widget;
    QWidget *currentWidget;
    DKDatabase *db;
    
    void clearLayout();
    
    void loadMyWidget(QWidget *);

    private slots:
        void newClient();
        void newBusiness();
        void newOrcamento();
};

#endif /* _MAINFORM_H */
