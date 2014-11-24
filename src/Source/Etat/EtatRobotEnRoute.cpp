#include "../../Header/Etat/EtatRobotFige.h"
#include "../../Header/Etat/EtatRobotEnRoute.h"

EtatRobotEnRoute::EtatRobotEnRoute() {
}

EtatRobotEnRoute::~EtatRobotEnRoute() {
}

EtatRobot* EtatRobotEnRoute::figer(Robot* robot) {
	EtatRobotFige::instance()->enregistrerRobotFige(robot);
    return EtatRobotFige::instance();
}

string EtatRobotEnRoute::toString() {
    return "Vous êtes dans état robot en route.\n";
}
