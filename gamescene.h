#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <QGraphicsScene>
#include <QPixmap>
#include "game.h"
class QTimer;
class GameScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit GameScene(QObject *parent = nullptr);

signals:
private slots:
    void update();

private:
    void loadPixmap();
    void renderScene();
    Game m_game;

    QPixmap m_headPixmap, m_tailPixmap, m_emptyPixmap, m_fruitPixmap;
    QPixmap m_pauseBgPixmap, m_gameOverPixmap;
    QTimer *m_timer;
    // QGraphicsScene interface
protected:
    virtual void keyPressEvent(QKeyEvent *event) override;
};

#endif // GAMESCENE_H
