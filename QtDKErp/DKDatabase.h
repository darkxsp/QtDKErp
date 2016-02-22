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
 * File:   DKDatabase.h
 * Author: brasilio
 *
 * Created on 20 de Fevereiro de 2016, 22:59
 */

#ifndef DKDATABASE_H
#define DKDATABASE_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QtCore/QtCore>

class DKDatabase {
public:
    DKDatabase();
    DKDatabase(const DKDatabase& orig);
    virtual ~DKDatabase();
    QSqlDatabase getConnection();
    QString getSql(QString name);
private:
    QSqlDatabase dbh;

};

#endif /* DKDATABASE_H */

