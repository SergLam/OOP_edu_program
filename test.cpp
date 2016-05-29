#include "mainwindow.h"

void MainWindow::Test(){
    if(button_education->isEnabled()){
        button_education->setDisabled(true);
        button_test->setDisabled(true);

    }
    if(!button_education->isEnabled()){
        button_test->setDisabled(true);
    }
    if(child->isEnabled()){
        child->close();
    }
    //
    // Timer
    timer_test = new QTimer();
    time_test_start = QTime::currentTime().toString("hh:mm:ss");
    connect(timer_test, SIGNAL(timeout()), this, SLOT(slotTimerAlarm_test()));
    timer_test->start(1000); // È çàïóñòèì òàéìåð
    //
    // Test page 1 //
    question_1 = new QLabel();
    QString path_l_1 = QCoreApplication::applicationDirPath();
    path_l_1.append("/resourses_test/1.png");
    QPixmap pixmap1(path_l_1);
    question_1->setPixmap(pixmap1);
    //
    question_2 = new QLabel();
    QString path_l_2 = QCoreApplication::applicationDirPath();
    path_l_2.append("/resourses_test/2.png");
    QPixmap pixmap2(path_l_2);
    question_2->setPixmap(pixmap2);
    //
    question_3 = new QLabel();
    QString path_l_3 = QCoreApplication::applicationDirPath();
    path_l_3.append("/resourses_test/3.png");
    QPixmap pixmap3(path_l_3);
    question_3->setPixmap(pixmap3);
    //
    question_4 = new QLabel();
    QString path_l_4 = QCoreApplication::applicationDirPath();
    path_l_4.append("/resourses_test/4.png");
    QPixmap pixmap4(path_l_4);
    question_4->setPixmap(pixmap4);
    //
    question_5 = new QLabel();
    QString path_l_5 = QCoreApplication::applicationDirPath();
    path_l_5.append("/resourses_test/5.png");
    QPixmap pixmap5(path_l_5);
    question_5->setPixmap(pixmap5);
    //
    //
    cobm_1 = new QComboBox;
    cobm_2 = new QComboBox;
    cobm_3 = new QComboBox;
    cobm_4 = new QComboBox;
    cobm_5 = new QComboBox;
    //
    cobm_1->addItems(QStringList() <<"а"<<"б"<<"в"<<"г");
    //
    cobm_2->addItems(QStringList() <<"а"<<"б"<<"в");
    //
    cobm_3->addItems(QStringList() <<"а"<<"б"<<"в"<<"г");
    //
    cobm_4->addItems(QStringList() <<"а"<<"б"<<"в");
    //
    cobm_5->addItems(QStringList() <<"а"<<"б"<<"в");
    //
    //
    test_grid_1 = new QGridLayout;
    // Add combo-boxes to layout
    test_grid_1->addWidget(question_1,0,0);
    test_grid_1->addWidget(question_2,1,0);
    test_grid_1->addWidget(question_3,2,0);
    test_grid_1->addWidget(question_4,3,0);
    test_grid_1->addWidget(question_5,4,0);
    test_grid_1->addWidget(cobm_1,0,1);
    test_grid_1->addWidget(cobm_2,1,1);
    test_grid_1->addWidget(cobm_3,2,1);
    test_grid_1->addWidget(cobm_4,3,1);
    test_grid_1->addWidget(cobm_5,4,1);


    //
    check_1 = new QPushButton("Далее");
    test_grid_1->addWidget(check_1,5,1);
    //
    child_test_1->setWindowTitle("Тестирование - ООП: классы и объекты (5 из 18)");
    //
    child_test_1->setLayout(test_grid_1);
    child_test_1->show();
    connect(check_1, SIGNAL(clicked()), this, SLOT(Test_2()));
}

void MainWindow::slotTimerAlarm_test(){
    time_test_current = QTime::currentTime().toString("hh:mm:ss");
}
