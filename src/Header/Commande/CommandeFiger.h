#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEFIGER_H_
#define UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEFIGER_H_
#include "CommandeRobot.h"

class CommandeFiger: public CommandeRobot {
protected:
	static CommandeFiger _instance;
	CommandeFiger(string nomCommande);
public:
	CommandeFiger(Invocateur* invoc);
	virtual Commande* constructeurVirtuel(Invocateur* invoc);
	virtual void executer();
	virtual void annuler();
};

#endif /* UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEFIGER_H_ */
