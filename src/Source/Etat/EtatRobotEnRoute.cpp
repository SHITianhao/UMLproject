#include "../../Header/Etat/EtatRobotFige.h"
#include "../../Header/Etat/EtatRobotEnRoute.h"

EtatRobotEnRoute::EtatRobotEnRoute(Robot* r) : EtatRobot(r) {
}

EtatRobotEnRoute::~EtatRobotEnRoute() {
}

<<<<<<< HEAD
void EtatRobotEnRoute::figer() {
    robot->setEtat(EtatRobotFige::instance(robot, robot->getEtat()));
=======
EtatRobot* EtatRobotEnRoute::figer(Robot* robot) {
	EtatRobotFige::instance()->enregistrerRobotFige(robot);
    return EtatRobotFige::instance();
}

void EtatRobotEnRoute::afficher() {
    cout << "Vous êtes dans état robot en route." << endl;
>>>>>>> origin/robot
}
