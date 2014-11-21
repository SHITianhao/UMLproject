#include "Robot.h"


using namespace std;

EtatRobot* Robot::ETAT_ROBOT = NULL;

Robot::Robot(Position position, char direction) : position(position), direction(direction) {
	if(NULL == ETAT_ROBOT )
				ETAT_ROBOT = new EtatRobot();
}

void Robot::avancer(int x, int y) {
	position.setX(x);
	position.setY(y);
}

void Robot::tourner() {
	switch(direction) {
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

}

void Robot::poser() {

}

int Robot::peser() {
	return 0;
}

void Robot::rencontrerPlot(Plot p) {

}

int Robot::evaluerPlot() {
	return 0;
}

void Robot::figer() {

}

void Robot::repartir() {

}

void Robot::affichier() {

}
