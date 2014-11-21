/*
 * EtatRobotFige.h
 *
 *  Created on: Nov 7, 2014
 *      Author: sth
 */
#include "EtatRobot.h"
#ifndef ETATROBOTFIGE_H_
#define ETATROBOTFIGE_H_


class EtatRobotFige: public EtatRobot {
private:
	static EtatRobotFige* ETAT_ROBOT_FIGE;
protected:
	EtatRobotFige() {}
public:
	~EtatRobotFige(){}
	static EtatRobotFige* instance();
	EtatRobot* repartir();
	void afficher();
};

#endif /* ETATROBOTFIGE_H_ */
