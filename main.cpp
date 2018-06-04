#include "statki.h"
#include <QApplication>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "strzal.h"
#include "losowanie.h"

const int N=10;

int main(int argc, char *argv[])
{
    srand(time(NULL));

    QApplication a(argc, argv);
    STATKI w;
    w.show();
    
    return a.exec();
}
