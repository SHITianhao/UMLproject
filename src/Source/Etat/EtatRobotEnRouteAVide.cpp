#include "../../Header/Etat/EtatRobotEnRouteAVideFacePlot.h"
#include "../../Header/Etat/EtatRobotEnRouteAVide.h"

EtatRobotEnRouteAVide* EtatRobotEnRouteAVide::ETAT_ROBOT_EN_ROUTE_AVIDE = NULL;

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

string EtatRobotEnRouteAVide::toString() {
	return "Vous êtes dans état robot en route à vide.\n";
}
