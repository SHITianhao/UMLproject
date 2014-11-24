#include "../../Header/Etat/EtatRobotEnRouteAVideFacePlot.h"
#include "../../Header/Etat/EtatRobotEnRouteAVide.h"

EtatRobotEnRouteAVide* EtatRobotEnRouteAVide::thisEtat = NULL;

<<<<<<< HEAD
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
    robot->setPosition(x, y);
}

void EtatRobotEnRouteAVide::tourner() {
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

void EtatRobotEnRouteAVide::rencontrerPlot(const Plot& p) {
    robot->setEtat(EtatRobotEnRouteAVideFacePlot::instance(robot));
    robot->setPlot(p);
}

std::string EtatRobotEnRouteAVide::getEtatToString() {
    return "En route à vide";
=======
EtatRobotEnRouteAVide::EtatRobotEnRouteAVide() {
}

EtatRobotEnRouteAVide::~EtatRobotEnRouteAVide() {
}

EtatRobotEnRouteAVide* EtatRobotEnRouteAVide::instance() {
	if (ETAT_ROBOT_EN_ROUTE_AVIDE == NULL)
		ETAT_ROBOT_EN_ROUTE_AVIDE = new EtatRobotEnRouteAVide();
	return ETAT_ROBOT_EN_ROUTE_AVIDE;
}

EtatRobot* EtatRobotEnRouteAVide::avancer() {
	return EtatRobotEnRouteAVide::instance();
}

EtatRobot* EtatRobotEnRouteAVide::tourner() {
	return EtatRobotEnRouteAVide::instance();
}

EtatRobot* EtatRobotEnRouteAVide::rencontrerPlot() {
	return EtatRobotEnRouteAVideFacePlot::instance();
}

void EtatRobotEnRouteAVide::afficher() {
	cout << "Vous êtes dans état robot en route a vide." << endl;
>>>>>>> origin/robot
}
