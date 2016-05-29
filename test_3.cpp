#include "mainwindow.h"

void MainWindow::Test_3(){
    if(child_test_2->isVisible()){
        child_test_2->hide();
    }
    // Check answers from previous page //
    QString cb = cobm_6->currentText();
    if(cb=="б"){
      result=result+1;
      result_num.append(true);
    }
    if(cb!="б"){
     result_num.append(false);
    }
    cb.clear();
    cb = cobm_7->currentText();
    if(cb=="г"){
      result=result+1;
      result_num.append(true);
    }
    if(cb!="г"){
     result_num.append(false);
    }
    cb.clear();
    cb = cobm_8->currentText();
    if(cb=="а"){
      result=result+1;
      result_num.append(true);
    }
    if(cb!="а"){
     result_num.append(false);
    }
    cb.clear();
    cb = cobm_9->currentText();
    if(cb=="в"){
      result=result+1;
      result_num.append(true);
    }
    if(cb!="в"){
     result_num.append(false);
    }
    cb.clear();
    cb = cobm_10->currentText();
    if(cb=="б"){
      result=result+1;
      result_num.append(true);
    }
    if(cb!="б"){
     result_num.append(false);
    }
    //qDebug()<<result<<result_num;
    // Test page 3 //
    question_11 = new QLabel();
    QString path_l_11 = QCoreApplication::applicationDirPath();
    path_l_11.append("/resourses_test/11.png");
    QPixmap pixmap11(path_l_11);
    question_11->setPixmap(pixmap11);
    //
    question_12 = new QLabel();
    QString path_l_12 = QCoreApplication::applicationDirPath();
    path_l_12.append("/resourses_test/12.png");
    QPixmap pixmap12(path_l_12);
    question_12->setPixmap(pixmap12);
    //
    question_13 = new QLabel();
    QString path_l_13 = QCoreApplication::applicationDirPath();
    path_l_13.append("/resourses_test/13.png");
    QPixmap pixmap13(path_l_13);
    question_13->setPixmap(pixmap13);
    //
    question_14 = new QLabel();
    QString path_l_14 = QCoreApplication::applicationDirPath();
    path_l_14.append("/resourses_test/14.png");
    QPixmap pixmap14(path_l_14);
    question_14->setPixmap(pixmap14);
    //
    question_15 = new QLabel();
    QString path_l_15 = QCoreApplication::applicationDirPath();
    path_l_15.append("/resourses_test/15.png");
    QPixmap pixmap15(path_l_15);
    question_15->setPixmap(pixmap15);
    //
    cobm_11 = new QComboBox;
    cobm_12 = new QComboBox;
    cobm_13 = new QComboBox;
    cobm_14 = new QComboBox;
    cobm_15 = new QComboBox;
    //
    cobm_11->addItems(QStringList() <<"а"<<"б"<<"в"<<"г");
    //
    cobm_12->addItems(QStringList() <<"а"<<"б"<<"в");
    //
    cobm_13->addItems(QStringList() <<"а"<<"б"<<"в");
    //
    cobm_14->addItems(QStringList() <<"а"<<"б"<<"в");
    //
    cobm_15->addItems(QStringList() <<"а"<<"б"<<"в");
    //
    //
    test_grid_3 = new QGridLayout;
    test_grid_3->addWidget(question_11,0,0);
    test_grid_3->addWidget(cobm_11,0,1);
    test_grid_3->addWidget(question_12,1,0);
    test_grid_3->addWidget(cobm_12,1,1);
    test_grid_3->addWidget(question_13,2,0);
    test_grid_3->addWidget(cobm_13,2,1);
    test_grid_3->addWidget(question_14,3,0);
    test_grid_3->addWidget(cobm_14,3,1);
    test_grid_3->addWidget(question_15,4,0);
    test_grid_3->addWidget(cobm_15,4,1);
    //
    check_3 = new QPushButton("Далее");
    test_grid_3->addWidget(check_3,5,1);
    //
    child_test_3->setWindowTitle("Тестирование - ООП: классы и объекты (15 из 18)");
    //
    child_test_3->setLayout(test_grid_3);
    child_test_3->show();
    connect(check_3, SIGNAL(clicked()), this, SLOT(Test_4()));
}
