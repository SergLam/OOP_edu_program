#include "mainwindow.h"

void MainWindow::Education(){
    // Set pictures to labels //
    button_education->setEnabled(false);
    child->setWindowTitle("Теоретические сведения");
    child->setMinimumWidth(750);
    edu_v_layout = new QVBoxLayout(child);
    area = new QScrollArea(child);

    area->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    area->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    area->setWidgetResizable(false);

    edu_scroll_layout = new QVBoxLayout();
    // Set pictures to labels //
    for(int i=1;i<21;i++){
        label[i] = new QLabel;
        QString path_l_19 = QCoreApplication::applicationDirPath();
        path_l_19.append("/resourses_edu/"+QString::number(i)+".png");
        QPixmap pixmap19(path_l_19);
        label[i]->setPixmap(pixmap19);
        edu_scroll_layout->addWidget(label[i]);
    }
    // Timer
    timer = new QTimer();
    time_edu_start = QTime::currentTime().toString("hh:mm:ss");
    connect(timer, SIGNAL(timeout()), this, SLOT(slotTimerAlarm()));
    timer->start(1000); 
    // Add scrolbars to widget
    QWidget * scrollAreaWidgetContents = new QWidget;
    scrollAreaWidgetContents->setLayout(edu_scroll_layout);
    edu_scroll_layout->setSizeConstraint(QLayout::SetFixedSize);
    area->setWidget(scrollAreaWidgetContents);
    edu_v_layout->addWidget(area);
    child->show();
    //
}

void MainWindow::slotTimerAlarm()
{
    // Every second update data at the current time
    time_current = QTime::currentTime().toString("hh:mm:ss");
    Check_edu_status();
}

void MainWindow::Check_edu_status(){
    if(!child->isVisible()){
        time_edu_end=time_current;
        timer->stop();
        Calculate_time_edu();
    }
}

void MainWindow::Calculate_time_edu(){
    QStringList start = time_edu_start.split(":");
    QStringList end = time_edu_end.split(":");
    for(int i=0;i<start.count();i++){
        QString st = start[i];
        int stt = st.toInt();
        QString en = end[i];
        int enn = en.toInt();
        int res =abs(enn-stt);
        if(i!=start.count()-1){
            time_edu_table.append(QString::number(res)+":");
        }
        if(i==start.count()-1){
            time_edu_table.append(QString::number(res));
        }
    }
}
