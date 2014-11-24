#ifndef ETAT_ROBOT_H_INCLUDED
#define ETAT_ROBOT_H_INCLUDED

#include <iostream>
using namespace std;

class Robot;

class EtatRobot {
public:

    EtatRobot() {
    };

    virtual ~EtatRobot() {
    }

    class EtatRobot_Exception : public std::exception {
        virtual const char* what() const throw ();
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
    virtual string toString();
};

#endif
