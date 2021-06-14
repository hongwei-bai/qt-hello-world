#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

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

void MainWindow::on_pushButton_clicked()
{
    // Types of message box
    // about
    // aboutQt
    // StandardButton critical
    // StandardButton information
    // StandardButton question
    // StandardButton warning
//    QMessageBox::about(this, "My Title", "This is my custom message");
//    QMessageBox::aboutQt(this, "My Title");
//    QMessageBox::critical(this, "My Title", "This is my custom message");
    QMessageBox::StandardButton reply = QMessageBox::question(this, "My Title", "This is my custom message",
                          QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes) {
        QApplication::quit();
    } else {
        qDebug() << "No is clicked";
    }
}
