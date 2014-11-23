#include "../../Header/Etat/EtatRobot.h"
#include "../../Header/Affichage/Observable.h"

EtatRobot::EtatRobot(Robot* r) : robot(r) {
}

EtatRobot::~EtatRobot() {
}

void EtatRobot::avancer(int x, int y) {
    throw EtatRobot_Exception();
}

void EtatRobot::tourner() {
    throw EtatRobot_Exception();
}

void EtatRobot::saisir(const Objet& o) {
    throw EtatRobot_Exception();
}

void EtatRobot::poser() {
    throw EtatRobot_Exception();
}

int EtatRobot::peser() {
    throw EtatRobot_Exception();
}

void EtatRobot::rencontrerPlot(const Plot& p) {
    throw EtatRobot_Exception();
}

int EtatRobot::evaluerPlot() {
    throw EtatRobot_Exception();
}

void EtatRobot::figer() {
    throw EtatRobot_Exception();
}

void EtatRobot::repartir() {
    throw EtatRobot_Exception();
}

std::string EtatRobot::getEtatToString() { 
    throw EtatRobot_Exception();
}

