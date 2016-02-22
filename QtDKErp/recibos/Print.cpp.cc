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
 * File:   Print.cpp
 * Author: brasilio
 *
 * Created on 21 de Fevereiro de 2016, 16:06
 */

#include <QtCore/qnamespace.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qdatetime.h>

#include "Print.h"

Print::Print(DKDatabase *db) {
    widget.setupUi(this);
    this->db = db;
    monospace = QFont("Luxi Mono", 10);
    monospaceBold = QFont("Luxi Mono", 10, QFont::Bold);
    font = QFont("Luxi Mono", 10);
    fontBold = QFont("Luxi Mono", 10, QFont::Bold);
    fontItalic = QFont("Luxi Mono", 10, QFont::Normal, true);
    pblack = QPen(Qt::black);
    page_width = 744.09448;
    page_height = 1052.36218;
    page_margin = 21.260;
    line_start = page_margin;
    line_end = page_width - page_margin;
    
    cx = page_margin;
    cy = page_margin;
    
    QGraphicsScene *scene = new QGraphicsScene(this);
    scene->setSceneRect(0, 0, page_width, page_height);
    this->drawHeader(scene, "DarkSP");
    
    widget.gv->setScene(scene);
}

void Print::addText(QGraphicsScene* scene, qreal x, qreal y, QString text) {
    QGraphicsTextItem *gtext = scene->addText(text.toUpper(), font);
    gtext->setY(y);
    gtext->setX(x);
}

void Print::drawText(QGraphicsScene* scene, qreal x, qreal y, QString text) {
    QGraphicsTextItem *gtext = scene->addText(text.toUpper(), font);
    gtext->setY(y);
    gtext->setX(x);
    qreal line_height = gtext->boundingRect().height();
    cy += text.indexOf("\n") == -1 ? (line_height / 1.5) : (((line_height / 2) / 1.3) * 2);
}

void Print::drawTextBold(QGraphicsScene* scene, qreal x, qreal y, QString text) {
    QGraphicsTextItem *gtext = scene->addText(text.toUpper(), fontBold);
    gtext->setY(y);
    gtext->setX(x);
    qreal line_height = gtext->boundingRect().height();
    cy += text.indexOf("\n") == -1 ? (line_height / 1.5) : (((line_height / 2) / 1.3) * 2);
}

void Print::drawTextItalic(QGraphicsScene* scene, qreal x, qreal y, QString text) {
    QGraphicsTextItem *gtext = scene->addText(text.toUpper(), fontItalic);
    gtext->setY(y);
    gtext->setX(x);
    qreal line_height = gtext->boundingRect().height();
    cy += text.indexOf("\n") == -1 ? (line_height / 1.5) : (((line_height / 2) / 1.3) * 2);
}

void Print::drawTextForm(QGraphicsScene* scene, qreal x, qreal y, QString c1, QString c2)
{
    QGraphicsTextItem *g1 = scene->addText(c1.toUpper(), fontBold);
    g1->setX(x);
    g1->setY(y);
    x+= g1->boundingRect().width();
    QGraphicsTextItem *g2 = scene->addText(c2.toUpper(), font);
    g2->setX(x);
    g2->setY(y);
    qreal line_height = g2->boundingRect().height();
    cy += c2.indexOf("\n") == -1 ? (line_height / 1.5) : (((line_height / 2) / 1.3) * 2);
}

void Print::drawTextRight(QGraphicsScene* scene, qreal y, QString text, QFont font, bool uppery=false) {
    QGraphicsTextItem *g = scene->addText(text.toUpper(), font);
    qreal x = page_width - page_margin - g->boundingRect().width();
    g->setY(y);
    g->setX(x);
    if (uppery) {
        qreal line_height = g->boundingRect().height();
        cy += text.indexOf("\n") == -1 ? (line_height / 1.5) : (((line_height / 2) / 1.3) * 2);
    }
}

