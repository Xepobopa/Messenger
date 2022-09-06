#ifndef CHATELEMENT_H
#define CHATELEMENT_H

#include <QWidget>

namespace Ui {
class ChatElement;
}

class ChatElement : public QWidget
{
    Q_OBJECT

public:
    explicit ChatElement(QWidget *parent = nullptr);
    ~ChatElement();

    void setName(const QString& name);
    void setLastMessege(const QString& lastMessege);
    void setLastMessegeDate(const QString& lastMessegeDate);

    QString getName();
    QString getLastMessege();
    QString getLastMessegeDate();

private:
    Ui::ChatElement *ui;
};

#endif // CHATELEMENT_H
