#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setFocus(Qt::ActiveWindowFocusReason);
}

void Dialog::InicializarEscenadeJuego(){
    scene = new QGraphicsScene;//Se crea la escena del juego
    scene->setSceneRect(-200,-200,400,400);//Se delimita la escena
    ui->graphicsView->setScene(scene); //Se muestra en el view

}

Dialog::~Dialog()
{
    delete ui;
}

