#include "../../Header/Etat/EtatRobotEnRouteEnChargeFacePlot.h"
#include "../../Header/Etat/EtatRobotEnRouteEnCharge.h"

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
    
}

void EtatRobotEnRouteEnCharge::tourner(char d) {
    
}

int EtatRobotEnRouteEnCharge::peser() {
    
}

void EtatRobotEnRouteEnCharge::rencontrerPlot(Plot* p) {
}
