#ifndef CALCMAINWINDOW_H
#define CALCMAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>


class CalcMainWindow: public QMainWindow{
    Q_OBJECT

public:
    QLineEdit* lineEdit = nullptr;
   // QLineEdit* lineEdit_2 = nullptr;
   // QLineEdit* lineEdit_3 = nullptr;
    CalcMainWindow(QWidget* parent = nullptr): QMainWindow(parent){}

public slots:
    void plus(){lineEdit->setText("PlUS");};
    void minus(){lineEdit->setText("MINUS");};
    void multiple(){lineEdit->setText("MULT");};
    void divide(){lineEdit->setText("DIV");};
};

#endif