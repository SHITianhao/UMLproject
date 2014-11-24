#include "../../Header/Etat/EtatRobotEnRouteAVide.h"
#include "../../Header/Etat/EtatRobotEnRouteEnChargeFacePlot.h"
#include "../../Header/Etat/EtatRobotEnRouteAVideFacePlot.h"

EtatRobotEnRouteAVideFacePlot* EtatRobotEnRouteAVideFacePlot::ETAT_ROBOT_EN_ROUTE_AVIDE_FACE_PLOT =
        NULL;

EtatRobotEnRouteAVideFacePlot::EtatRobotEnRouteAVideFacePlot() {
}

EtatRobotEnRouteAVideFacePlot::~EtatRobotEnRouteAVideFacePlot() {
}

EtatRobotEnRouteAVideFacePlot* EtatRobotEnRouteAVideFacePlot::instance() {
    if (ETAT_ROBOT_EN_ROUTE_AVIDE_FACE_PLOT == NULL)
        ETAT_ROBOT_EN_ROUTE_AVIDE_FACE_PLOT =
            new EtatRobotEnRouteAVideFacePlot();
    return ETAT_ROBOT_EN_ROUTE_AVIDE_FACE_PLOT;
}

EtatRobot* EtatRobotEnRouteAVideFacePlot::evaluerPlot() {
    return EtatRobotEnRouteAVideFacePlot::instance();
}

EtatRobot* EtatRobotEnRouteAVideFacePlot::tourner() {
    return EtatRobotEnRouteAVide::instance();
}

EtatRobot* EtatRobotEnRouteAVideFacePlot::saisir() {
    return EtatRobotEnRouteEnChargeFacePlot::instance();
}

string EtatRobotEnRouteAVideFacePlot::toString() {
    return "Vous êtes dans état robot en route à vide face plot.\n";
    ;
}

