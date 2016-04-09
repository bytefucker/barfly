/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing/
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "form.h"

double absAlco(double, int);

//! [0]
qtForm::qtForm(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}

//! count absolute alcohol in blood
double absAlco(double strong, int beers){
    return (strong * beers) / 100;
}

//! [0]

//! [1] weight
void qtForm::on_inputSpinBox1_valueChanged(int value)
{
    int aA = absAlco(ui.inputSpinBox3->value(), ui.inputSpinBox3->value());
    double promille = (aA * 0.8) / (value * 0.70);
    ui.outputWidget->setText(QString::number(promille));
}
//! [1]

//! [2] beers
void qtForm::on_inputSpinBox2_valueChanged(int value)
{
    int aA = absAlco(ui.inputSpinBox3->value(), value);
    double promille = (aA * 0.8) / (ui.inputSpinBox1->value() * 0.70);
    ui.outputWidget->setText(QString::number(promille));
}
//! [2]

//! [3] strong
void qtForm::on_inputSpinBox3_valueChanged(double value)
{
    int aA = absAlco(value, ui.inputSpinBox2->value());
    double promille = (aA * 0.8) / (ui.inputSpinBox1->value() * 0.70);
    ui.outputWidget->setText(QString::number(promille));
}
//! [3]

