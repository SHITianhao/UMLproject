#ifndef ETATROBOTENROUTEENCHARGEFACEPLOT_H_
#define ETATROBOTENROUTEENCHARGEFACEPLOT_H_

#include "EtatRobotEnRoute.h"

class EtatRobotEnRouteEnChargeFacePlot : public EtatRobotEnRoute {
private:
    static EtatRobotEnRouteEnChargeFacePlot* ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT;
protected:

    EtatRobotEnRouteEnChargeFacePlot() {
    }
public:

    ~EtatRobotEnRouteEnChargeFacePlot() {
    }
    static EtatRobotEnRouteEnChargeFacePlot* instance();
    EtatRobot* poser();
    EtatRobot* tourner();
    EtatRobot* peser();
    void afficher();
};

#endif /* ETATROBOTENROUTEENCHARGEFACEPLOT_H_ */
