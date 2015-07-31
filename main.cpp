#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsScene>
#include "Curtain.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // create the view
    QGraphicsView* view = new QGraphicsView();

    // create the scene
    QGraphicsScene* scene = new QGraphicsScene();

    // connect view and scene
    view->setScene(scene);
    view->setSceneRect(0,0,800,500);

    // show the view
    view->show();

    // add Curtain item
    Curtain* curtain = new Curtain();
    scene->addItem(curtain);

    // TEST CODE HERE
    // try opening
    curtain->open();

    return a.exec();
}
