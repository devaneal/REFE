/********************************************************************************
** Form generated from reading UI file 'DialogReferences.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGREFERENCES_H
#define UI_DIALOGREFERENCES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

namespace References {

class Ui_DialogReferences
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QLineEdit *txtAddress;
    QLabel *label_2;
    QListWidget *listWidget;
    QCheckBox *chkSkipNoAccess;
    QHBoxLayout *hboxLayout;
    QPushButton *btnClose;
    QPushButton *btnHelp;
    QSpacerItem *spacerItem;
    QPushButton *btnFind;
    QProgressBar *progressBar;

    void setupUi(QDialog *DialogReferences)
    {
        if (DialogReferences->objectName().isEmpty())
            DialogReferences->setObjectName(QString::fromUtf8("DialogReferences"));
        DialogReferences->resize(281, 305);
        vboxLayout = new QVBoxLayout(DialogReferences);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        label = new QLabel(DialogReferences);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout->addWidget(label);

        txtAddress = new QLineEdit(DialogReferences);
        txtAddress->setObjectName(QString::fromUtf8("txtAddress"));

        vboxLayout->addWidget(txtAddress);

        label_2 = new QLabel(DialogReferences);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        vboxLayout->addWidget(label_2);

        listWidget = new QListWidget(DialogReferences);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        listWidget->setFont(font);
        listWidget->setAlternatingRowColors(true);

        vboxLayout->addWidget(listWidget);

        chkSkipNoAccess = new QCheckBox(DialogReferences);
        chkSkipNoAccess->setObjectName(QString::fromUtf8("chkSkipNoAccess"));

        vboxLayout->addWidget(chkSkipNoAccess);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        btnClose = new QPushButton(DialogReferences);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("dialog-close")));
        btnClose->setIcon(icon);

        hboxLayout->addWidget(btnClose);

        btnHelp = new QPushButton(DialogReferences);
        btnHelp->setObjectName(QString::fromUtf8("btnHelp"));
        btnHelp->setEnabled(false);
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("help-browser")));
        btnHelp->setIcon(icon1);

        hboxLayout->addWidget(btnHelp);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnFind = new QPushButton(DialogReferences);
        btnFind->setObjectName(QString::fromUtf8("btnFind"));
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("edit-find")));
        btnFind->setIcon(icon2);
        btnFind->setDefault(true);

        hboxLayout->addWidget(btnFind);


        vboxLayout->addLayout(hboxLayout);

        progressBar = new QProgressBar(DialogReferences);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);
        progressBar->setOrientation(Qt::Horizontal);

        vboxLayout->addWidget(progressBar);

        QWidget::setTabOrder(txtAddress, listWidget);
        QWidget::setTabOrder(listWidget, chkSkipNoAccess);
        QWidget::setTabOrder(chkSkipNoAccess, btnClose);
        QWidget::setTabOrder(btnClose, btnHelp);
        QWidget::setTabOrder(btnHelp, btnFind);

        retranslateUi(DialogReferences);
        QObject::connect(btnClose, SIGNAL(clicked()), DialogReferences, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogReferences);
    } // setupUi

    void retranslateUi(QDialog *DialogReferences)
    {
        DialogReferences->setWindowTitle(QApplication::translate("References::DialogReferences", "References Search", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("References::DialogReferences", "Find References To This Address:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("References::DialogReferences", "Results:", 0, QApplication::UnicodeUTF8));
        chkSkipNoAccess->setText(QApplication::translate("References::DialogReferences", "Skip Regions With No Access Rights", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("References::DialogReferences", "&Close", 0, QApplication::UnicodeUTF8));
        btnHelp->setText(QApplication::translate("References::DialogReferences", "&Help", 0, QApplication::UnicodeUTF8));
        btnFind->setText(QApplication::translate("References::DialogReferences", "&Find", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace References

namespace References {
namespace Ui {
    class DialogReferences: public Ui_DialogReferences {};
} // namespace Ui
} // namespace References

#endif // UI_DIALOGREFERENCES_H
