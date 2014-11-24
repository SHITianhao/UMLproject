#include "../../Header/Etat/EtatRobotFige.h"
#include "../../Header/Robot/Robot.h"

EtatRobotFige* EtatRobotFige::ETAT_ROBOT_FIGE = NULL;

EtatRobotFige::EtatRobotFige() {
}

EtatRobotFige::~EtatRobotFige() {
}

EtatRobotFige* EtatRobotFige::instance() {
	if (ETAT_ROBOT_FIGE == NULL)
		ETAT_ROBOT_FIGE = new EtatRobotFige();
	return ETAT_ROBOT_FIGE;
}

EtatRobot* EtatRobotFige::repartir(Robot* robot) {
	EtatRobot* result = _figeRobots[robot];
	_figeRobots.erase(robot);
	return result;
}

void EtatRobotFige::afficher() {
	cout << "Vous êtes dans état robot fige." << endl;
}

void EtatRobotFige::enregistrerRobotFige(Robot* robot) {
	_figeRobots[robot] = robot->getEtat();
}
