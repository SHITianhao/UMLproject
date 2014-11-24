#ifndef ETAT_ROBOT_H_INCLUDED
#define ETAT_ROBOT_H_INCLUDED

#include <iostream>

#include "../Robot/Robot.h"

class Robot;

class EtatRobot {
protected:
    Robot* robot;
    EtatRobot(Robot* r);

public:

    class Commande_Invalide : public std::exception {
    public:
    	virtual const char* what() const throw();
    };
    virtual ~EtatRobot();
    virtual void avancer(int x, int y);
    virtual void tourner();
    virtual void saisir(const Objet& o);
    virtual void poser();
    virtual int peser();
    virtual void rencontrerPlot(const Plot& p);
    virtual int evaluerPlot();
    virtual void figer();
    virtual void repartir();
    virtual std::string getEtatToString();
};

#endif
