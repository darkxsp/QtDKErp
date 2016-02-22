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
 * File:   MainForm.cpp
 * Author: brasilio
 *
 * Created on 20 de Fevereiro de 2016, 22:04
 */

#include "MainForm.h"
#include "clientes/NewCliente.h"
#include "business/NewBusiness.h"

MainForm::MainForm() {
    widget.setupUi(this);
    db = new DKDatabase();
}

MainForm::~MainForm() {
}

void MainForm::newBusiness()
{
    NewBusiness *fm = new NewBusiness(db);
    loadMyWidget(fm);
}

void MainForm::newClient()
{
    NewCliente *fm = new NewCliente(db);
    loadMyWidget(fm);
}

void MainForm::newOrcamento()
{
    Print *print = new Print(db);
    loadMyWidget(print);
}

void MainForm::clearLayout() {
    QLayoutItem *item;
    while ((item = widget.vLayout->takeAt(0)) != NULL)
        delete item->widget();
}

void MainForm::loadMyWidget(QWidget *newWidget)
{
    clearLayout();
    widget.vLayout->addWidget(newWidget);
}
