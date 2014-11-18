/*
 * EtatRobotEnRouteAVideFacePlot.h
 *
 *  Created on: Nov 7, 2014
 *      Author: sth
 */
#include "EtatRobotEnRout.h"
#ifndef ETATROBOTENROUTEAVIDEFACEPLOT_H_
#define ETATROBOTENROUTEAVIDEFACEPLOT_H_

class EtatRobotEnRouteAVideFacePlot : public EtatRobotEnRout{
public:
	static EtatRobotEnRouteAVideFacePlot instance(){
		if(ETAT_ROBOT_EN_ROUTE_AVIDE_FACE_PLOT == NULL)
			ETAT_ROBOT_EN_ROUTE_AVIDE_FACE_PLOT = new EtatRobotEnRouteAVideFacePlot();
		return ETAT_ROBOT_EN_ROUTE_AVIDE_FACE_PLOT;
	}
	EtatRobot evaluerPlot(){
		return EtatRobotEnRouteAVideFacePlot::instance();
	}
	EtatRobot tourner(){
		return EtatRobotEnRouteAVide::instance();
	}
	EtatRobot saisir(){
		return EtatRobotEnRouteEnChargeFacePlot::instance();
	}
protected:
	EtatRobotEnRouteAVideFacePlot(){}
private:
	static EtatRobotEnRouteAVideFacePlot ETAT_ROBOT_EN_ROUTE_AVIDE_FACE_PLOT;
};




#endif /* ETATROBOTENROUTEAVIDEFACEPLOT_H_ */
