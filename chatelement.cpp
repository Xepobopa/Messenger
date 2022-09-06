#include "chatelement.h"
#include "ui_chatelement.h"

#include "chatelement.h"

ChatElement::ChatElement(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChatElement)
{
    ui->setupUi(this);

    ui->Avatar_Label->setPixmap(QPixmap(":/img/img/contact.png"));
}

void ChatElement::setName(const QString &name)
{
    ui->Name_Label->setText(name);
}

void ChatElement::setLastMessege(const QString &lastMessege)
{
    ui->LastMessege_Label->setText(lastMessege);
}

void ChatElement::setLastMessegeDate(const QString &lastMessegeDate)
{
    ui->LastMessageDate_Label->setText(lastMessegeDate);
}

QString ChatElement::getName()
{
    return ui->Name_Label->text();
}

QString ChatElement::getLastMessege()
{
    return ui->LastMessege_Label->text();
}

QString ChatElement::getLastMessegeDate()
{
    return ui->LastMessageDate_Label->text();
}

ChatElement::~ChatElement()
{
    delete ui;
}
