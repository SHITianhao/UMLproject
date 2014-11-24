#include "../../Header/Robot/Robot.h"
#include "../../Header/Etat/EtatRobotEnRouteAVide.h"
#include "../../Header/Etat/EtatRobotFige.h"

using namespace std;

Robot::Robot(Position position, char direction) :
		_position(position), _direction(direction) {
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
	} catch (exception& e) {
		cerr << e.what();
	}
	_position.setX(x);
	_position.setY(y);
}

void Robot::tourner() {
	try {
		_etatRobot = _etatRobot->tourner();
	} catch (exception& e) {
		cerr << e.what();
	}
	switch (_direction) {
	case 'N':
		_direction = 'E';
		break;
	case 'E':
		_direction = 'S';
		break;
	case 'S':
		_direction = 'O';
		break;
	case 'O':
		_direction = 'N';
		break;
	}
}

void Robot::saisir(Objet o) {
	try {
		_etatRobot = _etatRobot->saisir();
		_objet = o;
	} catch (exception& e) {
		cerr << e.what();
	}
}

void Robot::poser() {
	try {
		_etatRobot = _etatRobot->poser();
		_objet = 0;
	} catch (exception& e) {
		cerr << e.what();
	}
}

int Robot::peser() {
	try {
		_etatRobot = _etatRobot->peser();
		return _objet.getPoids();
	} catch (exception& e) {
		cerr << e.what();
		return -1;
	}
}

void Robot::rencontrerPlot(Plot p) {
	try {
		_etatRobot = _etatRobot->rencontrerPlot();
		_plot = p;
	} catch (exception& e) {
		cerr << e.what();
	}

}

int Robot::evaluerPlot() {
	try {
		_etatRobot = _etatRobot->evaluerPlot();
		return _plot.getHauteur();
	} catch (exception& e) {
		cerr << e.what();
		return -1;
	}

}

void Robot::figer() {
	try {
		_etatRobot = _etatRobot->figer(this);
	} catch (exception& e) {
		cerr << e.what();
	}
}

void Robot::repartir() {
	try {
		_etatRobot = _etatRobot->repartir(this);
	} catch (exception& e) {
		cerr << e.what();
	}
}

void Robot::affichier() {
	cout << _etatRobot->toString();
	cout << "x:" << _position.getX() << endl;
	cout << "y:" << _position.getY() << endl;
	cout << "direction:" << _direction << endl;
	cout << "object poids:" << _objet.getPoids() << endl;
	cout << "/****END****/" << endl;
}
