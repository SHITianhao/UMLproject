#ifndef ROBOT_H_INCLUDED
#define ROBOT_H_INCLUDED

#include <iostream>

#include "Position.h"
#include "Plot.h"
#include "Objet.h"
#include "../Etat/EtatRobot.h"
#include "../Affichage/Observable.h"

class EtatRobot;

class Robot : public Observable {
private:
    Position position;
    Objet objet;
    Plot plot;
    char direction;
    EtatRobot* etat;

public:
    Robot(Position pos = Position(0, 0), Objet o = Objet(-1), Plot pl = Plot(-1), char d = 'E');
    class Commande_Impossible : public std::exception {};
    void avancer(int x, int y);
    void tourner();
    void saisir(const Objet& o);
    void poser();
    int peser();
    void rencontrerPlot(const Plot& p);
    int evaluerPlot();
    void figer();
    void repartir();

    Position getPosition();
    Plot getPlot() const;
    Objet getObjet() const;
    char getDirection();
    EtatRobot* getEtat();

    void setPosition(int x, int y);
    void setPlot(const Plot& p);
    void setObjet(const Objet& o);
    void setDirection(char d);
    void setEtat(EtatRobot* e);
};

#endif
