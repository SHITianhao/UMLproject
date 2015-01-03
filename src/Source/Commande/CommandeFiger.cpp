#include "../../Header/Commande/CommandeFiger.h"
#include "../../Header/Commande/Invocateur.h"
#include "../../Header/Robot/Robot.h"

CommandeFiger CommandeFiger::_instance("FIGER");

CommandeFiger::CommandeFiger(string nomCommande) : CommandeRobot(nomCommande) {
	Commande::COMMANDE_INSCRITS[nomCommande] = this;
}

CommandeFiger::CommandeFiger(Invocateur* invoc) : CommandeRobot(invoc->getRobot()) {
}

Commande* CommandeFiger::constructeurVirtuel(Invocateur* invoc) {
	return new CommandeFiger(invoc);
}

void CommandeFiger::executer() {
	_robot->figer();
	Commande::HISTOIRE.push_back(this);
}

void CommandeFiger::annuler(){
	_robot->repartir();
}
