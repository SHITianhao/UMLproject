#include "../../Header/Commande/CommandeAvancer.h"

CommandeAvancer _instance("AVANCER");

CommandeAvancer::CommandeAvancer(string nomCommande) {
}

CommandeAvancer::CommandeAvancer(Invocateur* invoc) {
	int x = invoc->getParametres()[0];
	int y = invoc->getParametres()[1];
	_position = new Position(x, y);
}

Commande CommandeAvancer::constructeurVirtuel(Invocateur* invoc) {
	return new CommandeAvancer(invoc);
}

void CommandeAvancer::executer() {
	_robot->avancer(_position.getX(), _position.getY());
}

void CommandeAvancer::annuler() {
}
