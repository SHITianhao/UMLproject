#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEDEFMACRO_H_
#define UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEDEFMACRO_H_

#include "CommandeMacro.h"

class CommandeDefMacro : public CommandeMacro{
protected:
	static CommandeDefMacro _instance;
	CommandeDefMacro(string nomCommande);
public:
	CommandeDefMacro(Invocateur* invoc);
	virtual Commande* constructeurVirtuel(Invocateur* invoc);
	virtual void executer();
	virtual void annuler();
};

#endif /* UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEDEFMACRO_H_ */
