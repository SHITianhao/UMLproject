/*
 * EtatRobotEnRouteAVideFacePlot.cpp
 *
 *  Created on: Nov 21, 2014
 *      Author: sth
 */

#include "EtatRobotEnRouteAVide.h"
#include "EtatRobotEnRouteEnChargeFacePlot.h"
#include "EtatRobotEnRouteAVideFacePlot.h"

EtatRobotEnRouteAVideFacePlot* EtatRobotEnRouteAVideFacePlot::ETAT_ROBOT_EN_ROUTE_AVIDE_FACE_PLOT = NULL;

EtatRobotEnRouteAVideFacePlot* EtatRobotEnRouteAVideFacePlot::instance() {
	if (ETAT_ROBOT_EN_ROUTE_AVIDE_FACE_PLOT == NULL)
		ETAT_ROBOT_EN_ROUTE_AVIDE_FACE_PLOT =
				new EtatRobotEnRouteAVideFacePlot();
	return ETAT_ROBOT_EN_ROUTE_AVIDE_FACE_PLOT;
}
EtatRobot* EtatRobotEnRouteAVideFacePlot::evaluerPlot() {
	return EtatRobotEnRouteAVideFacePlot::instance();
}
EtatRobot* EtatRobotEnRouteAVideFacePlot::tourner() {
	return EtatRobotEnRouteAVide::instance();
}
EtatRobot* EtatRobotEnRouteAVideFacePlot::saisir() {
	return EtatRobotEnRouteEnChargeFacePlot::instance();
}

