#include "../../Header/Etat/EtatRobotFige.h"
#include "../../Header/Etat/EtatRobotEnRoute.h"

EtatRobotEnRoute::EtatRobotEnRoute(Robot* r) : EtatRobot(r) {
}

EtatRobotEnRoute::~EtatRobotEnRoute() {
}

void EtatRobotEnRoute::figer() {
    robot->setEtat(EtatRobotFige::instance(robot, robot->getEtat()));
}
