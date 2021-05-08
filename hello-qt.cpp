#include <QCoreApplication>
#include <QDebug>
#include <QTimer>

int main(int argc, char** argv) {
  QCoreApplication app(argc, argv);
  QString hello("Hello, the qt world");
  qDebug() << hello;
  app.exit(0);
  QTimer::singleShot(100, [](){
    QCoreApplication::instance()->exit(-3);
  });
  int ret = app.exec();
  return ret;
}
