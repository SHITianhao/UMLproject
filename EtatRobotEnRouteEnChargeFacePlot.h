/*
 * EtatRobotEnRouteEnChargeFacePlot.h
 *
 *  Created on: Nov 7, 2014
 *      Author: sth
 */
#include "EtatRobotEnRout.h"
#ifndef ETATROBOTENROUTEENCHARGEFACEPLOT_H_
#define ETATROBOTENROUTEENCHARGEFACEPLOT_H_

class EtatRobotEnRouteEnChargeFacePlot : public EtatRobotEnRout{
public:
	static EtatRobotEnRouteEnChargeFacePlot instance(){
		if(ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT == NULL)
			ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT = new EtatRobotEnRouteEnChargeFacePlot();
		return ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT;
	}

	EtatRobot poser(){
		return EtatRobotEnRouteAVideFacePlot::instance();
	}
	EtatRobot tourner(){
		return EtatRobotEnRouteEnCharge::instance();
	}
	EtatRobot peser(){
		return EtatRobotEnRouteEnChargeFacePlot::instance();
	}

protected:
	EtatRobotEnRouteEnChargeFacePlot(){}
private:
	static EtatRobotEnRouteEnChargeFacePlot ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT;
};




#endif /* ETATROBOTENROUTEENCHARGEFACEPLOT_H_ */
