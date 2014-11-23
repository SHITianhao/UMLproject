#include "../../Header/Etat/EtatRobot.h"
#include "../../Header/Affichage/Observable.h"

EtatRobot::EtatRobot(Robot* r) : robot(r) {
}

EtatRobot::~EtatRobot() {
}

void EtatRobot::avancer(int x, int y) {
    
    majException("Commande impossible");
    throw EtatRobot_Exception();
}

void EtatRobot::tourner() {
    
    majException("Commande impossible");
    throw EtatRobot_Exception();
}

void EtatRobot::saisir(Objet o) {
    
    majException("Commande impossible");
    throw EtatRobot_Exception();
}

void EtatRobot::poser() {
    
    majException("Commande impossible");
    throw EtatRobot_Exception();
}

int EtatRobot::peser() {
    
    majException("Commande impossible");
    throw EtatRobot_Exception();
}

void EtatRobot::rencontrerPlot(Plot p) {
    
    majException("Commande impossible");
    throw EtatRobot_Exception();
}

int EtatRobot::evaluerPlot() {
    
    majException("Commande impossible");
    throw EtatRobot_Exception();
}

void EtatRobot::figer() {
    
    majException("Commande impossible");
    throw EtatRobot_Exception();
}

void EtatRobot::repartir() {
    
    majException("Commande impossible");
    throw EtatRobot_Exception();
}

std::string EtatRobot::getEtatToString() {
    
    majException("Commande impossible");
    throw EtatRobot_Exception();
}

