#include "../../Header/Robot/Robot.h"
#include "../../Header/Etat/EtatRobotEnRouteAVide.h"

#include <iostream>
using namespace std;

Robot::Robot(Position p, char d) :
position(p), direction(d) {
    etat = EtatRobotEnRouteAVide::instance(this);
}

void Robot::avancer(int x, int y) {
    etat->avancer(x, y);
    notifierObservateurs();
}

void Robot::tourner(char d) {
    etat->tourner(d);
    notifierObservateurs();
}

void Robot::saisir(Objet* o) {
    etat->saisir(o);
    notifierObservateurs();
}

void Robot::poser() {
    etat->poser();
    notifierObservateurs();
}

int Robot::peser() {
    return etat->peser();
}

void Robot::rencontrerPlot(Plot* p) {
    etat->rencontrerPlot(p);
    notifierObservateurs();
}

int Robot::evaluerPlot() {
    return etat->evaluerPlot();
}

void Robot::figer() {
    etat->figer();
    notifierObservateurs();
}

void Robot::repartir() {
    etat->repartir();
    notifierObservateurs();
}

/**
 *      GETTERS AND SETTERS 
 */

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

EtatRobot* Robot::getEtat() {
    return etat;
}

void Robot::setPosition(int x, int y) {
    position.setX(x);
    position.setY(y);
}

void Robot::setPlot(Plot* p) {
    plot = p;
}

void Robot::setObjet(Objet* o) {
    objet = o;
}

void Robot::setDirection(char d) {
    direction = d;
}

void Robot::setEtat(EtatRobot* e) {
    etat = e;
}