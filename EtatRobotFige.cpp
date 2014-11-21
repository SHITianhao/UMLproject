/*
 * EtatRobotFige.cpp
 *
 *  Created on: Nov 21, 2014
 *      Author: sth
 */
#include "EtatRobotFige.h"

EtatRobotFige* EtatRobotFige::ETAT_ROBOT_FIGE = NULL;

EtatRobotFige* EtatRobotFige::instance() {
	if (ETAT_ROBOT_FIGE == NULL)
		ETAT_ROBOT_FIGE = new EtatRobotFige();
	return ETAT_ROBOT_FIGE;
}

EtatRobot* EtatRobotFige::repartir() {
	return NULL;
}

