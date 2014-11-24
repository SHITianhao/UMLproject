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

<<<<<<< HEAD
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
=======
EtatRobot* EtatRobot::figer(Robot* robot) {
    throw EtatRobot::EtatRobot_Exception();
}

EtatRobot* EtatRobot::repartir(Robot* robot) {
    throw EtatRobot::EtatRobot_Exception();
}

void EtatRobot::afficher() {
    cout << "Vous êtes dans état robot." << endl;
}

const char* EtatRobot::EtatRobot_Exception::what()  const throw(){
	return "vous ne pouvez pas effectuer cette action dans l'état actuel.\n";
>>>>>>> origin/robot
}

