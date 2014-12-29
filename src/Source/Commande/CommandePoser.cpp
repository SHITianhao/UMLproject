#include "../../Header/Commande/CommandePoser.h"
#include "../../Header/Commande/Invocateur.h"
#include "../../Header/Robot/Robot.h"

CommandePoser CommandePoser::_instance("POSER");

CommandePoser::CommandePoser(string nomCommande) : CommandeRobot(nomCommande) {
	Commande::COMMANDE_INSCRITS[nomCommande] = this;
}

CommandePoser::CommandePoser(Invocateur* invoc) : CommandeRobot(invoc->getRobot()) {
}

Commande* CommandePoser::constructeurVirtuel(Invocateur* invoc) {
	return new CommandePoser(invoc);
}

void CommandePoser::executer() {
	_robot->poser();
}

void CommandePoser::annuler() {
}

