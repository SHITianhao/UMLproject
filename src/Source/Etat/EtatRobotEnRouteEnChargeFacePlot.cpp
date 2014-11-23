#include "../../Header/Etat/EtatRobotEnRouteAVideFacePlot.h"
#include "../../Header/Etat/EtatRobotEnRouteEnCharge.h"
#include "../../Header/Etat/EtatRobotEnRouteEnChargeFacePlot.h"

EtatRobotEnRouteEnChargeFacePlot* EtatRobotEnRouteEnChargeFacePlot::thisEtat = NULL;

EtatRobotEnRouteEnChargeFacePlot::EtatRobotEnRouteEnChargeFacePlot(Robot* r) : EtatRobotEnRoute(r) {
}

EtatRobotEnRouteEnChargeFacePlot::~EtatRobotEnRouteEnChargeFacePlot() {
}

EtatRobotEnRouteEnChargeFacePlot* EtatRobotEnRouteEnChargeFacePlot::instance(Robot* r) {
    if (thisEtat == NULL)
        thisEtat =
            new EtatRobotEnRouteEnChargeFacePlot(r);
    return thisEtat;
}

void EtatRobotEnRouteEnChargeFacePlot::poser() {
    
}

void EtatRobotEnRouteEnChargeFacePlot::tourner(char d) {
    
}

int EtatRobotEnRouteEnChargeFacePlot::peser() {
    
}

