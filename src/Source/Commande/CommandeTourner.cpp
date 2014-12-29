#include "../../Header/Commande/CommandeTourner.h"
#include "../../Header/Commande/Invocateur.h"
#include "../../Header/Robot/Robot.h"

CommandeTourner CommandeTourner::_instance("TOURNER");

CommandeTourner::CommandeTourner(string nomCommande) : CommandeRobot(nomCommande) {
	Commande::COMMANDE_INSCRITS[nomCommande] = this;
}

CommandeTourner::CommandeTourner(Invocateur* invoc) : CommandeRobot(invoc->getRobot()) {
	_direction = invoc->readParametreChar();
}

Commande* CommandeTourner::constructeurVirtuel(Invocateur* invoc) {
	return new CommandeTourner(invoc);
}

void CommandeTourner::executer() {
	_robot->tourner(_direction);
}

void CommandeTourner::annuler(){
}