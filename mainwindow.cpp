#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "QListWidgetItem"
#include "chatelementdelegate.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for (int var = 0; var < 15; ++var) {
       _chatList.append(new ChatElement());
       _chatList[var]->setName(QString::number(var));
    }

    addContact();

    ui->Chat_listWidget->setItemDelegate(new ChatElementDelegate);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addContact()
{
    for (auto chat : _chatList)
    {
        auto* item = new QListWidgetItem();
        item->setSizeHint(chat->sizeHint());
        ui->Chat_listWidget->addItem(item);
        ui->Chat_listWidget->setItemWidget(item, chat);
    }
}

