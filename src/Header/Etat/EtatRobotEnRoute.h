#ifndef ETAT_ROBOT_EN_ROUTE_H_INCLUDED
#define ETAT_ROBOT_EN_ROUTE_H_INCLUDED

#include "EtatRobot.h"

class EtatRobotEnRoute : public EtatRobot {
protected:
    EtatRobotEnRoute(Robot* r);

public:
    ~EtatRobotEnRoute();
    void figer();
    void afficher();
};

#endif