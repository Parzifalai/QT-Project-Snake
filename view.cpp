#include "view.h"
#include <QApplication>
#include <QKeyEvent>
#include "gamescene.h"

View::View()
    : QGraphicsView()
    , m_gameScene(new GameScene(this))
{
    setScene(m_gameScene);
    resize(m_gameScene->sceneRect().width() + 2, m_gameScene->sceneRect().height() + 2);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

void View::keyPressEvent(QKeyEvent *event)
{
    if (!event->isAutoRepeat()) {
        if (event->key() == Qt::Key_Escape) {
            QApplication::instance()->quit();
        }
    }
    QGraphicsView::keyPressEvent(event);
}
