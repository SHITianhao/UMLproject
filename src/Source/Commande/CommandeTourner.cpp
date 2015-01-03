#include "../../Header/Commande/CommandeTourner.h"
#include "../../Header/Commande/Invocateur.h"
#include "../../Header/Robot/Robot.h"

CommandeTourner CommandeTourner::_instance("TOURNER");

CommandeTourner::CommandeTourner(string nomCommande) : CommandeRobot(nomCommande) {
	Commande::COMMANDE_INSCRITS[nomCommande] = this;
}

CommandeTourner::CommandeTourner(Invocateur* invoc) : CommandeRobot(invoc->getRobot()) {
	_direction = invoc->readParametre<char>();
}

Commande* CommandeTourner::constructeurVirtuel(Invocateur* invoc) {
	return new CommandeTourner(invoc);
}

void CommandeTourner::executer() {
	_robot->tourner(_direction);
	_last_direction = _direction;
	Commande::HISTOIRE.push_back(this);
}

void CommandeTourner::annuler(){
	_robot->tourner(_last_direction);
}