/*
 * EtatRobotEnRouteEnChargeFacePlot.cpp
 *
 *  Created on: Nov 21, 2014
 *      Author: sth
 */

#include "EtatRobotEnRouteAVideFacePlot.h"
#include "EtatRobotEnRouteEnCharge.h"
#include "EtatRobotEnRouteEnChargeFacePlot.h"

EtatRobotEnRouteEnChargeFacePlot* EtatRobotEnRouteEnChargeFacePlot::ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT =
		NULL;

EtatRobotEnRouteEnChargeFacePlot* EtatRobotEnRouteEnChargeFacePlot::instance() {
	if (ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT == NULL)
		ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT =
				new EtatRobotEnRouteEnChargeFacePlot();
	return ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT;
}

EtatRobot* EtatRobotEnRouteEnChargeFacePlot::poser() {
	return EtatRobotEnRouteAVideFacePlot::instance();
}
EtatRobot* EtatRobotEnRouteEnChargeFacePlot::tourner() {
	return EtatRobotEnRouteEnCharge::instance();
}
EtatRobot* EtatRobotEnRouteEnChargeFacePlot::peser() {
	return EtatRobotEnRouteEnChargeFacePlot::instance();
}
