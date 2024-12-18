#include "jeux.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    jeux w;
    w.show();
    return a.exec();
}
