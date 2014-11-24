#include "../../Header/Etat/EtatRobot.h"

EtatRobot::EtatRobot(Robot* r) : robot(r) {
}

EtatRobot::~EtatRobot() {
}

void EtatRobot::avancer(int x, int y) {
    throw Commande_Invalide();
}

void EtatRobot::tourner() {
    throw Commande_Invalide();
}

void EtatRobot::saisir(const Objet& o) {
    throw Commande_Invalide();
}

void EtatRobot::poser() {
    throw Commande_Invalide();
}

int EtatRobot::peser() {
    throw Commande_Invalide();
}

void EtatRobot::rencontrerPlot(const Plot& p) {
    throw Commande_Invalide();
}

int EtatRobot::evaluerPlot() {
    throw Commande_Invalide();
}

void EtatRobot::figer() {
    throw Commande_Invalide();
}

void EtatRobot::repartir() {
    throw Commande_Invalide();
}

const char* EtatRobot::Commande_Invalide::what()  const throw(){
	return "Commande impossible.\n";
}

std::string EtatRobot::getEtatToString() { 
    throw Commande_Invalide();
}

