#include "../../Header/Etat/EtatRobotEnRouteAVideFacePlot.h"
#include "../../Header/Etat/EtatRobotEnRouteEnChargeFacePlot.h"
#include "../../Header/Etat/EtatRobotEnRouteEnCharge.h"

EtatRobotEnRouteAVideFacePlot* EtatRobotEnRouteAVideFacePlot::thisEtat = NULL;

EtatRobotEnRouteAVideFacePlot::EtatRobotEnRouteAVideFacePlot(Robot* r) : EtatRobotEnRoute(r) {
}

EtatRobotEnRouteAVideFacePlot::~EtatRobotEnRouteAVideFacePlot() {
}

EtatRobotEnRouteAVideFacePlot* EtatRobotEnRouteAVideFacePlot::instance(Robot* r) {
    if (thisEtat == NULL) {
        thisEtat = new EtatRobotEnRouteAVideFacePlot(r);
    }
    return thisEtat;
}

int EtatRobotEnRouteAVideFacePlot::evaluerPlot() {
    return robot->getPlot().getHauteur();
}

void EtatRobotEnRouteAVideFacePlot::tourner() {
    robot->setEtat(EtatRobotEnRouteEnCharge::instance(robot));
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

void EtatRobotEnRouteAVideFacePlot::saisir(Objet o) {
    robot->setEtat(EtatRobotEnRouteEnChargeFacePlot::instance(robot));
    robot->setObjet(o);
}

std::string EtatRobotEnRouteAVideFacePlot::getEtatToString() {
    return "En route à vide et face à un plot";
}

