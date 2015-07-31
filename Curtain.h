#ifndef CURTAIN_H
#define CURTAIN_H

#include <QGraphicsRectItem>
#include <QTimer>
#include <vector>
#include <QObject>

class Curtain:public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    // constructor
    Curtain();

    void open();
    void close();

public slots:
    void nextFrame();

private:
    QTimer* timer_;
    std::vector<QGraphicsRectItem*> leftRects_;
    std::vector<QGraphicsRectItem*> rightRects_;
    bool opening_;
    bool closing_;
};

#endif // CURTAIN_H
