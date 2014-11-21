/*
 * Robot.h
 *
 *  Created on: Nov 7, 2014
 *      Author: sth
 */

#ifndef ROBOT_H_
#define ROBOT_H_

#include "Position.h"
#include "Plot.h"
#include "Objet.h"
#include "../Etat/EtatRobot.h"

using namespace std;

class Robot
{
private:
	Position position;
	Objet objet;
	char direction;
	static EtatRobot* ETAT_ROBOT;
public:
	Robot(Position position = Position(0, 0), char direction = 'N');
	static EtatRobot* getEtat();
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
