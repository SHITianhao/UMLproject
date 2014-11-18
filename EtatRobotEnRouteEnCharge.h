/*
 * EtatRobotEnRouteEnCharge.h
 *
 *  Created on: Nov 7, 2014
 *      Author: sth
 */
#include "EtatRobotEnRout.h"

#ifndef ETATROBOTENROUTEENCHARGE_H_
#define ETATROBOTENROUTEENCHARGE_H_

class EtatRobotEnRouteEnCharge: public EtatRobotEnRout {
public:
	static EtatRobotEnRouteEnCharge instance() {
		if (ETAT_ROBOT_EN_ROUTE_EN_CHARGE == NULL)
			ETAT_ROBOT_EN_ROUTE_EN_CHARGE = new EtatRobotEnRouteEnCharge();
		return ETAT_ROBOT_EN_ROUTE_EN_CHARGE;
	}
	EtatRobot avancer(){
		return EtatRobotEnRouteEnCharge::instance();
	}
	EtatRobot tourner(){
		return EtatRobotEnRouteEnCharge::instance();
	}
	EtatRobot peser(){
		return EtatRobotEnRouteEnCharge::instance();
	}
	EtatRobot rencontrerPlot(){
		return EtatRobotEnRouteEnChargeFacePlot::instance();
	}
protected:
	EtatRobotEnRouteEnCharge() {
	}
private:
	static EtatRobotEnRouteEnCharge ETAT_ROBOT_EN_ROUTE_EN_CHARGE;
};

#endif /* ETATROBOTENROUTEENCHARGE_H_ */
