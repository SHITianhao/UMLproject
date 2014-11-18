/*
 * EtatRobotFige.h
 *
 *  Created on: Nov 7, 2014
 *      Author: sth
 */
#include "EtatRobot.h"

#ifndef ETATROBOTFIGE_H_
#define ETATROBOTFIGE_H_

class EtatRobotFige : public EtatRobot {
public:
	static EtatRobotFige instance(){
		if(ETAT_ROBOT_FIGE==NULL)
			ETAT_ROBOT_FIGE = new EtatRobotFige();
		return ETAT_ROBOT_FIGE;
	}

	EtatRobot repartir(){
		return currentEtat;
	}
protected:
	EtatRobotFige(){}
private:
	static EtatRobotFige ETAT_ROBOT_FIGE;
	EtatRobotEnRout currentEtat;
};


#endif /* ETATROBOTFIGE_H_ */
