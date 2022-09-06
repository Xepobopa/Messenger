#ifndef CHATELEMENTDELEGATE_H
#define CHATELEMENTDELEGATE_H

#include "QStyledItemDelegate"
#include "QPainter"

class ChatElementDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    using QStyledItemDelegate::QStyledItemDelegate;
    void paint(QPainter *painter, const QStyleOptionViewItem &option,
                const QModelIndex &index) const override;
};

#endif // CHATELEMENTDELEGATE_H
