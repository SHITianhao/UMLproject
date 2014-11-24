#ifndef ETAT_ROBOT_EN_ROUTE_EN_CHARGE_H_INCLUDED
#define ETAT_ROBOT_EN_ROUTE_EN_CHARGE_H_INCLUDED

#include "EtatRobotEnRoute.h"

class EtatRobotEnRouteEnCharge : public EtatRobotEnRoute {
private:
    static EtatRobotEnRouteEnCharge* ETAT_ROBOT_EN_ROUTE_EN_CHARGE;
    
protected:
    EtatRobotEnRouteEnCharge();
    
public:
    ~EtatRobotEnRouteEnCharge();
    static EtatRobotEnRouteEnCharge* instance();
    EtatRobot* avancer();
    EtatRobot* tourner();
    EtatRobot* peser();
    EtatRobot* rencontrerPlot();
    string toString();
};

#endif
