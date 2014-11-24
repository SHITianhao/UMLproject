#include "../../Header/Etat/EtatRobot.h"

EtatRobot* EtatRobot::avancer() {
    throw EtatRobot::EtatRobot_Exception();
}

EtatRobot* EtatRobot::tourner() {
    throw EtatRobot::EtatRobot_Exception();
}

EtatRobot* EtatRobot::saisir() {
    throw EtatRobot::EtatRobot_Exception();
}

EtatRobot* EtatRobot::poser() {
    throw EtatRobot::EtatRobot_Exception();
}

EtatRobot* EtatRobot::peser() {
    throw EtatRobot::EtatRobot_Exception();
}

EtatRobot* EtatRobot::rencontrerPlot() {
    throw EtatRobot::EtatRobot_Exception();
}

EtatRobot* EtatRobot::evaluerPlot() {
    throw EtatRobot::EtatRobot_Exception();
}

EtatRobot* EtatRobot::figer(Robot* robot) {
    throw EtatRobot::EtatRobot_Exception();
}

EtatRobot* EtatRobot::repartir(Robot* robot) {
    throw EtatRobot::EtatRobot_Exception();
}

string EtatRobot::toString() {
    return "Vous êtes dans état robot.\n";
}

const char* EtatRobot::EtatRobot_Exception::what() const throw () {
    return "vous ne pouvez pas effectuer cette action dans l'état actuel.\n";
}

