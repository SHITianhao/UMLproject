/*
 * EtatRobotEnRouteAVideFacePlot.h
 *
 *  Created on: Nov 7, 2014
 *      Author: sth
 */

#ifndef ETATROBOTENROUTEAVIDEFACEPLOT_H_
#define ETATROBOTENROUTEAVIDEFACEPLOT_H_
#include "EtatRobotEnRoute.h"

class EtatRobotEnRouteAVideFacePlot: public EtatRobotEnRoute {
private:
	static EtatRobotEnRouteAVideFacePlot* ETAT_ROBOT_EN_ROUTE_AVIDE_FACE_PLOT;
protected:
	EtatRobotEnRouteAVideFacePlot() {
	}
public:
	static EtatRobotEnRouteAVideFacePlot* instance();
	EtatRobot* evaluerPlot();
	EtatRobot* tourner();
	EtatRobot* saisir();

};

#endif /* ETATROBOTENROUTEAVIDEFACEPLOT_H_ */
