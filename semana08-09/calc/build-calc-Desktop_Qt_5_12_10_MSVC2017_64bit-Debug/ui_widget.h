/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
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
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QDoubleSpinBox *n2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QDoubleSpinBox *n1;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *soma;
    QPushButton *subtrai;
    QPushButton *multiplica;
    QPushButton *divide;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(321, 388);
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 280, 81, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        resultado = new QLabel(Widget);
        resultado->setObjectName(QString::fromUtf8("resultado"));
        resultado->setGeometry(QRect(60, 300, 201, 41));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        resultado->setFont(font1);
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 10, 281, 71));
        QFont font2;
        font2.setPointSize(20);
        label_4->setFont(font2);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 220, 201, 47));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        n2 = new QDoubleSpinBox(widget);
        n2->setObjectName(QString::fromUtf8("n2"));
        n2->setMinimum(-9999999999.000000000000000);
        n2->setMaximum(9999999999.000000000000000);

        verticalLayout->addWidget(n2);

        widget1 = new QWidget(Widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(60, 100, 201, 47));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        n1 = new QDoubleSpinBox(widget1);
        n1->setObjectName(QString::fromUtf8("n1"));
        n1->setMinimum(-9999999999.000000000000000);
        n1->setMaximum(9999999999.000000000000000);

        verticalLayout_2->addWidget(n1);

        widget2 = new QWidget(Widget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(60, 170, 201, 30));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        soma = new QPushButton(widget2);
        soma->setObjectName(QString::fromUtf8("soma"));

        horizontalLayout_2->addWidget(soma);

        subtrai = new QPushButton(widget2);
        subtrai->setObjectName(QString::fromUtf8("subtrai"));

        horizontalLayout_2->addWidget(subtrai);

        multiplica = new QPushButton(widget2);
        multiplica->setObjectName(QString::fromUtf8("multiplica"));

        horizontalLayout_2->addWidget(multiplica);

        divide = new QPushButton(widget2);
        divide->setObjectName(QString::fromUtf8("divide"));

        horizontalLayout_2->addWidget(divide);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label_3->setText(QApplication::translate("Widget", "RESULTADO", nullptr));
        resultado->setText(QApplication::translate("Widget", "XXXX", nullptr));
        label_4->setText(QApplication::translate("Widget", "CALCULADORA", nullptr));
        label_2->setText(QApplication::translate("Widget", "NUM2", nullptr));
        label->setText(QApplication::translate("Widget", "NUM1", nullptr));
        soma->setText(QApplication::translate("Widget", "+", nullptr));
        subtrai->setText(QApplication::translate("Widget", "-", nullptr));
        multiplica->setText(QApplication::translate("Widget", "*", nullptr));
        divide->setText(QApplication::translate("Widget", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
