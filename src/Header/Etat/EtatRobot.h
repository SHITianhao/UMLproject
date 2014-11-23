#ifndef ETAT_ROBOT_H_
#define ETAT_ROBOT_H_

#include "../Robot/Robot.h"
#include <iostream>

class Robot;

class EtatRobot {
protected:
    Robot* robot;
    EtatRobot(Robot* r);
    
public:
    virtual ~EtatRobot();
    virtual void avancer(int x, int y);
    virtual void tourner();
    virtual void saisir(Objet o);
    virtual void poser();
    virtual int peser();
    virtual void rencontrerPlot(Plot p);
    virtual int evaluerPlot();
    virtual void figer();
    virtual void repartir();
    virtual std::string getEtatToString();
};

#endif
