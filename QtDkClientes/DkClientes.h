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
 * File:   DkClientes.h
 * Author: brasilio
 *
 * Created on 21 de Fevereiro de 2016, 23:23
 */

#ifndef DKCLIENTES_H
#define DKCLIENTES_H

#include <QtCore/QtCore>
#include "../QtDkDatabase/DkDatabase.h"

class DkClientes {
public:
    DkClientes(DkDatabase *db);
    virtual ~DkClientes();
    QStringList getPhoneList(QString cliente);
private:
    DkDatabase *db;

};

#endif /* DKCLIENTES_H */

