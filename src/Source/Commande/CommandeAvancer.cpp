#include "../../Header/Commande/CommandeAvancer.h"
#include "../../Header/Commande/Commande.h"
#include "../../Header/Commande/Invocateur.h"
#include "../../Header/Robot/Position.h"
#include "../../Header/Robot/Robot.h"

CommandeAvancer CommandeAvancer::_instance("AVANCER");

CommandeAvancer::CommandeAvancer(string nomCommande) : CommandeRobot(nomCommande) {
	Commande::COMMANDE_INSCRITS[nomCommande] = this;
}

CommandeAvancer::CommandeAvancer(Invocateur* invoc) : CommandeRobot(invoc->getRobot()) {
	int x = invoc->readParametre<int>();
	int y = invoc->readParametre<int>();
	_position = new Position(x, y);
}

Commande* CommandeAvancer::constructeurVirtuel(Invocateur* invoc) {
	return new CommandeAvancer(invoc);
}

void CommandeAvancer::executer() {
	_robot->avancer(_position->getX(), _position->getY());
	_last_position = _position;
	Commande::HISTOIRE.push_back(this);
}

void CommandeAvancer::annuler() {
	_robot->avancer(_last_position->getX(), _last_position->getY());
}
