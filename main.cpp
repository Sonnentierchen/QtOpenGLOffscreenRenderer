#include "mainwindow.h"
#include "offscreenrenderer.h"
#include <QApplication>
#include <QImage>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    OffscreenRenderer *renderer = new OffscreenRenderer(QSize(500, 500));
    QImage result = renderer->render();
    result.save("test.png");
    return a.exec();
}
