#include <QApplication>
#include <QPushButton>


/********************************************************************************
** Form generated from reading UI file 'controlfgYUMW.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CONTROLFGYUMW_H
#define CONTROLFGYUMW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class ControlMainWindow : public QMainWindow {
Q_OBJECT
public:
    QLabel *label;
    int channel;
    int volume;

    ControlMainWindow(QWidget *inParent = nullptr) : QMainWindow(inParent), channel(0), volume(50) {}

public slots:

    void showLabel() {
        QString channelStr;
        channelStr.setNum(channel);

        QString volumeStr;
        volumeStr.setNum(volume);

        label->setText("ch:" + channelStr + "  vol:" + volumeStr);
    };

    void setChannel(int ch) {
        if (ch > 9) {
            ch = 0;
        } else if (ch < 0) {
            ch = 9;
        }
        channel = ch;
        showLabel();
    };

    void setVolume(int vol) {
        if ((vol >= 0) && (vol <= 100)) {
            volume = vol;
            showLabel();
        }
    };

    void ch0() { setChannel(0); };

    void ch1() { setChannel(1); };

    void ch2() { setChannel(2); };

    void ch3() { setChannel(3); };

    void ch4() { setChannel(4); };

    void ch5() { setChannel(5); };

    void ch6() { setChannel(6); };

    void ch7() { setChannel(7); };

    void ch8() { setChannel(8); };

    void ch9() { setChannel(9); };

    void chNext() { setChannel(channel + 1); }

    void chPrev() { setChannel(channel - 1); }

    void volH() { setVolume(volume + 10); }

    void volL() { setVolume(volume - 10); }

};


class Ui_MainWindow {
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_11;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_9;
    QPushButton *pushButton_13;
    QPushButton *pushButton_10;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QPushButton *pushButton_14;
    QPushButton *pushButton_12;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow) {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(405, 411);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        pushButton_2->setFont(font);

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFont(font);

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setFont(font);

        gridLayout->addWidget(pushButton_7, 1, 1, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setFont(font);

        gridLayout->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);
        pushButton_11->setFont(font);

        gridLayout->addWidget(pushButton_11, 5, 0, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setFont(font);

        gridLayout->addWidget(pushButton_6, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font);

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setFont(font);

        gridLayout->addWidget(pushButton_9, 3, 1, 1, 1);

        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        sizePolicy.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy);
        pushButton_13->setFont(font);

        gridLayout->addWidget(pushButton_13, 5, 1, 1, 1);

        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);
        pushButton_10->setFont(font);

        gridLayout->addWidget(pushButton_10, 4, 1, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setFont(font);

        gridLayout->addWidget(pushButton_5, 4, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        sizePolicy.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy);
        pushButton_14->setFont(font);

        gridLayout->addWidget(pushButton_14, 6, 1, 1, 1);

        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);
        pushButton_12->setFont(font);

        gridLayout->addWidget(pushButton_12, 6, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 7, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 405, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(ch0()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(ch1()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(ch2()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), MainWindow, SLOT(ch3()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), MainWindow, SLOT(ch4()));
        QObject::connect(pushButton_11, SIGNAL(clicked()), MainWindow, SLOT(chNext()));
        QObject::connect(pushButton_12, SIGNAL(clicked()), MainWindow, SLOT(chPrev()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), MainWindow, SLOT(ch5()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), MainWindow, SLOT(ch6()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), MainWindow, SLOT(ch7()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), MainWindow, SLOT(ch8()));
        QObject::connect(pushButton_10, SIGNAL(clicked()), MainWindow, SLOT(ch9()));
        QObject::connect(pushButton_13, SIGNAL(clicked()), MainWindow, SLOT(volH()));
        QObject::connect(pushButton_14, SIGNAL(clicked()), MainWindow, SLOT(volL()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow) {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "ch +", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "vol +", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "vol -", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "ch -", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow : public Ui_MainWindow {
    };
} // namespace Ui

QT_END_NAMESPACE

#endif // CONTROLFGYUMW_H


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    ControlMainWindow window(nullptr);
    Ui_MainWindow control;
    control.setupUi(&window);
    window.label = control.label;
    window.showLabel();
    window.resize(240, 680);
    window.show();
    return QApplication::exec();
}

#include "main.moc"