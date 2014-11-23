#include "../../Header/Etat/EtatRobotFige.h"
#include "../../Header/Robot/Robot.h"

EtatRobotFige* EtatRobotFige::thisEtat = NULL;

EtatRobotFige::EtatRobotFige(Robot* r) : EtatRobot(r) {
}

EtatRobotFige::~EtatRobotFige() {
}

EtatRobotFige* EtatRobotFige::instance(Robot* r) {
    if (thisEtat == NULL)
        thisEtat = new EtatRobotFige(r);
    return thisEtat;
}

EtatRobot* EtatRobotFige::repartir() {
    return robot->getEtat();
}

