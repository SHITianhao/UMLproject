#ifndef ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT_H_INCLUDED
#define ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT_H_INCLUDED

#include "EtatRobotEnRoute.h"

class EtatRobotEnRouteEnChargeFacePlot : public EtatRobotEnRoute {
private:
    static EtatRobotEnRouteEnChargeFacePlot* ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT;
    
protected:
    EtatRobotEnRouteEnChargeFacePlot();
    
public:
    ~EtatRobotEnRouteEnChargeFacePlot();
    static EtatRobotEnRouteEnChargeFacePlot* instance();
    EtatRobot* poser();
    EtatRobot* tourner();
    EtatRobot* peser();
    string toString();
};

#endif
