#include "mainwindow.h"

void MainWindow::Test_2(){
    if(child_test_1->isVisible()){
        child_test_1->hide();
    }
    // Check answers from previous page //
    result=0;
    QString cb = cobm_1->currentText();
    if(cb=="в"){
      result=result+1;
      result_num.append(true);
    }
    if(cb!="в"){
     result_num.append(false);
    }
    cb.clear();
    cb = cobm_2->currentText();
    if(cb=="б"){
      result=result+1;
      result_num.append(true);
    }
    if(cb!="б"){
     result_num.append(false);
    }
    cb.clear();
    cb = cobm_3->currentText();
    if(cb=="в"){
      result=result+1;
      result_num.append(true);
    }
    if(cb!="в"){
     result_num.append(false);
    }
    cb.clear();
    cb = cobm_4->currentText();
    if(cb=="б"){
      result=result+1;
      result_num.append(true);
    }
    if(cb!="б"){
     result_num.append(false);
    }
    cb.clear();
    cb = cobm_5->currentText();
    if(cb=="в"){
      result=result+1;
      result_num.append(true);
    }
    if(cb!="в"){
     result_num.append(false);
    }
    ///////////////////////////////
    // Test page 2 //
    question_6 = new QLabel();
    QString path_l_6 = QCoreApplication::applicationDirPath();
    path_l_6.append("/resourses_test/6.png");
    QPixmap pixmap6(path_l_6);
    question_6->setPixmap(pixmap6);
    //
    question_7 = new QLabel();
    QString path_l_7 = QCoreApplication::applicationDirPath();
    path_l_7.append("/resourses_test/7.png");
    QPixmap pixmap7(path_l_7);
    question_7->setPixmap(pixmap7);
    //
    question_8 = new QLabel();
    QString path_l_8 = QCoreApplication::applicationDirPath();
    path_l_8.append("/resourses_test/8.png");
    QPixmap pixmap8(path_l_8);
    question_8->setPixmap(pixmap8);
    //
    question_9 = new QLabel();
    QString path_l_9 = QCoreApplication::applicationDirPath();
    path_l_9.append("/resourses_test/9.png");
    QPixmap pixmap9(path_l_9);
    question_9->setPixmap(pixmap9);
    //
    question_10 = new QLabel();
    QString path_l_10 = QCoreApplication::applicationDirPath();
    path_l_10.append("/resourses_test/10.png");
    QPixmap pixmap10(path_l_10);
    question_10->setPixmap(pixmap10);
    //
    cobm_6 = new QComboBox;
    cobm_7 = new QComboBox;
    cobm_8 = new QComboBox;
    cobm_9 = new QComboBox;
    cobm_10 = new QComboBox;
    //
    cobm_6->addItems(QStringList() <<"а"<<"б"<<"в"<<"г");
    //
    cobm_7->addItems(QStringList() <<"а"<<"б"<<"в"<<"г");
    //
    cobm_8->addItems(QStringList() <<"а"<<"б"<<"в");
    //
    cobm_9->addItems(QStringList() <<"а"<<"б"<<"в"<<"г");
    //
    cobm_10->addItems(QStringList() <<"а"<<"б"<<"в");
    //
    //
    test_grid_2 = new QGridLayout;
    test_grid_2->addWidget(question_6,0,0);
    test_grid_2->addWidget(cobm_6,0,1);
    test_grid_2->addWidget(question_7,1,0);
    test_grid_2->addWidget(cobm_7,1,1);
    test_grid_2->addWidget(question_8,2,0);
    test_grid_2->addWidget(cobm_8,2,1);
    test_grid_2->addWidget(question_9,3,0);
    test_grid_2->addWidget(cobm_9,3,1);
    test_grid_2->addWidget(question_10,4,0);
    test_grid_2->addWidget(cobm_10,4,1);

    check_2 = new QPushButton("Далее");
    test_grid_2->addWidget(check_2,5,1);
    //
    child_test_2->setWindowTitle("Тестирование - ООП: классы и объекты (10 из 18)");
    //
    child_test_2->setLayout(test_grid_2);
    child_test_2->show();
    connect(check_2, SIGNAL(clicked()), this, SLOT(Test_3()));
}

