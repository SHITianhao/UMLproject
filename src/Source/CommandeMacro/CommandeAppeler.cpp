#include "../../Header/CommandeMacro/CommandeAppeler.h"
#include "../../Header/Commande/Invocateur.h"

CommandeAppeler CommandeAppeler::_instance("APPELER");

CommandeAppeler::CommandeAppeler(string nomCommande) : CommandeMacro(nomCommande) {
	Commande::COMMANDE_INSCRITS[nomCommande] = this;
}

CommandeAppeler::CommandeAppeler(Invocateur* invoc) : CommandeMacro(invoc) {
}

Commande* CommandeAppeler::constructeurVirtuel(Invocateur* invoc) {
	return new CommandeAppeler(invoc);
}

void CommandeAppeler::executer() {
	string nomMacro;
	nomMacro = _invoc->readCommandeFromConsole("Nom De Macro Appelé", _invoc->getRobot());
	if (COMMANDE_INSCRITS.find(nomMacro)==COMMANDE_INSCRITS.end())
	{
		throw Commande::UnvalidCommande_Exception();
	}
	cout << endl << "<------------ " << nomMacro << " Macro Executer ------------>" << endl;
	Commande::COMMANDE_INSCRITS[nomMacro]->executer();
	cout << "<------------ Fin " << nomMacro << " Macro Executer ------------>" << endl << endl;
}

void CommandeAppeler::annuler() {
}