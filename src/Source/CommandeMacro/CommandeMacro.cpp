#include "../../Header/CommandeMacro/CommandeMacro.h"
#include "../../Header/Commande/Invocateur.h"

string CommandeMacro::END_MACRO = "FINMACRO";
list<Commande*> CommandeMacro::_macros;

CommandeMacro::CommandeMacro(string nomCommande) : Commande(nomCommande) {
}

CommandeMacro::CommandeMacro(Invocateur* invoc): _invoc(invoc){
}

Commande* CommandeMacro::constructeurVirtuel(Invocateur* invoc) {
	return new CommandeMacro(invoc);
}

void CommandeMacro::executer() {
	Commande* commande;
	while(!_macros.empty())
	{
		commande = _macros.front();
		_macros.pop_front();
		commande->executer();
	}
}

void CommandeMacro::annuler() {
}