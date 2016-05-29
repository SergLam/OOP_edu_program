#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtGui>
class MainWindow : public QMainWindow{
    Q_OBJECT
protected:
    // Number of balls for test
    int result;
    int mark;
    QVector <bool> result_num;
    ///// Elements of main form /////
    QGridLayout *glMain;
    QWidget *wCenter;
    QHBoxLayout *lay_1, *lay_2;
    QVBoxLayout *vert_lay;
    QLabel *label1, *label2;
    QPushButton *button_education, *button_test;
    // Education window //
    QLabel *label[21];
    QVBoxLayout *edu_v_layout, *edu_scroll_layout;
    QGridLayout *grid_edu;
    QScrollArea *area;
    QWidget *child;
    // Test window 1 //
    QWidget *child_test_1;
    QGridLayout *test_grid_1;
    QLabel *question_1, *question_2, *question_3, *question_4, *question_5;
    QComboBox *cobm_1, *cobm_2, *cobm_3, *cobm_4, *cobm_5;
    QPushButton *check_1;
    // Test window 2 //
    QWidget *child_test_2;
    QGridLayout *test_grid_2;
    QLabel *question_6, *question_7, *question_8, *question_9, *question_10;
    QComboBox *cobm_6, *cobm_7, *cobm_8, *cobm_9, *cobm_10;
    QPushButton *check_2;
    // Test window 3 //
    QWidget *child_test_3;
    QGridLayout *test_grid_3;
    QLabel *question_11, *question_12, *question_13, *question_14, *question_15;
    QComboBox *cobm_11, *cobm_12, *cobm_13, *cobm_14, *cobm_15;
    QPushButton *check_3;
    // Test window 4 //
    QWidget *child_test_4;
    QGridLayout *test_grid_4;
    QLabel *question_16, *question_17, *question_18;
    QComboBox *cobm_16, *cobm_17, *cobm_18;
    QPushButton *check_4;
    // End of test //
    QWidget *child_test_5;
    QGridLayout *test_grid_5;
    QTableWidget *table;
    QPushButton *exit;
    // Timer education
    QTimer *timer;
    QString time_edu_start;
    QString time_edu_end;
    QString time_current;
    QString time_edu_table;
    // Timer test
    QTimer *timer_test;
    QString time_test_start;
    QString time_test_end;
    QString time_test_current;
    QString time_test_table;
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    // Function to check is the edu window not closed
    void Check_edu_status();
    // Function to calculate time spent on test
    void Calculate_time_edu();
public slots:
   void Education();
   void Test();
   void Test_2();
   void Test_3();
   void Test_4();
   void End_test();
   void Quit();
private slots:
   void slotTimerAlarm();
   void slotTimerAlarm_test();
};

#endif // MAINWINDOW_H
