#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_MACRO_H_
#define	UMLPROJECT_SRC_HEADER_COMMANDE_MACRO_H_

#include "Commande.h"
#include <list>
#include <string>

class CommandeMacro : public Commande{
protected:
	Invocateur* _invoc;
	static list<string> _macros;
	CommandeMacro(string nomCommande);
	static string END_MACRO;
public:
	CommandeMacro(Invocateur* invoc = 0);
	virtual Commande* constructeurVirtuel(Invocateur* invocateur);
	virtual void executer();
	virtual void annuler();

};

#endif