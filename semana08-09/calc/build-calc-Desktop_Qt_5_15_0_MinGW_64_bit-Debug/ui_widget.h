/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label_3;
    QLabel *resultado;
    QLabel *label_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QDoubleSpinBox *n1;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QPushButton *soma;
    QPushButton *subtrai;
    QPushButton *multiplica;
    QPushButton *divide;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QDoubleSpinBox *n2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(776, 385);
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 290, 151, 61));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        resultado = new QLabel(Widget);
        resultado->setObjectName(QString::fromUtf8("resultado"));
        resultado->setGeometry(QRect(320, 290, 571, 81));
        resultado->setFont(font);
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 10, 721, 31));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 140, 121, 47));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);

        verticalLayout_2->addWidget(label);

        n1 = new QDoubleSpinBox(widget);
        n1->setObjectName(QString::fromUtf8("n1"));
        n1->setMinimum(-1000000000.000000000000000);
        n1->setMaximum(1000000000.000000000000000);

        verticalLayout_2->addWidget(n1);

        widget1 = new QWidget(Widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(340, 100, 95, 135));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        soma = new QPushButton(widget1);
        soma->setObjectName(QString::fromUtf8("soma"));

        verticalLayout->addWidget(soma);

        subtrai = new QPushButton(widget1);
        subtrai->setObjectName(QString::fromUtf8("subtrai"));

        verticalLayout->addWidget(subtrai);

        multiplica = new QPushButton(widget1);
        multiplica->setObjectName(QString::fromUtf8("multiplica"));

        verticalLayout->addWidget(multiplica);

        divide = new QPushButton(widget1);
        divide->setObjectName(QString::fromUtf8("divide"));

        verticalLayout->addWidget(divide);

        widget2 = new QWidget(Widget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(560, 140, 121, 47));
        verticalLayout_3 = new QVBoxLayout(widget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);

        verticalLayout_3->addWidget(label_2);

        n2 = new QDoubleSpinBox(widget2);
        n2->setObjectName(QString::fromUtf8("n2"));
        n2->setMinimum(-1000000000.000000000000000);
        n2->setMaximum(1000000000.000000000000000);

        verticalLayout_3->addWidget(n2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "R=", nullptr));
        resultado->setText(QCoreApplication::translate("Widget", "XXXX", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "TULIO'S ADVANCED MASTER CALCULATOR", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Primeiro N\303\272mero", nullptr));
        soma->setText(QCoreApplication::translate("Widget", "+", nullptr));
        subtrai->setText(QCoreApplication::translate("Widget", "-", nullptr));
        multiplica->setText(QCoreApplication::translate("Widget", "*", nullptr));
        divide->setText(QCoreApplication::translate("Widget", "/", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Segundo N\303\272mero", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
