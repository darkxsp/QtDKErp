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
 * File:   Print.h
 * Author: brasilio
 *
 * Created on 21 de Fevereiro de 2016, 16:06
 */

#ifndef _PRINT_H
#define _PRINT_H

#include <QtWidgets/QWidget>
#include <QtCore/QtCore>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGraphicsItem>
#include <QtWidgets/QGraphicsTextItem>
#include <QPainter>

#include "../DKDatabase.h"
#include "../utils/DKUtils.h"

#include "ui_Print.h"

class Print : public QWidget {
    Q_OBJECT
public:
    Print(DKDatabase *db);
    virtual ~Print();
private:
    Ui::Print widget;
    DKDatabase *db;
    DKUtils *utils;
    QFont monospace, monospaceBold, font, fontBold, fontItalic;
    QPen pblack;
    qreal page_width, page_height, page_margin, line_start, line_end, cx, cy;
    void addText(QGraphicsScene *scene, qreal x, qreal y, QString text);
    void drawText(QGraphicsScene *scene, qreal x, qreal y, QString text);
    void drawTextBold(QGraphicsScene *scene, qreal x, qreal y, QString text);
    void drawTextItalic(QGraphicsScene *scene, qreal x, qreal y, QString text);
    void drawTextForm(QGraphicsScene *scene, qreal x, qreal y, QString c1, QString c2);
    void drawTextRight(QGraphicsScene *scene, qreal y, QString text, QFont font, bool uppery);
    void drawBackground(QGraphicsScene *scene, QString filename);
    void drawLogo(QGraphicsScene *scene, QString filename);
    void drawHeader(QGraphicsScene *scene, QString business);
    void drawBusiness(QGraphicsScene *scene, QSqlQuery query, QString business);
    void drawCliente(QGraphicsScene *scene, QString cliente);
    QStringList getPhones(QString business);
    QStringList getClientePhones(QString cliente);
};

#endif /* _PRINT_H */