void Print::drawHeader(QGraphicsScene* scene, QString business) {
    
    QString sql = db->getSql("header from business");
    QSqlQuery query(db->getConnection());
    query.prepare(sql);
    query.bindValue(0, business);
    if (query.exec()) {
        if (query.next()) {
            if (QFile(query.value(4).toString()).exists()) {
                this->drawBackground(scene, query.value(4).toString());
            }
            // Borda
            qreal rctw = page_width - (page_margin * 2);
            qreal rcth = page_height - (page_margin * 3);
            scene->addRect(cx, cy, rctw, rcth, pblack);

            // Cabeça
            this->drawTextRight(scene, cy, "Recibo Nº: 001", fontBold);
            this->drawTextBold(scene, cx, cy, "Pagina 1/1");
            cy += 10;

            // Linha
            scene->addLine(line_start, cy, line_end, cy, pblack);
            
            // Dados da empresa
            this->drawBusiness(scene, query, business);
            cy += 10;
            
            // Linha
            scene->addLine(line_start, cy, line_end, cy, pblack);
            
            // Data
            QDateTime now = QDateTime::currentDateTime();
            this->drawTextRight(scene, cy, QString("Data: ").append(now.toString("dd/MM/yyyy")), fontBold, true);
            cy += 10;
            
            // Linha
            scene->addLine(line_start, cy, line_end, cy, pblack);
            
            this->drawCliente(scene, "Percapi");
            
        }
    }
}

QStringList Print::getPhones(QString business) {
    QStringList list;
    QString sql = db->getSql("header phone from business");
    QSqlQuery query(db->getConnection());
    query.prepare(sql);
    query.bindValue(0, business);
    if (query.exec()) {
        while (query.next()) {
            list.append(query.value(0).toString());
        }
    }
    return list;
}

void Print::drawBusiness(QGraphicsScene* scene, QSqlQuery query, QString business) {
    QStringList list;
    qreal bkp_x = cx;
    
    list << "Razão Social:" << "CNPJ:" << "Endereço:";
    if (QFile(query.value(3).toString()).exists()) {
        drawLogo(scene, query.value(3).toString());
    }
    for (int i=0; i<list.size(); i++) {
        drawTextForm(scene, cx, cy, list.value(i), query.value(i).toString());
    }
    drawTextForm(scene, cx, cy, "Telefone:", getPhones(business).join(" / "));
    cx = bkp_x;
}

void Print::drawLogo(QGraphicsScene* scene, QString filename) {
    QPixmap pix(filename);
    QGraphicsPixmapItem *g = scene->addPixmap(pix);
    g->setX(cx);
    g->setY(cy);
    cx += pix.width() + 10;
}

void Print::drawBackground(QGraphicsScene* scene, QString filename) {
    QPixmap input(filename);
    QImage img(input.size(), QImage::Format_ARGB32_Premultiplied);
    img.fill(Qt::transparent);
    QPainter painter(&img);
    painter.setOpacity(0.09);
    painter.drawPixmap(0, 0, input);
    painter.end();
    QGraphicsPixmapItem *g = scene->addPixmap(QPixmap::fromImage(img));
    
    qreal x = (page_width - input.width()) / 2;
    qreal y = (page_height - input.height()) / 2;
    
    g->setY(y);
    g->setX(x);
}

void Print::drawCliente(QGraphicsScene* scene, QString cliente) {
    QString sql = db->getSql("header from cliente");
    QSqlQuery query(db->getConnection());
    query.prepare(sql);
    query.bindValue(0, cliente);
    if (query.exec()) {
        if (query.next()) {
            QStringList list;
            list << "Nome/Razão Social:" << "CNPJ/CPF:" << "Endereço:";
            for (int i=0; i<list.size(); i++) {
                this->drawTextForm(scene, cx, cy, list.value(i), query.value(i).toString());
            }
            this->drawTextForm(scene, cx, cy, "Telefone:", getClientePhones(cliente).join("/"));
            cy += 10;
            scene->addLine(line_start, cy, line_end, cy, pblack);
        }
    }
}

QStringList Print::getClientePhones(QString cliente) {
    QStringList list;
    QString sql = db->getSql("header phone from cliente");
    QSqlQuery query(db->getConnection());
    query.prepare(sql);
    query.bindValue(0, cliente);
    if (query.exec()) {
        while (query.next()) {
            list.append(query.value(0).toString());
        }
    }
    return list;
}

Print::~Print() {
}
