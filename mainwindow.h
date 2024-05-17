#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "QPushButton"
#include "QLineEdit"
#include "QLabel"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QPushButton *change;
    QPushButton *reset;
    QPushButton *convert;
    QLabel *showtitle;
    QLineEdit *edit;
    QLabel *result;
private slots:
    void changetext();
    void resettext();
    void converttext();

private:
    Ui::MainWindow *ui;
    bool mode=false;
    int finalNum=0;
};
#endif // MAINWINDOW_H
