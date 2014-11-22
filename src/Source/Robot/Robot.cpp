#include "../../Header/Robot/Robot.h"
#include "../../Header/Etat/EtatRobotEnRouteAVide.h"

using namespace std;

EtatRobot* Robot::ETAT_ROBOT = NULL;

EtatRobot* Robot::getEtat() {
    return ETAT_ROBOT;
}

Robot::Robot(Position position, char direction) :
position(position), direction(direction) {
    if (ETAT_ROBOT == NULL) {
        ETAT_ROBOT = EtatRobotEnRouteAVide::instance();
    }
}

void Robot::avancer(int x, int y) {
    try {
        ETAT_ROBOT = ETAT_ROBOT->avancer();
    } catch (EtatRobot::EtatRobot_Exception e) {
        cerr << "you cannot do this action in this etat" << endl;
    }
    position.setX(position.getX() + x);
    position.setY(position.getY() + y);
    notifierObservateurs();

}

void Robot::tourner() {
    ETAT_ROBOT->afficher();
    ETAT_ROBOT = ETAT_ROBOT->tourner();
    ETAT_ROBOT->afficher();
    switch (direction) {
        case 'N':
            direction = 'E';
            break;
        case 'E':
            direction = 'S';
            break;
        case 'S':
            direction = 'O';
            break;
        case 'O':
            direction = 'N';
            break;
    }
    notifierObservateurs();
}

void Robot::saisir(Objet* o) {
    if (ETAT_ROBOT->saisir() != NULL) {
        objet = o;
    }
    notifierObservateurs();
}

void Robot::poser() {
}

int Robot::peser() {
    ETAT_ROBOT = ETAT_ROBOT->peser();
    return objet->getPoids();
}

void Robot::rencontrerPlot() {
    ETAT_ROBOT = ETAT_ROBOT->rencontrerPlot();
}

int Robot::evaluerPlot() {
    return 0;
}

void Robot::figer() {

}

void Robot::repartir() {

}

Position Robot::getPosition() {
    return position;
}

Plot* Robot::getPlot() {
    return plot;
}

Objet* Robot::getObjet() {
    return objet;
}

char Robot::getDirection() {
    return direction;
}