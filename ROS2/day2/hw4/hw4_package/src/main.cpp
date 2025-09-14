#include <QApplication>
#include "../include/hw4/main_window.hpp"
#include "../include/hw4/qnode.hpp"

int main(int argc, char* argv[])
{
  QApplication a(argc, argv);

  QNode qnode(argc, argv);
  qnode.init();

  MainWindow w(&qnode);
  w.show();

  int result = a.exec();

  return result;
}