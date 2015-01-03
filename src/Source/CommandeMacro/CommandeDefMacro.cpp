#include "../../Header/CommandeMacro/CommandeDefMacro.h"
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
	string macros;
	macros = _invoc->readCommandeFromConsole("Macro Commande", _invoc->getRobot());
	while(CommandeMacro::END_MACRO.compare(macros) != 0 ) {
		_macros.push_back(Commande::nouvelleCommande(macros,_invoc));
		macros = _invoc->readCommandeFromConsole("Macro Commande", _invoc->getRobot());
	}
	cout << "<------------ Fin Macro ------------>" << endl << endl;
}

void CommandeDefMacro::annuler() {
}