#include "mainwindow.h"

void MainWindow::End_test(){
    // Stop test timer
    time_test_end=time_test_current;
    timer_test->stop();
    // Calculate time for test
    QStringList start = time_test_start.split(":");
    QStringList end = time_test_end.split(":");
    for(int i=0;i<start.count();i++){
        QString st = start[i];
        int stt = st.toInt();
        QString en = end[i];
        int enn = en.toInt();
        int res =abs(enn-stt);
        if(i!=start.count()-1){
            time_test_table.append(QString::number(res)+":");
        }
        if(i==start.count()-1){
            time_test_table.append(QString::number(res));
        }
    }
    //
    if(child_test_4->isVisible()){
        child_test_4->hide();
    }
    // Check answers from previous page //
    QString cb = cobm_16->currentText();
    if(cb=="б"){
      result=result+1;
      result_num.append(true);
    }
    if(cb!="б"){
     result_num.append(false);
    }
    cb.clear();
    cb = cobm_17->currentText();
    if(cb=="г"){
      result=result+1;
      result_num.append(true);
    }
    if(cb!="г"){
     result_num.append(false);
    }
    cb.clear();
    cb = cobm_18->currentText();
    if(cb=="в"){
      result=result+1;
      result_num.append(true);
    }
    if(cb!="в"){
     result_num.append(false);
    }
    // Calculate student mark
    if(result<=5) mark=2;
    if(result>5 && result<=10) mark=3;
    if(result>10 && result<=15) mark=4;
    if(result>15) mark=5;
    /*
Сразу тогда скажи, сколько буду тебе должна
И такую шляпу вспомнила: просили еще систему оценивания
Реально сделать что-то типа за 10 и меньше правильных ответов -
3, от 10 до 16 - 4, и после 16 - 5 в итоговой в конце? Например
      */
    //
    table = new QTableWidget;
    table->setColumnCount(3);  // tw - QTableWidget // кол-во столбцов
    table->setRowCount(0); // кол-во строк
    table->setMinimumWidth(340);  //задать минимальную ширину
    table->setHorizontalHeaderLabels(QStringList()<<"Номер вопроса"<<"Ответ"<<"Номер раздела для самоконтроля");
    // Filling results to table
    int row;
    for(int i=0;i<18;i++){
        row = table->rowCount();
        table->setRowCount(row+1);
        QString x = QString::number(i+1);
        table->setItem(i,0,new QTableWidgetItem(x));
        if(result_num[i]==true){
            QString y = "Верно";
            table->setItem(i,1,new QTableWidgetItem(y));
        }
        if(result_num[i]==false){
            QString y = "Неправильно";
            table->setItem(i,1,new QTableWidgetItem(y));
        }
    }
    //
    row = table->rowCount();
    table->setRowCount(row+1);
    QString x = "Правильных ответов:";
    table->setItem(row,0,new QTableWidgetItem(x));
    QString y = QString::number(result);
    table->setItem(row,1,new QTableWidgetItem(y));
    // Set time to result table
    row = table->rowCount();
    table->setRowCount(row+1);
    QString xx = "Время прохождения обучения:";
    table->setItem(row,0,new QTableWidgetItem(xx));
    QString yy = time_edu_table;
    table->setItem(row,1,new QTableWidgetItem(yy));
    // Set time to result table
    row = table->rowCount();
    table->setRowCount(row+1);
    QString xxx = "Время прохождения теста:";
    table->setItem(row,0,new QTableWidgetItem(xxx));
    QString yyy = time_test_table;
    table->setItem(row,1,new QTableWidgetItem(yyy));
    // number chapters in the theoretical material
    //
    QString _1 = "1.Понятие классов, методов и объектов";
    table->setItem(0,2,new QTableWidgetItem(_1));
    QString _2 = "7.Наследование классов";
    table->setItem(1,2,new QTableWidgetItem(_2));
    QString _3 = "2.Основные свойства классов и объектов";
    table->setItem(2,2,new QTableWidgetItem(_3));
    QString _4 = "3.Структура объявления классов";
    table->setItem(3,2,new QTableWidgetItem(_4));
    QString _5 = "1.Понятие классов, методов и объектов";
    table->setItem(4,2,new QTableWidgetItem(_5));
    QString _6 = "4.Функции конструктора и деструктора";
    table->setItem(5,2,new QTableWidgetItem(_6));
    QString _7 = "2.Основные свойства классов и объектов";
    table->setItem(6,2,new QTableWidgetItem(_7));
    QString _8 = "6.Отделение интерфейса от реализации";
    table->setItem(7,2,new QTableWidgetItem(_8));
    QString _9 = "1.Понятие классов, методов и объектов";
    table->setItem(8,2,new QTableWidgetItem(_9));
    QString _10 = "5. set — функции и get — функции классов";
    table->setItem(9,2,new QTableWidgetItem(_10));
    QString _11 = "1.Понятие классов, методов и объектов";
    table->setItem(10,2,new QTableWidgetItem(_11));
    QString _12 = "1.Понятие классов, методов и объектов";
    table->setItem(11,2,new QTableWidgetItem(_12));
    QString _13 = "3. Структура объявления классов";
    table->setItem(12,2,new QTableWidgetItem(_13));
    QString _14 = "1.Понятие классов, методов и объектов";
    table->setItem(13,2,new QTableWidgetItem(_14));
    QString _15 = "1.Понятие классов, методов и объектов";
    table->setItem(14,2,new QTableWidgetItem(_15));
    QString _16 = "1.Понятие классов, методов и объектов";
    table->setItem(15,2,new QTableWidgetItem(_16));
    QString _17 = "1.Понятие классов, методов и объектов";
    table->setItem(16,2,new QTableWidgetItem(_17));
    QString _18 = "1.Понятие классов, методов и объектов";
    table->setItem(17,2,new QTableWidgetItem(_18));
    // display student mark in table
    QString _19 = "Ваша оценка:"+QString::number(mark);
    table->setItem(19,2,new QTableWidgetItem(_19));
    //
    table->resizeRowsToContents();
    table->setColumnWidth(2,200);
    //
    exit = new QPushButton("Завершить тест");
    child_test_5 = new QWidget();
    child_test_5->setWindowTitle("Результаты тестирования");
    //
    test_grid_5 = new QGridLayout;
    test_grid_5->addWidget(table,0,0);
    test_grid_5->addWidget(exit,1,0);
    //
    child_test_5->setLayout(test_grid_5);
    child_test_5->setMinimumWidth(500);
    child_test_5->show();
    connect(exit, SIGNAL(clicked()), this, SLOT(Quit()));
}

void MainWindow::Quit(){
    child_test_5->close();
    this->close();
}
