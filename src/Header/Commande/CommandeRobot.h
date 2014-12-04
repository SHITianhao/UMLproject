/*
 * CommandeRobot.h
 *
 *  Created on: Dec 4, 2014
 *      Author: sth
 */

#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEROBOT_H_
#define UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEROBOT_H_
#include "Commande.h"
#include "../Robot/Robot.h"

class CommandeRobot: public Commande {
protected:
	Robot* _robot;
	CommandeRobot(Robot*);
public:
	virtual void executer();
	virtual void annuler();
};



#endif /* UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEROBOT_H_ */
