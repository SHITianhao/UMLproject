#ifndef ETATROBOTENROUTEAVIDEFACEPLOT_H_
#define ETATROBOTENROUTEAVIDEFACEPLOT_H_

#include "EtatRobotEnRoute.h"

class EtatRobotEnRouteAVideFacePlot: public EtatRobotEnRoute {
private:
	static EtatRobotEnRouteAVideFacePlot* ETAT_ROBOT_EN_ROUTE_AVIDE_FACE_PLOT;
protected:

	EtatRobotEnRouteAVideFacePlot();
public:

	~EtatRobotEnRouteAVideFacePlot();
	static EtatRobotEnRouteAVideFacePlot* instance();
	EtatRobot* evaluerPlot();
	EtatRobot* tourner();
	EtatRobot* saisir();
	virtual string toString();

};

#endif
