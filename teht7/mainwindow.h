#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Qtimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnSwitchLeft_clicked();

    void on_btnSwitchRight_clicked();

    void on_btn2Min_clicked();

    void on_bt5Min_clicked();

    void on_btnStartGame_clicked();

    void on_btnStopGame_clicked();

    void slotShowTimer();

private:
    Ui::MainWindow *ui;
    //QTimer *objectTimer;
    QTimer *gameTimer;

    //short x=0;
    short player1Time=0;
    short player2Time=0;
    int gameTime=0;
    void updateProgressBar();
    void setGameInfoText(QString,short);

    short playerTurn = 1;
};
#endif // MAINWINDOW_H
