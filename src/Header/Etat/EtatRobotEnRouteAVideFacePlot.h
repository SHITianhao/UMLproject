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
	~EtatRobotEnRouteAVideFacePlot(){}
	static EtatRobotEnRouteAVideFacePlot* instance();
	EtatRobot* evaluerPlot();
	EtatRobot* tourner();
	EtatRobot* saisir();
	void afficher();

};

#endif /* ETATROBOTENROUTEAVIDEFACEPLOT_H_ */
