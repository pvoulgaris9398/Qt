#include <QtWidgets>
#include <QApplication>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QWidget window;
    window.resize(320, 240);
    window.show();
    window.setWindowTitle(QApplication::translate("toplevel", "Initial Working Qt Sample"));
    return app.exec();
}