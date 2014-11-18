/*
 * EtatRobotEnRouteAVide.h
 *
 *  Created on: Nov 7, 2014
 *      Author: sth
 */
#include "EtatRobotEnRout.h"

#ifndef ETATROBOTENROUTEAVIDE_H_
#define ETATROBOTENROUTEAVIDE_H_

class EtatRobotEnRouteAVide : public EtatRobotEnRout{
public:
	static EtatRobotEnRouteAVide instance(){
		if(ETAT_ROBOT_EN_ROUTE_AVIDE == NULL)
			ETAT_ROBOT_EN_ROUTE_AVIDE = new EtatRobotEnRouteAVide();
		return ETAT_ROBOT_EN_ROUTE_AVIDE;
	}
	EtatRobot avancer(){
		return EtatRobotEnRouteAVide::instance();
	}
	EtatRobot tourner(){
		return EtatRobotEnRouteAVide::instance();
	}
	EtatRobot rencontrerPlot(){
		return EtatRobotEnRouteAVideFacePlot::instance();
	}
protected:
	EtatRobotEnRouteAVide(){}
private:
	static EtatRobotEnRouteAVide ETAT_ROBOT_EN_ROUTE_AVIDE;
};



#endif /* ETATROBOTENROUTEAVIDE_H_ */
