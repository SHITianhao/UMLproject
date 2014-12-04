/*
 * CommandeRencontrerPlot.h
 *
 *  Created on: Nov 27, 2014
 *      Author: sth
 */

#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDERENCONTRERPLOT_H_
#define UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDERENCONTRERPLOT_H_
#include "CommandeRobot.h"

class CommandeRencontrerPlot: public CommandeRobot {
private:
	Plot _plot;
public:
	CommandeRencontrerPlot(Plot p);
	virtual void executer();
	virtual void annuler();
};

#endif /* UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDERENCONTRERPLOT_H_ */
