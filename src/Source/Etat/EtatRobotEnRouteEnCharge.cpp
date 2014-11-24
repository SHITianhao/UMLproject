#include "../../Header/Etat/EtatRobotEnRouteEnChargeFacePlot.h"
#include "../../Header/Etat/EtatRobotEnRouteEnCharge.h"
#include "../../Header/Etat/EtatRobotEnRouteAVideFacePlot.h"

<<<<<<< HEAD
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
=======
EtatRobotEnRouteEnCharge* EtatRobotEnRouteEnCharge::ETAT_ROBOT_EN_ROUTE_EN_CHARGE =
NULL;

EtatRobotEnRouteEnCharge::EtatRobotEnRouteEnCharge() {
}

EtatRobotEnRouteEnCharge::~EtatRobotEnRouteEnCharge() {
}

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
	cout << "Vous êtes dans état robot en route en charge." << endl;
>>>>>>> origin/robot
}

void EtatRobotEnRouteEnCharge::rencontrerPlot(const Plot& p) {
    robot->setEtat(EtatRobotEnRouteAVideFacePlot::instance(robot));
    robot->setPlot(p);
}

std::string EtatRobotEnRouteEnCharge::getEtatToString() {
    return "En route en charge";
}
