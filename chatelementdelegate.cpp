#include "chatelementdelegate.h"

void ChatElementDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    if (option.state & QStyle::State_Selected) {
        painter->fillRect(option.rect, QColor(0, 150, 135));
        return;
    }
    else if (option.state & QStyle::State_MouseOver) {
        painter->fillRect(option.rect, QColor(53, 60, 67));
    }
    else {
        painter->fillRect(option.rect, QColor(40, 46, 51));
    }
    QStyledItemDelegate::paint(painter, option, index);
}
