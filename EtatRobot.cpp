/*
 * EtatRobot.cpp
 *
 *  Created on: Nov 21, 2014
 *      Author: sth
 */
#include "EtatRobot.h"

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
EtatRobot* EtatRobot::figer() {
	throw EtatRobot::EtatRobot_Exception();
}
EtatRobot* EtatRobot::repartir() {
	throw EtatRobot::EtatRobot_Exception();
}
void EtatRobot::afficher() {
	cout<<"this is etat robot"<<endl;
}

