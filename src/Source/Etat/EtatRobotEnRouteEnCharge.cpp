#include "../../Header/Etat/EtatRobotEnRouteEnChargeFacePlot.h"
#include "../../Header/Etat/EtatRobotEnRouteEnCharge.h"

EtatRobotEnRouteEnCharge* EtatRobotEnRouteEnCharge::ETAT_ROBOT_EN_ROUTE_EN_CHARGE = NULL;

EtatRobotEnRouteEnCharge* EtatRobotEnRouteEnCharge::instance() {
    if (ETAT_ROBOT_EN_ROUTE_EN_CHARGE == NULL)
        ETAT_ROBOT_EN_ROUTE_EN_CHARGE = new EtatRobotEnRouteEnCharge();
    return ETAT_ROBOT_EN_ROUTE_EN_CHARGE;
}

EtatRobot* EtatRobotEnRouteEnCharge::avancer() {
    return EtatRobotEnRouteEnCharge::instance();
}

EtatRobot* EtatRobotEnRouteEnCharge::tourner() {
    return EtatRobotEnRouteEnCharge::instance();
}

EtatRobot* EtatRobotEnRouteEnCharge::peser() {
    return EtatRobotEnRouteEnCharge::instance();
}

EtatRobot* EtatRobotEnRouteEnCharge::rencontrerPlot() {
    return EtatRobotEnRouteEnChargeFacePlot::instance();
}

void EtatRobotEnRouteEnCharge::afficher() {
    cout << "this is etat robot en route en charge" << endl;
}
