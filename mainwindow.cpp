#include "mainwindow.h"
#include "math.h"
#include <ctime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    child = new QWidget;
    child_test_1 = new QWidget();
    child_test_2 = new QWidget();
    child_test_3 = new QWidget();
    child_test_4 = new QWidget();
    //

    //
    QString path_back = QCoreApplication::applicationDirPath();
    path_back.append("/c++_icon.png");
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(QImage(path_back)));
    this->setPalette(palette);
    this->setFixedSize(340,340);
    //
    this->setWindowTitle("ООП: классы и объекты");
    button_education = new QPushButton("Обучение");
    button_test = new QPushButton("Тест");
    glMain = new QGridLayout;
    vert_lay = new QVBoxLayout;
    lay_1 = new QHBoxLayout;
    label1 = new QLabel("Выберите режим:");
    wCenter = new QWidget;

    lay_1->addWidget(label1);
    lay_1->addWidget(button_education);
    lay_1->addWidget(button_test);

    vert_lay->addStretch();
    vert_lay->addLayout(lay_1);
    // Layouts //
    glMain->addLayout(vert_lay,0,0);
    wCenter ->setLayout(glMain);
    this ->setCentralWidget(wCenter);
    connect(button_education, SIGNAL(clicked()), this, SLOT(Education()));
    connect(button_test, SIGNAL(clicked()), this, SLOT(Test()));
    // timer

    }
MainWindow::~MainWindow()
{
}


