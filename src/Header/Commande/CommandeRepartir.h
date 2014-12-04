/*
 * CommandeRepartir.h
 *
 *  Created on: Dec 4, 2014
 *      Author: sth
 */

#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEREPARTIR_H_
#define UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEREPARTIR_H_
#include "CommandeRobot.h"

class CommandeRepartir: public CommandeRobot {
public:
	virtual void executer();
	virtual void annuler();
};

#endif /* UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEREPARTIR_H_ */
