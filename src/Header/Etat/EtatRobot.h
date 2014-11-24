#ifndef ETAT_ROBOT_H_INCLUDED
#define ETAT_ROBOT_H_INCLUDED

#include <iostream>

<<<<<<< HEAD
#include "../Robot/Robot.h"
=======
class Robot;

class EtatRobot {
public:
>>>>>>> origin/robot

class Robot;

class EtatRobot {
protected:
    Robot* robot;
    EtatRobot(Robot* r);

public:

<<<<<<< HEAD
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
=======
    class EtatRobot_Exception : public std::exception {
    	virtual const char* what() const throw();
    };
    virtual EtatRobot* avancer();
    virtual EtatRobot* tourner();
    virtual EtatRobot* saisir();
    virtual EtatRobot* poser();
    virtual EtatRobot* peser();
    virtual EtatRobot* rencontrerPlot();
    virtual EtatRobot* evaluerPlot();
    virtual EtatRobot* figer(Robot* robot);
    virtual EtatRobot* repartir(Robot* robot);
    virtual void afficher();
>>>>>>> origin/robot
};

#endif
