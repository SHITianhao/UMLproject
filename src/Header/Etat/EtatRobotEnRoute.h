#ifndef ETAT_ROBOT_EN_ROUTE_H_INCLUDED
#define ETAT_ROBOT_EN_ROUTE_H_INCLUDED

#include "EtatRobot.h"

class EtatRobotEnRoute : public EtatRobot {
public:
    EtatRobotEnRoute();
    ~EtatRobotEnRoute();
    EtatRobot* figer(Robot* robot);
    string toString();
};

#endif
