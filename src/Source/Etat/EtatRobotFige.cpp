#include "../../Header/Etat/EtatRobotFige.h"

EtatRobotFige* EtatRobotFige::thisEtat = NULL;

<<<<<<< HEAD
EtatRobotFige::EtatRobotFige(Robot* r, EtatRobot* l) : EtatRobot(r) {
    lastEtat = l;
}

EtatRobotFige::~EtatRobotFige() {
}

EtatRobotFige* EtatRobotFige::instance(Robot* r, EtatRobot* l) {
    if (thisEtat == NULL) {
        thisEtat = new EtatRobotFige(r, l);
    }
    return thisEtat;
=======
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
>>>>>>> origin/robot
}

void EtatRobotFige::repartir() {
    return robot->setEtat(lastEtat);
}

std::string EtatRobotFige::getEtatToString() {
    return "Figé";
}

