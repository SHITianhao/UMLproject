#include "../../Header/Commande/CommandeMacro.h"
#include "../../Header/Commande/Invocateur.h"

string CommandeMacro::END_MACRO = "FINMACRO";
list<string> CommandeMacro::_macros;

CommandeMacro::CommandeMacro(string nomCommande) : Commande(nomCommande) {
}

CommandeMacro::CommandeMacro(Invocateur* invoc): _invoc(invoc){
}

Commande* CommandeMacro::constructeurVirtuel(Invocateur* invoc) {
	return new CommandeMacro(invoc);
}

void CommandeMacro::executer() {
	string commande;
	while(!_macros.empty())
	{
		commande = _macros.front();
		_macros.pop_front();
		cout << "|  Commande executé : " << commande << endl;
		_invoc->analyse(commande,_invoc->getRobot());
	}
}

void CommandeMacro::annuler() {
}