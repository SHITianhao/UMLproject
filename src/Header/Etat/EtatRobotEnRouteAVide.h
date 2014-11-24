#ifndef ETAT_ROBOT_EN_ROUTE_A_VIDE_H_INCLUDED
#define ETAT_ROBOT_EN_ROUTE_A_VIDE_H_INCLUDED

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
	string toString();
};

#endif
