#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEPESER_H_
#define UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEPESER_H_
#include "CommandeRobot.h"

class CommandePeser: public CommandeRobot {
protected:
	static CommandePeser _instance;
	CommandePeser(string nomCommande);
public:
	CommandePeser(Invocateur* invoc);
	virtual Commande* constructeurVirtuel(Invocateur* invoc);
	virtual void executer();
	virtual void annuler();
};

#endif /* UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEPESER_H_ */
