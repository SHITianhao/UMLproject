#include "../../Header/Commande/CommandeDefMacro.h"
#include "../../Header/Commande/Invocateur.h"

CommandeDefMacro CommandeDefMacro::_instance("DEFMACRO");

CommandeDefMacro::CommandeDefMacro(string nomCommande) : CommandeMacro(nomCommande) {
	Commande::COMMANDE_INSCRITS[nomCommande] = this;
}

CommandeDefMacro::CommandeDefMacro(Invocateur* invoc) : CommandeMacro(invoc) {
}

Commande* CommandeDefMacro::constructeurVirtuel(Invocateur* invoc) {
	return new CommandeDefMacro(invoc);
}

void CommandeDefMacro::executer() {
	string nomMacro;
	cout << endl << "<------------ Start Macro ------------>" << endl;
	nomMacro = _invoc->readCommandeFromConsole("Nom De Macro", _invoc->getRobot());
	Commande::COMMANDE_INSCRITS[nomMacro] = new CommandeMacro(_invoc);
	CommandeMacro::END_MACRO = false;
	string macros;
	macros = _invoc->readCommandeFromConsole("Macro Commande", _invoc->getRobot());
	while("FINMACRO" != macros ) {
		_macros.push_back(macros);
		macros = _invoc->readCommandeFromConsole("Macro Commande", _invoc->getRobot());
	}
	cout << "<------------ Fin Macro ------------>" << endl << endl;
}

void CommandeDefMacro::annuler() {
}