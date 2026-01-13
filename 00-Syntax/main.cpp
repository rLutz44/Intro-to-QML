#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[]) {
  QGuiApplication app(argc, argv);
  QQmlApplicationEngine engine;
  engine.loadFromModule("Main", "Main");
  if (engine.rootObjects().isEmpty())
    exit(-1);

  qDebug()<< "Qt version: " << QT_VERSION_STR;

  return app.exec();
}
