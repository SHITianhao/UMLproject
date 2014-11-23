#ifndef ETAT_ROBOT_H_
#define ETAT_ROBOT_H_

#include "../Robot/Robot.h"

class Robot;

class EtatRobot {
protected:
    Robot* robot;
    
public:
    EtatRobot(Robot* r);
    virtual ~EtatRobot();
    virtual void avancer(int x, int y);
    virtual void tourner(char d);
    virtual void saisir(Objet* o);
    virtual void poser();
    virtual int peser();
    virtual void rencontrerPlot(Plot* p);
    virtual int evaluerPlot();
    virtual void figer();
    virtual EtatRobot* repartir();
};

#endif
