#include "../../Header/Etat/EtatRobotEnRouteAVideFacePlot.h"
#include "../../Header/Etat/EtatRobotEnRouteEnCharge.h"
#include "../../Header/Etat/EtatRobotEnRouteEnChargeFacePlot.h"

EtatRobotEnRouteEnChargeFacePlot* EtatRobotEnRouteEnChargeFacePlot::ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT =
        NULL;

EtatRobotEnRouteEnChargeFacePlot::EtatRobotEnRouteEnChargeFacePlot() {
}

EtatRobotEnRouteEnChargeFacePlot::~EtatRobotEnRouteEnChargeFacePlot() {
}

EtatRobotEnRouteEnChargeFacePlot* EtatRobotEnRouteEnChargeFacePlot::instance() {
    if (ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT == NULL)
        ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT =
            new EtatRobotEnRouteEnChargeFacePlot();
    return ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT;
}

EtatRobot* EtatRobotEnRouteEnChargeFacePlot::poser() {
    return EtatRobotEnRouteAVideFacePlot::instance();
}

EtatRobot* EtatRobotEnRouteEnChargeFacePlot::tourner() {
    return EtatRobotEnRouteEnCharge::instance();
}

EtatRobot* EtatRobotEnRouteEnChargeFacePlot::peser() {
    return EtatRobotEnRouteEnChargeFacePlot::instance();
}

string EtatRobotEnRouteEnChargeFacePlot::toString() {
    return "Vous êtes dans état robot en route en charge face plot.\n";
}
