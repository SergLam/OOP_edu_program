#include "mainwindow.h"

void MainWindow::Test_4(){
    if(child_test_3->isVisible()){
        child_test_3->hide();
    }
    // Check answers from previous page //
    QString cb = cobm_11->currentText();
    if(cb=="�"){
      result=result+1;
      result_num.append(true);
    }
    if(cb!="�"){
     result_num.append(false);
    }
    cb.clear();
    cb = cobm_12->currentText();
    if(cb=="�"){
      result=result+1;
      result_num.append(true);
    }
    if(cb!="�"){
     result_num.append(false);
    }
    cb.clear();
    cb = cobm_13->currentText();
    if(cb=="�"){
      result=result+1;
      result_num.append(true);
    }
    if(cb!="�"){
     result_num.append(false);
    }
    cb.clear();
    cb = cobm_14->currentText();
    if(cb=="�"){
      result=result+1;
      result_num.append(true);
    }
    if(cb!="�"){
     result_num.append(false);
    }
    cb.clear();
    cb = cobm_15->currentText();
    if(cb=="�"){
      result=result+1;
      result_num.append(true);
    }
    if(cb!="�"){
     result_num.append(false);
    }
    //qDebug()<<result<<result_num;
    // Test page 4 //
    question_16 = new QLabel();
    QString path_l_16 = QCoreApplication::applicationDirPath();
    path_l_16.append("/resourses_test/16.png");
    QPixmap pixmap16(path_l_16);
    question_16->setPixmap(pixmap16);
    //
    question_17 = new QLabel();
    QString path_l_17 = QCoreApplication::applicationDirPath();
    path_l_17.append("/resourses_test/17.png");
    QPixmap pixmap17(path_l_17);
    question_17->setPixmap(pixmap17);
    //
    question_18 = new QLabel();
    QString path_l_18 = QCoreApplication::applicationDirPath();
    path_l_18.append("/resourses_test/18.png");
    QPixmap pixmap18(path_l_18);
    question_18->setPixmap(pixmap18);
    //
    cobm_16 = new QComboBox;
    cobm_17 = new QComboBox;
    cobm_18 = new QComboBox;
    //
    cobm_16->addItems(QStringList() <<"�"<<"�"<<"�");
    //
    cobm_17->addItems(QStringList() <<"�"<<"�"<<"�"<<"�");
    //
    cobm_18->addItems(QStringList() <<"�"<<"�"<<"�");
    //
    test_grid_4 = new QGridLayout;
    test_grid_4->addWidget(question_16,0,0);
    test_grid_4->addWidget(cobm_16,0,1);
    test_grid_4->addWidget(question_17,1,0);
    test_grid_4->addWidget(cobm_17,1,1);
    test_grid_4->addWidget(question_18,2,0);
    test_grid_4->addWidget(cobm_18,2,1);
    //
    check_4 = new QPushButton("�����");
    test_grid_4->addWidget(check_4,5,1);
    //
    child_test_4->setWindowTitle("������������ - ���: ������ � ������� (18 �� 18)");
    //
    child_test_4->setLayout(test_grid_4);
    child_test_4->show();
    connect(check_4, SIGNAL(clicked()), this, SLOT(End_test()));
}
