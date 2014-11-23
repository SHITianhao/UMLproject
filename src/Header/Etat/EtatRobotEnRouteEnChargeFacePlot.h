#ifndef ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT_H_INCLUDED
#define ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT_H_INCLUDED

#include "EtatRobotEnRoute.h"

class EtatRobotEnRouteEnChargeFacePlot : public EtatRobotEnRoute {
private:
    static EtatRobotEnRouteEnChargeFacePlot* thisEtat;

protected:
    EtatRobotEnRouteEnChargeFacePlot(Robot* r);

public:
    ~EtatRobotEnRouteEnChargeFacePlot();
    static EtatRobotEnRouteEnChargeFacePlot* instance(Robot* r);
    void poser();
    void tourner();
    int peser();
    std::string getEtatToString();
};

#endif
