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
 * File:   DKUtils.cpp
 * Author: brasilio
 * 
 * Created on 21 de Fevereiro de 2016, 12:28
 */

#include "DKUtils.h"

DKUtils::DKUtils() {
    rx_cep = QRegExp("^[\\d]{5}-[\\d]{3}$");
    rx_phone = QRegExp("^\\([\\d]{2}\\) [\\d]{4,5}-[\\d]{4}$");
}

DKUtils::DKUtils(const DKUtils& orig) {
}

DKUtils::~DKUtils() {
}

QString DKUtils::uniqid()
{
    QString str;
    str.resize(32);
    for (int i=0; i<32; i++)
        str[i] = QChar('A' + char(qrand() % ('Z' - 'A')));
    return str.toLower();
}

void DKUtils::messageBoxError(QString message) {
    QMessageBox msg;
    msg.setText(message);
    msg.setIcon(QMessageBox::Critical);
    msg.exec();
}
