#include "../include/hw4/main_window.hpp"
#include <QPainter>
#include <cmath> // For M_PI

MainWindow::MainWindow(QNode* qnode, QWidget* parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindowDesign)
  , qnode_(qnode)
{
   ui->setupUi(this);


   connect(qnode_, &QNode::jointStateReceived,
           this, &MainWindow::updateJointAngles);
   connect(qnode_, &QNode::commandReceived,
           this, &MainWindow::updateJointAngle);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::updateJointAngles(const std::vector<double>& positions,
const std::vector<std::string>& names)
{

    for (size_t i = 0; i < names.size(); ++i)
    {

        int degree = static_cast<int>(positions[i] * 180.0 / M_PI);

        if (names[i] == "joint1")
        {
            angle1 = qBound(0, degree, 360);
        }
        else if (names[i] == "joint2")
        {
            angle2 = qBound(0, degree, 360);
        }
        else if (names[i] == "joint3")
        {
            angle3 = qBound(0, degree, 360);
        }
    }
    update();
}

void MainWindow::paintEvent(QPaintEvent* event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    painter.save();
    painter.translate(300, 300);  //팔1 시작점
    painter.rotate(angle1);
    painter.drawLine(0, 0, 100, 0);  // 팔 1

    painter.translate(100, 0);  // 팔 1끝으로 이동
    painter.rotate(angle2);
    painter.drawLine(0, 0, 80, 0);   // 팔 2

    painter.translate(80, 0);  // 팔 2끝으로 이동
    painter.rotate(angle3);
    painter.drawLine(0, 0, 60, 0);   // 팔 3

    painter.restore();
}

void MainWindow::updateJointAngle(const QString& name, int angle)
{
    if (name == "joint1")
    {
        angle1 = qBound(0, angle, 360);
    }
    else if (name == "joint2")
    {
        angle2 = qBound(0, angle, 360);
    }
    else if (name == "joint3")
    {
        angle3 = qBound(0, angle, 360);
    }
    update();
}
