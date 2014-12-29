#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDESAISIR_H_
#define UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDESAISIR_H_
#include "CommandeRobot.h"

class Objet;

class CommandeSaisir: public CommandeRobot {
protected:
	static CommandeSaisir _instance;
	CommandeSaisir(string nomCommande);
	Objet* _objet;
public:
	CommandeSaisir(Invocateur* invoc);
	virtual Commande* constructeurVirtuel(Invocateur* invoc);
	virtual void executer();
	virtual void annuler();
};

#endif /* UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDESAISIR_H_ */
