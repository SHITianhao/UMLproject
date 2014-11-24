#ifndef ROBOT_H_
#define ROBOT_H_

#include "Position.h"
#include "Plot.h"
#include "Objet.h"
#include "../Etat/EtatRobot.h"

using namespace std;


class Robot {
private:
	Position _position;
	Objet _objet;
	char _direction;
	EtatRobot* _etatRobot;
	Plot _plot;
public:
	Robot(Position position = Position(0, 0), char direction = 'N');
	Robot(const Robot& robot);
	~Robot();
	EtatRobot* getEtat();
	void avancer(int x, int y);
	void tourner();
	void saisir(Objet o);
	void poser();
	int peser();
	void rencontrerPlot(Plot p);
	int evaluerPlot();
	void figer();
	void repartir();
	void affichier();
};
#endif /* ROBOT_H_ */
