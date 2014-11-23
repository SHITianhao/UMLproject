#include "../../Header/Etat/EtatRobotEnRouteEnChargeFacePlot.h"
#include "../../Header/Etat/EtatRobotEnRouteEnCharge.h"
#include "../../Header/Etat/EtatRobotEnRouteAVideFacePlot.h"

EtatRobotEnRouteEnCharge* EtatRobotEnRouteEnCharge::thisEtat = NULL;

EtatRobotEnRouteEnCharge::EtatRobotEnRouteEnCharge(Robot* r) : EtatRobotEnRoute(r) {
}

EtatRobotEnRouteEnCharge::~EtatRobotEnRouteEnCharge() {
}

EtatRobotEnRouteEnCharge* EtatRobotEnRouteEnCharge::instance(Robot* r) {
    if (thisEtat == NULL)
        thisEtat = new EtatRobotEnRouteEnCharge(r);
    return thisEtat;
}

void EtatRobotEnRouteEnCharge::avancer(int x, int y) {
    robot->setPosition(x, y);
}

void EtatRobotEnRouteEnCharge::tourner() {
    switch (robot->getDirection()) {
        case 'E':
            robot->setDirection('S');
            break;
        case 'S':
            robot->setDirection('O');
            break;
        case 'O':
            robot->setDirection('N');
            break;
        case 'N':
            robot->setDirection('E');
            break;
        default:
            break;
    }
}

int EtatRobotEnRouteEnCharge::peser() {
    return robot->getObjet().getPoids();
}

void EtatRobotEnRouteEnCharge::rencontrerPlot(const Plot& p) {
    robot->setEtat(EtatRobotEnRouteAVideFacePlot::instance(robot));
    robot->setPlot(p);
}

std::string EtatRobotEnRouteEnCharge::getEtatToString() {
    return "En route en charge";
}