/*
 * EtatRobotEnRout.h
 *
 *  Created on: Nov 7, 2014
 *      Author: sth
 */
#include "EtatRobot.h"
#include "EtatRobotFige.h"

#ifndef ETATROBOTENROUT_H_
#define ETATROBOTENROUT_H_

class EtatRobotEnRout : public EtatRobot {
public:
	EtatRobot figer(){
		return EtatRobotFige::instance();
	}
	EtatRobotEnRout(){}
};



#endif /* ETATROBOTENROUT_H_ */
