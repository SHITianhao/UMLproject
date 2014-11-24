#include "../../Header/Etat/EtatRobotFige.h"
#include "../../Header/Etat/EtatRobotEnRouteAVide.h"

Robot::Robot(Position pos, Objet o, Plot pl, char d) :
position(pos), objet(o), plot(pl), direction(d) {
    etat = EtatRobotFige::instance(this, EtatRobotEnRouteAVide::instance(this));
}

void Robot::avancer(int x, int y) {
    try {
        etat->avancer(x, y);
        maj("AVANCER");
    } catch (EtatRobot::Commande_Invalide& e) {
        majException("AVANCER", e.what());
    }
}

void Robot::tourner() {
    try {
        etat->tourner();
        maj("TOURNER");
    } catch (EtatRobot::Commande_Invalide& e) {
        majException("TOURNER", e.what());
    }
}

void Robot::saisir(const Objet& o) {
    try {
        etat->saisir(o);
        maj("SAISIR");
    } catch (EtatRobot::Commande_Invalide& e) {
        majException("SAISIR", e.what());
    }
}

void Robot::poser() {
    try {
        etat->poser();
        maj("POSER");
    } catch (EtatRobot::Commande_Invalide& e) {
        majException("POSER", e.what());
    }
}

int Robot::peser() {
    try {
        int res = etat->peser();
        maj("PESER");
        return res;
    } catch (EtatRobot::Commande_Invalide& e) {
        majException("PESER", e.what());
        return -1;
    }
}

void Robot::rencontrerPlot(const Plot& p) {
    try {
        etat->rencontrerPlot(p);
        maj("RENCONTRER PLOT");
    } catch (EtatRobot::Commande_Invalide& e) {
        majException("RENCONTRER PLOT", e.what());
    }
}

int Robot::evaluerPlot() {
    try {
        int res = etat->evaluerPlot();
        maj("EVALUER PLOT");
        return res;
    } catch (EtatRobot::Commande_Invalide& e) {
        majException("EVALUER PLOT", e.what());
        return -1;
    }
}

void Robot::figer() {
    try {
        etat->figer();
        maj("FIGER");
    } catch (EtatRobot::Commande_Invalide& e) {
        majException("FIGER", e.what());
    }
}

void Robot::repartir() {
    try {
        etat->repartir();
        maj("REPARTIR");
    } catch (EtatRobot::Commande_Invalide& e) {
        majException("REPARTIR", e.what());
    }
}

/**
 *      GETTERS AND SETTERS 
 */

Position Robot::getPosition() {
    return position;
}

Plot Robot::getPlot() const {
    return plot;
}

Objet Robot::getObjet() const {
    return objet;
}

char Robot::getDirection() {
    return direction;
}

EtatRobot * Robot::getEtat() {
    return etat;
}

void Robot::setPosition(int x, int y) {
    position.setX(x);
    position.setY(y);
}

void Robot::setPlot(const Plot & p) {
    plot = p;
}

void Robot::setObjet(const Objet & o) {
    objet = o;
}

void Robot::setDirection(char d) {
    direction = d;
}

void Robot::setEtat(EtatRobot * e) {
    etat = e;
}
