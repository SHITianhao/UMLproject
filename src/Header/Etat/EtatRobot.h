#ifndef ETATROBOT_H_
#define ETATROBOT_H_

#include <iostream>
using namespace std;

class EtatRobot {
public:

    EtatRobot() {
    };

    virtual ~EtatRobot() {
    }

    class EtatRobot_Exception : public std::exception {
    };
    virtual EtatRobot* avancer();
    virtual EtatRobot* tourner();
    virtual EtatRobot* saisir();
    virtual EtatRobot* poser();
    virtual EtatRobot* peser();
    virtual EtatRobot* rencontrerPlot();
    virtual EtatRobot* evaluerPlot();
    virtual EtatRobot* figer();
    virtual EtatRobot* repartir();
    virtual void afficher();
};

#endif /* ETATROBOTENROUTEAVIDE_H_ */
