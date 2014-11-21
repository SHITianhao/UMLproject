/*
 * EtatRobotEnRoute.h
 *
 *  Created on: Nov 7, 2014
 *      Author: sth
 */

#ifndef ETATROBOTENROUTE_H_
#define ETATROBOTENROUTE_H_
#include "EtatRobot.h"

class EtatRobotEnRoute: public EtatRobot {
public:
	EtatRobotEnRoute();
	~EtatRobotEnRoute();
	EtatRobot* figer();
	void afficher();
};

#endif /* ETATROBOTENROUTE_H_ */
