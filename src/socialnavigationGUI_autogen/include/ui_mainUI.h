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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *newFreePointButton;
    QPushButton *saveToFileButton;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *x_spinbox;
    QLabel *label_2;
    QSpinBox *z_spinbox;
    QPushButton *send_button;
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
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *timeoutPeriod;
    QLabel *timeoutLabel;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *guiDlg)
    {
        if (guiDlg->objectName().isEmpty())
            guiDlg->setObjectName(QStringLiteral("guiDlg"));
        guiDlg->resize(910, 285);
        gridLayout = new QGridLayout(guiDlg);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox_3 = new QGroupBox(guiDlg);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        layoutWidget = new QWidget(groupBox_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 32, 119, 58));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        newFreePointButton = new QPushButton(layoutWidget);
        newFreePointButton->setObjectName(QStringLiteral("newFreePointButton"));

        verticalLayout_2->addWidget(newFreePointButton);

        saveToFileButton = new QPushButton(layoutWidget);
        saveToFileButton->setObjectName(QStringLiteral("saveToFileButton"));

        verticalLayout_2->addWidget(saveToFileButton);


        gridLayout->addWidget(groupBox_3, 2, 1, 1, 1);

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

        x_spinbox = new QSpinBox(groupBox);
        x_spinbox->setObjectName(QStringLiteral("x_spinbox"));
        x_spinbox->setMaximumSize(QSize(150, 16777215));
        x_spinbox->setMinimum(-10000);
        x_spinbox->setMaximum(10000);

        formLayout->setWidget(0, QFormLayout::FieldRole, x_spinbox);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

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


        gridLayout->addWidget(groupBox, 0, 1, 2, 1);

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


        gridLayout->addWidget(groupBox_2, 0, 3, 1, 1);

        line = new QFrame(guiDlg);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 2, 1, 1);

        groupBox_4 = new QGroupBox(guiDlg);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        layoutWidget1 = new QWidget(groupBox_4);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(12, 32, 495, 55));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        timeoutPeriod = new QDoubleSpinBox(layoutWidget1);
        timeoutPeriod->setObjectName(QStringLiteral("timeoutPeriod"));
        timeoutPeriod->setValue(5);

        horizontalLayout_2->addWidget(timeoutPeriod);


        verticalLayout->addLayout(horizontalLayout_2);

        timeoutLabel = new QLabel(layoutWidget1);
        timeoutLabel->setObjectName(QStringLiteral("timeoutLabel"));
        timeoutLabel->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(timeoutLabel);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        gridLayout->addWidget(groupBox_4, 2, 3, 1, 1);


        retranslateUi(guiDlg);

        QMetaObject::connectSlotsByName(guiDlg);
    } // setupUi

    void retranslateUi(QWidget *guiDlg)
    {
        guiDlg->setWindowTitle(QApplication::translate("guiDlg", "navigationComp", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("guiDlg", "New Free Point", Q_NULLPTR));
        newFreePointButton->setText(QApplication::translate("guiDlg", "Get New Point", Q_NULLPTR));
        saveToFileButton->setText(QApplication::translate("guiDlg", "SaveToFile", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("guiDlg", "Send to", Q_NULLPTR));
        label->setText(QApplication::translate("guiDlg", "x       ", Q_NULLPTR));
        label_2->setText(QApplication::translate("guiDlg", " z       ", Q_NULLPTR));
        send_button->setText(QApplication::translate("guiDlg", "send", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("guiDlg", "Robot", Q_NULLPTR));
        robotMov_checkbox->setText(QApplication::translate("guiDlg", "Move Robot", Q_NULLPTR));
        autoMov_checkbox->setText(QApplication::translate("guiDlg", "Auto movement", Q_NULLPTR));
        label_5->setText(QApplication::translate("guiDlg", "Internal forces", Q_NULLPTR));
        label_4->setText(QApplication::translate("guiDlg", "External forces", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("guiDlg", "Timeout Detector", Q_NULLPTR));
        label_3->setText(QApplication::translate("guiDlg", "Timeout Period (sec)", Q_NULLPTR));
        timeoutLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class guiDlg: public Ui_guiDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINUI_H
