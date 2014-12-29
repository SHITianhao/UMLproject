#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEREPARTIR_H_
#define UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEREPARTIR_H_
#include "CommandeRobot.h"

class CommandeRepartir: public CommandeRobot {
protected:
	static CommandeRepartir _instance;
	CommandeRepartir(string nomCommande);
public:
	CommandeRepartir(Invocateur* invoc);
	virtual Commande* constructeurVirtuel(Invocateur* invoc);
	virtual void executer();
	virtual void annuler();
};

#endif /* UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEREPARTIR_H_ */
