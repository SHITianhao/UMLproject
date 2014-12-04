#include "../../Header/Commande/CommandeAvancer.h"

CommandeAvancer::CommandeAvancer(Position p) {
	_position = p;
}

void CommandeAvancer::executer() {
	_robot->avancer(_position.getX(), _position.getY());
}

void CommandeAvancer::annuler() {}
