#include "Robot.h"
#include "EtatRobotEnRouteAVideFacePlot.h"

using namespace std;

EtatRobot* Robot::ETAT_ROBOT = NULL;
EtatRobot* Robot::getEtat() {
	return ETAT_ROBOT;
}

Robot::Robot(Position position, char direction) :
		position(position), direction(direction) {
	if (NULL == ETAT_ROBOT)
		ETAT_ROBOT = EtatRobotEnRouteAVideFacePlot::instance();
}

void Robot::avancer(int x, int y) {
	try{
		ETAT_ROBOT = ETAT_ROBOT->avancer();
	}
	catch(EtatRobot::EtatRobot_Exception e){
		cerr<<"you cannot do this action in this etat"<<endl;
	}
	position.setX(position.getX()+x);
	position.setY(position.getY()+y);
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
}

void Robot::saisir(Objet o) {
	if (ETAT_ROBOT->saisir() != NULL) {
		objet = o;
	}
}

void Robot::poser() {

}

int Robot::peser() {
	ETAT_ROBOT = ETAT_ROBOT->peser();
	return objet.getPoids();
}

void Robot::rencontrerPlot(Plot p) {
	ETAT_ROBOT = ETAT_ROBOT->rencontrerPlot();
}

int Robot::evaluerPlot() {
	return 0;
}

void Robot::figer() {

}

void Robot::repartir() {

}

void Robot::affichier() {
	cout<<"x:"<<position.getX()<<endl;
	cout<<"y:"<<position.getY()<<endl;
}
