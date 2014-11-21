/*
 * EtatRobotEnRouteEnCharge.h
 *
 *  Created on: Nov 7, 2014
 *      Author: sth
 */

#ifndef ETATROBOTENROUTEENCHARGE_H_
#define ETATROBOTENROUTEENCHARGE_H_
#include "EtatRobotEnRoute.h"

class EtatRobotEnRouteEnCharge: public EtatRobotEnRoute {
private:
	static EtatRobotEnRouteEnCharge* ETAT_ROBOT_EN_ROUTE_EN_CHARGE;
protected:
	EtatRobotEnRouteEnCharge() {
	}
public:
	static EtatRobotEnRouteEnCharge* instance();
	EtatRobot* avancer();
	EtatRobot* tourner();
	EtatRobot* peser();
	EtatRobot* rencontrerPlot();
};

#endif /* ETATROBOTENROUTEENCHARGE_H_ */
