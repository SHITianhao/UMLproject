#ifndef COMMANDE_AFFICHER_H_INCLUDED
#define	COMMANDE_AFFICHER_H_INCLUDED

#include "CommandeRobot.h"

class CommandeAvancer: public CommandeRobot {
protected:
	Position _position;
public:
	CommandeAvancer(Position p);
	virtual void executer();
	virtual void annuler();
};

#endif

