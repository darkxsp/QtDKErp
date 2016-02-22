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
 * File:   DkDatabase.cpp
 * Author: brasilio
 *
 * Created on 21 de Fevereiro de 2016, 23:25
 */

#include "DkDatabase.h"

/**
 * Inicia a classe e conecta ao banco de dados
 */
DkDatabase::DkDatabase()
{
    dbh = QSqlDatabase::addDatabase("QPSQL");
    dbh.setDatabaseName("optimus");
    dbh.setHostName("localhost");
    dbh.setPort(5432);
    dbh.setUserName("optimus");
    dbh.setPassword("optimus");
}

DkDatabase::~DkDatabase()
{
    dbh.close();
}

QSqlDatabase DkDatabase::getConnection()
{
    return this->dbh;
}

/**
 * Retorna o comando SQL na tabela querys de acordo com o name
 * @param name Nome do comando
 * @return QString comando SQL
 */
QString DkDatabase::getSql(QString name)
{
    if (!dbh.isOpen()) {
        dbh.open();
    }

    QSqlQuery query(dbh);
    query.prepare("select cmd from querys where name = ?");
    query.bindValue(0, name);
    if (query.exec()) {
        if (query.next()) {
            return query.value(0).toString();
        }
    }
    return NULL;
}

