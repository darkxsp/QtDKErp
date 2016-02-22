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
 * File:   DkBusiness.cpp
 * Author: brasilio
 *
 * Created on 21 de Fevereiro de 2016, 23:35
 */

#include "DkBusiness.h"

DkBusiness::DkBusiness(DkDatabase *db)
{
    this->db = db;
}

DkBusiness::~DkBusiness()
{
}

/**
 * Pega a lista de telefones da empresa registrada no DB
 * @param business QString
 * @return QStringList
 */
QStringList DkBusiness::getPhoneList(QString business)
{
    QStringList list;
    QSqlQuery query(db->getConnection());
    query.prepare(db->getSql("select phone from business"));
    query.bindValue(0, business);
    if (query.exec()) {
        while (query.next()) {
            list.append(query.value(0).toString());
        }
    }
    return list;
}

