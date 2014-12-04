/*
 * CommandeSaisir.h
 *
 *  Created on: Nov 27, 2014
 *      Author: sth
 */

#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDESAISIR_H_
#define UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDESAISIR_H_
#include "Commande.h"

class CommandeSaisir: public Commande {
public:
	virtual void action();
};

#endif /* UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDESAISIR_H_ */
