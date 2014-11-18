#include "Robot.h"
#include "Position.h"
#include "Objet.h"
#include "Plot.h"
#include "EtatRobot.h"

using namespace std;

Robot::Robot(Position position, char direction) : position(position), direction(direction) {
	etatRobot = new EtatRobot();
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