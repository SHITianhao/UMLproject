/*
 * CommandePeserOBST.h
 *
 *  Created on: Nov 27, 2014
 *      Author: sth
 */

#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEPESER_H_
#define UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEPESER_H_
#include "CommandeRobot.h"

class CommandePeser: public CommandeRobot {
public:
	virtual void executer();
	virtual void annuler();
};

#endif /* UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEPESER_H_ */
