#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnCount_clicked()
{
    x++;
    QString s = QString::number(x);
    ui->lineEdit->setText(""+s+"");
}


void MainWindow::on_btnReset_clicked()
{
    x=0;
    QString s = QString::number(x);
    ui->lineEdit->setText(""+s+"");
}

void MainWindow::numberClickedHandler()
{
    // Jotenkin maagisesti erottaa, mitä nappia on painettu, sekä tulostaa painetun napin nimen
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name:" << name;


    if (state == 1)
    {
        // ns. irrottaa numeron Nx viestistä, jonka ylempi koodi identifoi painaessa ja tulostaa sen ensimmäiseen lineEdit kenttään
        QString num = name.right(1);
        ui->num1->insert(num);
        number1 += num;
    }

    if (state == 2)
    {
        // ns. irrottaa numeron Nx viestistä, jonka ylempi koodi identifoi painaessa, ja tulostaa sen toiseen lineEdit kenttään
        QString num = name.right(1);
        ui->num2->insert(num);
        number2 += num;
    }

}

void MainWindow::addSubMulDivClickHandler()
{
    // Jotenkin maagisesti erottaa, mitä nappia on painettu, sekä tulostaa painetun napin nimen
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name:" << name;

    if (name == "add")
    {
        operand = 0;
    }

    if (name == "sub")
    {
        operand = 1;
    }

    if (name == "mul")
    {
        operand = 2;
    }

    if (name == "div")
    {
        operand = 3;
    }

    if (state == 1)
    {
        state = 2;
    }
}

void MainWindow::clearAndEnterClickHandler()
{
    // Jotenkin maagisesti erottaa, mitä nappia on painettu, sekä tulostaa painetun napin nimen
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name:" << name;

    if (name == "enter")
    {
        float n1 = number1.toFloat();
        float n2= number2.toFloat();

        switch (operand) {
        case 0:
            result = n1+n2;
            break;

        case 1:
            result = n1-n2;
            break;

        case 2:
            result = n1*n2;
            break;

        case 3:
            result = n1/n2;
            break;
        }

        QString s = QString::number(result);
        ui->result->setText(""+s+"");
    }

    if (name == "clear")
    {
        state = 1;
        number1 = "";
        number2 = "";

        ui->num1->clear();
        ui->num2->clear();
        ui->result->clear();
        ui->enter->setDisabled(false);
    }

}

// Numeronäppäimet
void MainWindow::on_N0_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_N1_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N2_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N3_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N4_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N5_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N6_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N7_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N8_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N9_clicked()
{
    numberClickedHandler();
}

// Ne muut
void MainWindow::on_add_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_sub_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_mul_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_div_clicked()
{
    addSubMulDivClickHandler();
}

// Ja ne loput
void MainWindow::on_clear_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_enter_clicked()
{
    clearAndEnterClickHandler();
}

