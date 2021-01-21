/********************************************************************************
** Form generated from reading UI file 'dialogcameras.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCAMERAS_H
#define UI_DIALOGCAMERAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_DialogCameras
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogCameras)
    {
        if (DialogCameras->objectName().isEmpty())
            DialogCameras->setObjectName(QString::fromUtf8("DialogCameras"));
        DialogCameras->resize(640, 480);
        buttonBox = new QDialogButtonBox(DialogCameras);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(550, 10, 81, 461));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(DialogCameras);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogCameras, &QDialog::accept);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogCameras, &QDialog::reject);

        QMetaObject::connectSlotsByName(DialogCameras);
    } // setupUi

    void retranslateUi(QDialog *DialogCameras)
    {
        DialogCameras->setWindowTitle(QCoreApplication::translate("DialogCameras", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogCameras: public Ui_DialogCameras {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCAMERAS_H
