/*
 * EtatRobotEnRouteAVide.h
 *
 *  Created on: Nov 7, 2014
 *      Author: sth
 */
#ifndef ETATROBOTENROUTEAVIDE_H_
#define ETATROBOTENROUTEAVIDE_H_

#include "EtatRobotEnRoute.h"

class EtatRobotEnRouteAVide: public EtatRobotEnRoute {
private:
	static EtatRobotEnRouteAVide* ETAT_ROBOT_EN_ROUTE_AVIDE;
protected:
	EtatRobotEnRouteAVide();
public:
	~EtatRobotEnRouteAVide();
	static EtatRobotEnRouteAVide* instance();
	EtatRobot* avancer();
	EtatRobot* tourner();
	EtatRobot* rencontrerPlot();
	void afficher();
};

#endif /* ETATROBOTENROUTEAVIDE_H_ */
