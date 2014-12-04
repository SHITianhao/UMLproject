#include "../../Header/Robot/Robot.h"
#include "../../Header/Etat/EtatRobotEnRouteAVide.h"
#include "../../Header/Etat/EtatRobotFige.h"

Robot::Robot(Position position, char direction) :
		_position(position), _direction(direction), _objet(), _plot() {
	_etatRobot = EtatRobotEnRouteAVide::instance();
}

Robot::Robot(const Robot& r) :
		_position(r._position), _direction(r._direction), _objet(r._objet), _plot(
				r._plot), _etatRobot(r._etatRobot) {
}

Robot::~Robot() {
}

EtatRobot* Robot::getEtat() {
	return _etatRobot;
}

void Robot::avancer(int x, int y) {
	try {
		_etatRobot = _etatRobot->avancer();
		_position.setX(x);
		_position.setY(y);
		maj("AVANCER");
	} catch (exception& e) {
		majException("AVANCER", e.what());
	}
}

void Robot::tourner(char d) {
	try {
		_etatRobot = _etatRobot->tourner();
		_direction = d;
		maj("TOURNER");
	} catch (exception& e) {
		majException("TOURNER", e.what());
	}
}

void Robot::saisir(Objet o) {
	try {
		_etatRobot = _etatRobot->saisir();
		_objet = o;
		maj("SAISIR");
	} catch (exception& e) {
		majException("SAISIR", e.what());
	}
}

void Robot::poser() {
	try {
		_etatRobot = _etatRobot->poser();
		_objet = 0;
		maj("POSER");
	} catch (exception& e) {
		majException("POSER", e.what());
	}
}

int Robot::peser() {
	try {
		_etatRobot = _etatRobot->peser();
		maj("PESER");
		return _objet.getPoids();
	} catch (exception& e) {
		majException("PESER", e.what());
		return -1;
	}
}

void Robot::rencontrerPlot(Plot p) {
	try {
		_etatRobot = _etatRobot->rencontrerPlot();
		_plot = p;
		maj("RENCONTRER PLOT");
	} catch (exception& e) {
		majException("RENCONTRER PLOT", e.what());
	}

}

int Robot::evaluerPlot() {
	try {
		_etatRobot = _etatRobot->evaluerPlot();
		maj("EVALUER PLOT");
		return _plot.getHauteur();
	} catch (exception& e) {
		majException("EVALUER PLOT", e.what());
		return -1;
	}

}

void Robot::figer() {
	try {
		_etatRobot = _etatRobot->figer(this);
		maj("FIGER");
	} catch (exception& e) {
		majException("FIGER", e.what());
	}
}

void Robot::repartir() {
	try {
		_etatRobot = _etatRobot->repartir(this);
		maj("REPARTIR");
	} catch (exception& e) {
		majException("REPARTIR", e.what());
	}
}

/**
 *      GETTERS AND SETTERS 
 */

Position Robot::getPosition() {
	return _position;
}

Plot Robot::getPlot() const {
	return _plot;
}

Objet Robot::getObjet() const {
	return _objet;
}

char Robot::getDirection() {
	return _direction;
}

