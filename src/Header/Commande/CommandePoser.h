#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEPOSER_H_
#define UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEPOSER_H_
#include "CommandeRobot.h"

class CommandePoser: public CommandeRobot {
protected:
	static CommandePoser _instance;
	CommandePoser(string nomCommande);
public:
	CommandePoser(Invocateur* invoc);
	virtual Commande* constructeurVirtuel(Invocateur* invoc);
	virtual void executer();
	virtual void annuler();
};

#endif /* UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEPOSER_H_ */
