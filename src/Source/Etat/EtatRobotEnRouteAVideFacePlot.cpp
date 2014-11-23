#include "../../Header/Etat/EtatRobotEnRouteAVide.h"
#include "../../Header/Etat/EtatRobotEnRouteEnChargeFacePlot.h"
#include "../../Header/Etat/EtatRobotEnRouteAVideFacePlot.h"

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
}

void EtatRobotEnRouteAVideFacePlot::tourner(char d) {
}

void EtatRobotEnRouteAVideFacePlot::saisir(Objet* o) {
}


