#ifndef COMMANDE_AFFICHER_H_INCLUDED
#define	COMMANDE_AFFICHER_H_INCLUDED

#include "CommandeRobot.h"

class CommandeAvancer: public CommandeRobot {
protected:
	Position _position;
	static CommandeAvancer _instance;
public:
	CommandeAvancer(string nomCommande);
	CommandeAvancer(Invocateur* invoc);
	virtual Commande constructeurVirtuel(Invocateur* invoc);
	virtual void executer();
	virtual void annuler();
};

#endif

