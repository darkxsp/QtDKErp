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
 * File:   DKUtils.h
 * Author: brasilio
 *
 * Created on 21 de Fevereiro de 2016, 12:28
 */

#ifndef DKUTILS_H
#define DKUTILS_H

#include <QtCore/QtCore>
#include <QtWidgets/QMessageBox>

class DKUtils {
public:
    DKUtils();
    DKUtils(const DKUtils& orig);
    virtual ~DKUtils();
    QString uniqid();
    void messageBoxError(QString message);
    QRegExp rx_cep, rx_phone, rx_name;
private:

};

#endif /* DKUTILS_H */

