#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEAPPELER_H_
#define UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEAPPELER_H_

#include "CommandeMacro.h"
class CommandeAppeler : public CommandeMacro{
protected:
	static CommandeAppeler _instance;
	CommandeAppeler(string nomCommande);
public:
	CommandeAppeler(Invocateur* invoc);
	virtual Commande* constructeurVirtuel(Invocateur* invoc);
	virtual void executer();
	virtual void annuler();
};



#endif /* UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEAPPELER_H_ */
