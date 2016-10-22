#include "filetable.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FileTable w;
    w.show();

    return a.exec();
}
