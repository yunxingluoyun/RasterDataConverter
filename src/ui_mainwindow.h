/********************************************************************************
** Form generated from reading UI file '����դ������ת����oCwkPj.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef _6279__91CF__6805__683C__6570__636E__8F6C__6362__5668_OCWKPJ_H
#define _6279__91CF__6805__683C__6570__636E__8F6C__6362__5668_OCWKPJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *dataFormat_comboBox;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *dataType_comboBox;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *output_pushButton;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *input_pushButton;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(425, 294);
        Dialog->setMinimumSize(QSize(425, 294));
        Dialog->setMaximumSize(QSize(425, 16777215));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 260, 361, 16));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 220, 93, 28));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 220, 93, 28));
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 140, 176, 23));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        dataFormat_comboBox = new QComboBox(layoutWidget);
        dataFormat_comboBox->addItem(QString());
        dataFormat_comboBox->addItem(QString());
        dataFormat_comboBox->addItem(QString());
        dataFormat_comboBox->addItem(QString());
        dataFormat_comboBox->addItem(QString());
        dataFormat_comboBox->addItem(QString());
        dataFormat_comboBox->setObjectName(QString::fromUtf8("dataFormat_comboBox"));

        horizontalLayout_3->addWidget(dataFormat_comboBox);

        layoutWidget1 = new QWidget(Dialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 90, 201, 23));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        dataType_comboBox = new QComboBox(layoutWidget1);
        dataType_comboBox->addItem(QString());
        dataType_comboBox->addItem(QString());
        dataType_comboBox->addItem(QString());
        dataType_comboBox->addItem(QString());
        dataType_comboBox->addItem(QString());
        dataType_comboBox->addItem(QString());
        dataType_comboBox->addItem(QString());
        dataType_comboBox->setObjectName(QString::fromUtf8("dataType_comboBox"));

        horizontalLayout_2->addWidget(dataType_comboBox);

        layoutWidget2 = new QWidget(Dialog);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 180, 370, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        output_pushButton = new QPushButton(layoutWidget2);
        output_pushButton->setObjectName(QString::fromUtf8("output_pushButton"));

        horizontalLayout->addWidget(output_pushButton);

        layoutWidget3 = new QWidget(Dialog);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(40, 40, 370, 30));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_4->addWidget(lineEdit);

        input_pushButton = new QPushButton(layoutWidget3);
        input_pushButton->setObjectName(QString::fromUtf8("input_pushButton"));

        horizontalLayout_4->addWidget(input_pushButton);

        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(100, 10, 241, 16));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(290, 70, 111, 101));
        label_7->setPixmap(QPixmap(QString::fromUtf8("images/wechat.png")));

        retranslateUi(Dialog);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "\346\211\271\351\207\217\346\240\205\346\240\274\346\225\260\346\215\256\350\275\254\346\215\242\345\231\250", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "\345\210\266\344\275\234\350\200\205\357\274\232\351\231\250\346\230\237\350\220\275\344\272\221   \350\201\224\347\263\273\351\202\256\347\256\261\357\274\232672319707@qq.com", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "\345\217\226\346\266\210", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "\350\276\223\345\207\272\346\225\260\346\215\256\346\240\274\345\274\217\357\274\232", nullptr));
        dataFormat_comboBox->setItemText(0, QCoreApplication::translate("Dialog", ".tif", nullptr));
        dataFormat_comboBox->setItemText(1, QCoreApplication::translate("Dialog", ".bil", nullptr));
        dataFormat_comboBox->setItemText(2, QCoreApplication::translate("Dialog", ".img", nullptr));
        dataFormat_comboBox->setItemText(3, QCoreApplication::translate("Dialog", ".png", nullptr));
        dataFormat_comboBox->setItemText(4, QCoreApplication::translate("Dialog", ".ntf", nullptr));
        dataFormat_comboBox->setItemText(5, QCoreApplication::translate("Dialog", ".pix", nullptr));

        label_3->setText(QCoreApplication::translate("Dialog", "\350\276\223\345\207\272\346\225\260\346\215\256\347\261\273\345\236\213\357\274\232", nullptr));
        dataType_comboBox->setItemText(0, QCoreApplication::translate("Dialog", "UInt16", nullptr));
        dataType_comboBox->setItemText(1, QCoreApplication::translate("Dialog", "Byte", nullptr));
        dataType_comboBox->setItemText(2, QCoreApplication::translate("Dialog", "Int16", nullptr));
        dataType_comboBox->setItemText(3, QCoreApplication::translate("Dialog", "UInt32", nullptr));
        dataType_comboBox->setItemText(4, QCoreApplication::translate("Dialog", "Int32", nullptr));
        dataType_comboBox->setItemText(5, QCoreApplication::translate("Dialog", "Float32", nullptr));
        dataType_comboBox->setItemText(6, QCoreApplication::translate("Dialog", "FLoat64", nullptr));

        label_2->setText(QCoreApplication::translate("Dialog", "\350\276\223\345\207\272\346\226\207\344\273\266\345\244\271\357\274\232", nullptr));
        output_pushButton->setText(QCoreApplication::translate("Dialog", "...", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\350\276\223\345\205\245\346\226\207\344\273\266\357\274\232", nullptr));
        input_pushButton->setText(QCoreApplication::translate("Dialog", "...", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "\346\254\242\350\277\216\345\205\263\346\263\250\345\205\254\344\274\227\345\217\267\357\274\232\346\265\213\347\273\230\346\225\260\346\215\256\345\210\206\346\236\220", nullptr));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // _6279__91CF__6805__683C__6570__636E__8F6C__6362__5668_OCWKPJ_H
