#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <qstylefactory>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //objectTimer=new QTimer();
    gameTimer=new QTimer();

    ui->btnSwitchLeft->setEnabled(false);
    ui->btnSwitchRight->setEnabled(false);
    ui->btnStartGame->setEnabled(false);

    QStyle *style = QStyleFactory::create("Fusion");
    ui->progressBarLeft->setStyle(style);

    ui->progressBarRight->setStyle(style);

}

MainWindow::~MainWindow()
{
    delete ui;
   //delete objectTimer;
   //objectTimer=nullptr;

    delete gameTimer;
    gameTimer=nullptr;
}

/////////////////////////////////////
// SLOT SHOW TIMER
/////////////////////////////////////
void MainWindow::slotShowTimer()
{
    //x+=1;
    if (playerTurn == 1)
    {
        player1Time-=1;
        if (player1Time <= 0)
        {
            ui->label->setText("Pelaaja 2 on voittanut!");
            disconnect(gameTimer, SIGNAL(timeout()), this, SLOT(slotShowTimer()));
            gameTimer->stop();
            ui->btn2Min->setEnabled(true);
            ui->bt5Min->setEnabled(true);

            ui->btnSwitchLeft->setEnabled(false);
            ui->btnSwitchRight->setEnabled(false);
            ui->btnStartGame->setEnabled(false);
        }
    }

    if (playerTurn == 2)
    {
        player2Time-=1;
        if (player2Time <= 0)
        {
            ui->label->setText("Pelaaja 1 on voittanut!");
            disconnect(gameTimer, SIGNAL(timeout()), this, SLOT(slotShowTimer()));
            gameTimer->stop();
            ui->btn2Min->setEnabled(true);
            ui->bt5Min->setEnabled(true);

            ui->btnSwitchLeft->setEnabled(false);
            ui->btnSwitchRight->setEnabled(false);
            ui->btnStartGame->setEnabled(false);
        }
    }

    updateProgressBar();
    qDebug()<<"Ensimmäisen pelaajan Aikaa jäljellä "<<player1Time<<" sekuntia\n";
    qDebug()<<"----------------------------------------------------------------";
    qDebug()<<"Toisen pelaajan Aikaa jäljellä "<<player2Time<<" sekuntia\n";
    qDebug()<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
}

void MainWindow::updateProgressBar()
{

    ui->progressBarLeft->setValue(player1Time);

    ui->progressBarRight->setValue(player2Time);

}

void MainWindow::setGameInfoText(QString s, short fontSize)
{

    // Asettaa kutsujan määritellyn tekstin
    ui->label->setText(s);

    // Asettaa kutsujan määrittelemän fonttikoon
    QFont font = ui->label->font();
    font.setPointSize(fontSize);
    ui->label->setFont(font);
}

////////////////////////////
// SwitchPlayer napit
////////////////////////////
void MainWindow::on_btnSwitchLeft_clicked()
{
    playerTurn = 2;
    ui->btnSwitchLeft->setEnabled(false);
    ui->btnSwitchRight->setEnabled(true);
}


void MainWindow::on_btnSwitchRight_clicked()
{
    playerTurn = 1;
        ui->btnSwitchLeft->setEnabled(true);
        ui->btnSwitchRight->setEnabled(false);
}

////////////////////////////
// Pelin pituuden napit
////////////////////////////
void MainWindow::on_btn2Min_clicked()
{
    gameTime=120;
    player1Time = gameTime;
    player2Time = gameTime;
    ui->label->setText("Game length set to 2 Min.");
    ui->btnStartGame->setEnabled(true);

    ui->progressBarLeft->setMinimum(0);
    ui->progressBarLeft->setMaximum(gameTime);

    ui->progressBarRight->setMinimum(0);
    ui->progressBarRight->setMaximum(gameTime);
}

void MainWindow::on_bt5Min_clicked()
{
    gameTime=300;
    player1Time = gameTime;
    player2Time = gameTime;
    ui->label->setText("Game length set to 5 Min.");
    ui->btnStartGame->setEnabled(true);

    ui->progressBarLeft->setMinimum(0);
    ui->progressBarLeft->setMaximum(gameTime);

    ui->progressBarRight->setMinimum(0);
    ui->progressBarRight->setMaximum(gameTime);

}

////////////////////////////
// Aloitus ja lopetus napit
////////////////////////////
void MainWindow::on_btnStartGame_clicked()
{
    // Yhdistä signaali ja slot vain, jos ne eivät ole jo yhdistetty
    if (!gameTimer->signalsBlocked()) {
        connect(gameTimer, SIGNAL(timeout()), this, SLOT(slotShowTimer()));
    }

    gameTimer->start(1000);

    QString s = "Game in progress...";
    setGameInfoText(s, 12);

    ui->btnSwitchLeft->setEnabled(true);
    ui->btnSwitchRight->setEnabled(false);

    ui->btn2Min->setEnabled(false);
    ui->bt5Min->setEnabled(false);
}


void MainWindow::on_btnStopGame_clicked()
{
    // Katkaise signaali yhteys, sekä aseta ajasimet takaisin alkuarvoon.
    disconnect(gameTimer, SIGNAL(timeout()), this, SLOT(slotShowTimer()));
    gameTimer->stop();

    //x=0;
    player1Time=0;
    player2Time=0;

    QString s = "Game stopped!";
    setGameInfoText(s, 12);
    ui->btn2Min->setEnabled(true);
    ui->bt5Min->setEnabled(true);

    ui->btnSwitchLeft->setEnabled(false);
    ui->btnSwitchRight->setEnabled(false);
    ui->btnStartGame->setEnabled(false);
}

