#include "../../Header/Robot/Robot.h"
#include "../../Header/Etat/EtatRobotEnRouteAVide.h"

#include <iostream>
using namespace std;

Robot::Robot(Position pos, Objet o, Plot pl, char d) :
position(pos), objet(o), plot(pl), direction(d) {
    etat = EtatRobotEnRouteAVide::instance(this);
}

void Robot::avancer(int x, int y) {
    etat->avancer(x, y);
    maj();
}

void Robot::tourner() {
    etat->tourner();
    maj();
}

void Robot::saisir(Objet o) {
    etat->saisir(o);
    maj();
}

void Robot::poser() {
    etat->poser();
    maj();
}

int Robot::peser() {
    maj();
    return etat->peser();
}

void Robot::rencontrerPlot(Plot p) {
    etat->rencontrerPlot(p);
    maj();
}

int Robot::evaluerPlot() {
    maj();
    return etat->evaluerPlot();
}

void Robot::figer() {
    etat->figer();
    maj();
}

void Robot::repartir() {
    etat->repartir();
    maj();
}

/**
 *      GETTERS AND SETTERS 
 */

Position Robot::getPosition() {
    return position;
}

Plot Robot::getPlot() {
    return plot;
}

Objet Robot::getObjet() {
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

void Robot::setPlot(Plot p) {
    plot = p;
}

void Robot::setObjet(Objet o) {
    objet = o;
}

void Robot::setDirection(char d) {
    direction = d;
}

void Robot::setEtat(EtatRobot* e) {
    etat = e;
}