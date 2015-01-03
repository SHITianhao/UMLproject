#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_AVANCER_H_
#define	UMLPROJECT_SRC_HEADER_COMMANDE_AVANCER_H_

#include "CommandeRobot.h"

class Position;

class CommandeAvancer: public CommandeRobot {
protected:
	Position* _position;
	Position* _last_position;
	static CommandeAvancer _instance;
	CommandeAvancer(string nomCommande);
public:
	CommandeAvancer(Invocateur* invoc);
	virtual Commande* constructeurVirtuel(Invocateur* invoc);
	virtual void executer();
	virtual void annuler();
};

#endif

