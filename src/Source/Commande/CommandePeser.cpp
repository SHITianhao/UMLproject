#include "../../Header/Commande/CommandePeser.h"
#include "../../Header/Commande/Invocateur.h"
#include "../../Header/Robot/Robot.h"

CommandePeser CommandePeser::_instance("PESER");

CommandePeser::CommandePeser(string nomCommande) : CommandeRobot(nomCommande) {
	Commande::COMMANDE_INSCRITS[nomCommande] = this;
}

CommandePeser::CommandePeser(Invocateur* invoc) : CommandeRobot(invoc->getRobot()) {
}

Commande* CommandePeser::constructeurVirtuel(Invocateur* invoc) {
	return new CommandePeser(invoc);
}

void CommandePeser::executer() {
	_robot->peser();
}

void CommandePeser::annuler() {
}
