#include "../../Header/Etat/EtatRobotEnRouteAVideFacePlot.h"
#include "../../Header/Etat/EtatRobotEnRouteAVide.h"

EtatRobotEnRouteAVide* EtatRobotEnRouteAVide::thisEtat = NULL;

EtatRobotEnRouteAVide::EtatRobotEnRouteAVide(Robot* r) : EtatRobotEnRoute(r) {
}

EtatRobotEnRouteAVide::~EtatRobotEnRouteAVide() {
}

EtatRobotEnRouteAVide* EtatRobotEnRouteAVide::instance(Robot* r) {
    if (thisEtat == NULL)
        thisEtat = new EtatRobotEnRouteAVide(r);
    return thisEtat;
}

void EtatRobotEnRouteAVide::avancer(int x, int y) {
    try {
        robot->setPosition(x, y);
    } catch (exception e) {

    }
}

void EtatRobotEnRouteAVide::tourner(char d) {
    try {
        robot->setDirection(d);
    } catch (exception e) {

    }
}

void EtatRobotEnRouteAVide::rencontrerPlot(Plot* p) {
}
