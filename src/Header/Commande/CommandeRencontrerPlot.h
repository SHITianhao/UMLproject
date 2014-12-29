/*
 * CommandeRencontrerPlot.h
 *
 *  Created on: Nov 27, 2014
 *      Author: sth
 */

#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDERENCONTRERPLOT_H_
#define UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDERENCONTRERPLOT_H_
#include "CommandeRobot.h"

class Plot;

class CommandeRencontrerPlot: public CommandeRobot {
protected:
	static CommandeRencontrerPlot _instance;
	CommandeRencontrerPlot(string nomCommande);
	Plot* _plot;
public:
	CommandeRencontrerPlot(Invocateur* invoc);
	virtual Commande* constructeurVirtuel(Invocateur* invoc);
	virtual void executer();
	virtual void annuler();
};

#endif /* UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDERENCONTRERPLOT_H_ */
