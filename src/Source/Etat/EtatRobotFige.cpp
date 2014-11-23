#include "../../Header/Etat/EtatRobotFige.h"
#include "../../Header/Robot/Robot.h"

EtatRobotFige* EtatRobotFige::thisEtat = NULL;

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
}

void EtatRobotFige::repartir() {
    return robot->setEtat(lastEtat);
}

std::string EtatRobotFige::getEtatToString() {
    return "Figé";
}

