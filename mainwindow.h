#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_zeroButton_pressed();

    void setText(QString s);
    QString getText();
    void doCalculating(long num2);

    void on_oneButton_pressed();

    void on_twoButton_pressed();

    void on_threeButton_pressed();

    void on_fourButton_pressed();

    void on_fiveButton_pressed();

    void on_sixButton_pressed();

    void on_sevenButton_pressed();

    void on_eightButton_pressed();

    void on_nineButton_pressed();

    void on_acButton_pressed();

    void on_absoluteButton_pressed();

    void on_percentButton_pressed();

    void on_dotButton_pressed();

    void on_devideButton_pressed();

    void on_timesButton_pressed();

    void on_equalsButton_pressed();

    void on_minusButton_pressed();

    void on_plusButton_pressed();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
