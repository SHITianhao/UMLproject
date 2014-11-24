#ifndef ROBOT_H_INCLUDED
#define ROBOT_H_INCLUDED

#include "Position.h"
#include "Plot.h"
#include "Objet.h"
#include "../Etat/EtatRobot.h"
#include "../Affichage/Observable.h"

class Robot : public Observable {
private:
    Position _position;
    Objet _objet;
    char _direction;
    EtatRobot* _etatRobot;
    Plot _plot;
    
public:
    Robot(Position position = Position(0, 0), char direction = 'N');
    Robot(const Robot& robot);
    ~Robot();
    EtatRobot* getEtat();
    void avancer(int x, int y);
    void tourner();
    void saisir(Objet o);
    void poser();
    int peser();
    void rencontrerPlot(Plot p);
    int evaluerPlot();
    void figer();
    void repartir();
    void affichier();

    Position getPosition();
    Plot getPlot() const;
    Objet getObjet() const;
    char getDirection();

    void setPosition(int x, int y);
    void setPlot(const Plot& p);
    void setObjet(const Objet& o);
    void setDirection(char d);
    void setEtat(EtatRobot* e);
};
#endif
