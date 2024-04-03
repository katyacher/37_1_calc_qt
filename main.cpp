#include <QApplication>
#include <QPushButton>
#include <./ui_calc.h>
#include "calcmainwindow.h"

int main(int argc, char* argv[]){
    QApplication a(argc, argv);
    CalcMainWindow window(nullptr);
    Ui::MainWindow calc;
    calc.setupUi(&window);
    window.lineEdit = calc.lineEdit;
    window.resize(480,640);
    window.move(1000, 500);
    window.show();

    return a.exec();


}
