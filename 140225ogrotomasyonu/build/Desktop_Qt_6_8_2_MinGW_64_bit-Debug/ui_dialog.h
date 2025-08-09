/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QPushButton *btn_hesapla;
    QPushButton *btn_temizle;
    QTextBrowser *textBrowser;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *ln_ad;
    QLineEdit *ln_dersad;
    QLineEdit *ln_vizenot;
    QLineEdit *ln_finalnot;
    QPushButton *btn_kapat;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(410, 409);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 30, 321, 311));
        QFont font;
        font.setBold(false);
        groupBox->setFont(font);
        btn_hesapla = new QPushButton(groupBox);
        btn_hesapla->setObjectName("btn_hesapla");
        btn_hesapla->setGeometry(QRect(30, 200, 83, 29));
        btn_temizle = new QPushButton(groupBox);
        btn_temizle->setObjectName("btn_temizle");
        btn_temizle->setGeometry(QRect(170, 200, 83, 29));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(20, 250, 241, 51));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 40, 80, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(130, 40, 127, 151));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        ln_ad = new QLineEdit(widget1);
        ln_ad->setObjectName("ln_ad");

        verticalLayout_2->addWidget(ln_ad);

        ln_dersad = new QLineEdit(widget1);
        ln_dersad->setObjectName("ln_dersad");

        verticalLayout_2->addWidget(ln_dersad);

        ln_vizenot = new QLineEdit(widget1);
        ln_vizenot->setObjectName("ln_vizenot");

        verticalLayout_2->addWidget(ln_vizenot);

        ln_finalnot = new QLineEdit(widget1);
        ln_finalnot->setObjectName("ln_finalnot");

        verticalLayout_2->addWidget(ln_finalnot);

        btn_kapat = new QPushButton(Dialog);
        btn_kapat->setObjectName("btn_kapat");
        btn_kapat->setGeometry(QRect(270, 360, 83, 29));

        retranslateUi(Dialog);
        QObject::connect(btn_kapat, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "Not hesaplama otomasyonu", nullptr));
        btn_hesapla->setText(QCoreApplication::translate("Dialog", "HESAPLA", nullptr));
        btn_temizle->setText(QCoreApplication::translate("Dialog", "TEM\304\260ZLE", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\303\226\304\237renci Ad:", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Ders Ad:", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Vize Not:", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Final Not", nullptr));
        btn_kapat->setText(QCoreApplication::translate("Dialog", "KAPAT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
