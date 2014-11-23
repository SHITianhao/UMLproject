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
    robot->setEtat(EtatRobotEnRouteAVideFacePlot::instance(robot));
    robot->getObjet().setPoids(-1);
}

void EtatRobotEnRouteEnChargeFacePlot::tourner() {
    robot->setEtat(EtatRobotEnRouteEnCharge::instance(robot));
    switch(robot->getDirection()) {
        case 'E' :
            robot->setDirection('S');
            break;
        case 'S' :
            robot->setDirection('O');
            break;
        case 'O' :
            robot->setDirection('N');
            break;
        case 'N' :
            robot->setDirection('E');
            break;
        default:
            break;
    }
}

int EtatRobotEnRouteEnChargeFacePlot::peser() {
    return robot->getObjet().getPoids();
}

std::string EtatRobotEnRouteEnChargeFacePlot::getEtatToString() {
    return "En route en charge et face à un plot";
}