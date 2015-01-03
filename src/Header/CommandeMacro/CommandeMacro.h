#ifndef UMLPROJECT_SRC_HEADER_COMMANDEMACRO_MACRO_H_
#define	UMLPROJECT_SRC_HEADER_COMMANDEMACRO_MACRO_H_

#include "../Commande/Commande.h"
#include <list>
#include <string>

class CommandeMacro : public Commande{
protected:
	Invocateur* _invoc;
	static list<Commande*> _macros;
	CommandeMacro(string nomCommande);
	static string END_MACRO;
public:
	CommandeMacro(Invocateur* invoc = 0);
	virtual Commande* constructeurVirtuel(Invocateur* invocateur);
	virtual void executer();
	virtual void annuler();

};

#endif