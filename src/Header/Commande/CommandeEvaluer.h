#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEEVALUER_H_
#define UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEEVALUER_H_
#include "CommandeRobot.h"

class CommandeEvaluer: public CommandeRobot {
protected:
	static CommandeEvaluer _instance;
	CommandeEvaluer(string nomCommande);
public:
	CommandeEvaluer(Invocateur* invoc);
	virtual Commande* constructeurVirtuel(Invocateur* invoc);
	virtual void executer();
	virtual void annuler();
};

#endif /* UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEEVALUER_H_ */
