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
	int x = invoc->readParametreInt();
	int y = invoc->readParametreInt();
	_position = new Position(x, y);
}

Commande* CommandeAvancer::constructeurVirtuel(Invocateur* invoc) {
	return new CommandeAvancer(invoc);
}

void CommandeAvancer::executer() {
	_robot->avancer(_position->getX(), _position->getY());
}

void CommandeAvancer::annuler() {
}
