#include <QApplication>
#include <QQmlApplicationEngine>



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    //stopWatchLabel = engine.findChild<QObject*>("stopWatchLabel");
    return app.exec();
}

