/********************************************************************************
** Form generated from reading UI file 'mainUI.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINUI_H
#define UI_MAINUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_guiDlg
{
public:
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *x_spinbox;
    QSpinBox *z_spinbox;
    QPushButton *send_button;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_13;
    QCheckBox *robotMov_checkbox;
    QCheckBox *autoMov_checkbox;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QSlider *ki_slider;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QSlider *ke_slider;
    QFrame *line;

    void setupUi(QWidget *guiDlg)
    {
        if (guiDlg->objectName().isEmpty())
            guiDlg->setObjectName(QStringLiteral("guiDlg"));
        guiDlg->resize(822, 159);
        horizontalLayout_2 = new QHBoxLayout(guiDlg);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox = new QGroupBox(guiDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMaximumSize(QSize(200, 16777215));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignCenter);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        x_spinbox = new QSpinBox(groupBox);
        x_spinbox->setObjectName(QStringLiteral("x_spinbox"));
        x_spinbox->setMaximumSize(QSize(150, 16777215));
        x_spinbox->setMinimum(-10000);
        x_spinbox->setMaximum(10000);

        formLayout->setWidget(0, QFormLayout::FieldRole, x_spinbox);

        z_spinbox = new QSpinBox(groupBox);
        z_spinbox->setObjectName(QStringLiteral("z_spinbox"));
        z_spinbox->setMaximumSize(QSize(150, 16777215));
        z_spinbox->setMinimum(-10000);
        z_spinbox->setMaximum(10000);

        formLayout->setWidget(1, QFormLayout::FieldRole, z_spinbox);

        send_button = new QPushButton(groupBox);
        send_button->setObjectName(QStringLiteral("send_button"));
        send_button->setMaximumSize(QSize(100, 16777215));

        formLayout->setWidget(2, QFormLayout::FieldRole, send_button);


        horizontalLayout->addLayout(formLayout);


        horizontalLayout_2->addWidget(groupBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        groupBox_2 = new QGroupBox(guiDlg);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_2);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        robotMov_checkbox = new QCheckBox(groupBox_2);
        robotMov_checkbox->setObjectName(QStringLiteral("robotMov_checkbox"));
        robotMov_checkbox->setChecked(true);

        verticalLayout_13->addWidget(robotMov_checkbox);

        autoMov_checkbox = new QCheckBox(groupBox_2);
        autoMov_checkbox->setObjectName(QStringLiteral("autoMov_checkbox"));
        autoMov_checkbox->setChecked(false);

        verticalLayout_13->addWidget(autoMov_checkbox);


        horizontalLayout_6->addLayout(verticalLayout_13);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_9->addWidget(label_5);

        ki_slider = new QSlider(groupBox_2);
        ki_slider->setObjectName(QStringLiteral("ki_slider"));
        ki_slider->setMaximum(500);
        ki_slider->setValue(120);
        ki_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(ki_slider);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_8->addWidget(label_4);

        ke_slider = new QSlider(groupBox_2);
        ke_slider->setObjectName(QStringLiteral("ke_slider"));
        ke_slider->setMaximum(500);
        ke_slider->setValue(60);
        ke_slider->setSliderPosition(60);
        ke_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(ke_slider);


        verticalLayout_4->addLayout(horizontalLayout_8);


        horizontalLayout_6->addLayout(verticalLayout_4);


        horizontalLayout_2->addWidget(groupBox_2);

        line = new QFrame(guiDlg);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);


        retranslateUi(guiDlg);

        QMetaObject::connectSlotsByName(guiDlg);
    } // setupUi

    void retranslateUi(QWidget *guiDlg)
    {
        guiDlg->setWindowTitle(QApplication::translate("guiDlg", "navigationComp", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("guiDlg", "Send to", Q_NULLPTR));
        label->setText(QApplication::translate("guiDlg", "x       ", Q_NULLPTR));
        label_2->setText(QApplication::translate("guiDlg", " z       ", Q_NULLPTR));
        send_button->setText(QApplication::translate("guiDlg", "send", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("guiDlg", "Robot", Q_NULLPTR));
        robotMov_checkbox->setText(QApplication::translate("guiDlg", "Move Robot", Q_NULLPTR));
        autoMov_checkbox->setText(QApplication::translate("guiDlg", "Auto movement", Q_NULLPTR));
        label_5->setText(QApplication::translate("guiDlg", "Internal forces", Q_NULLPTR));
        label_4->setText(QApplication::translate("guiDlg", "External forces", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class guiDlg: public Ui_guiDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINUI_H
