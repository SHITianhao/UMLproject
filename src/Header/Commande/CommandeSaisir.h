/*
 * CommandeSaisir.h
 *
 *  Created on: Nov 27, 2014
 *      Author: sth
 */

#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDESAISIR_H_
#define UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDESAISIR_H_
#include "CommandeRobot.h"

class CommandeSaisir: public CommandeRobot {
protected:
	Objet _objet;
public:
	CommandeSaisir(Objet o);
	virtual void executer();
	virtual void annuler();
};

#endif /* UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDESAISIR_H_ */
