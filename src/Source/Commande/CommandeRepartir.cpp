#include "../../Header/Commande/CommandeRepartir.h"
#include "../../Header/Commande/Invocateur.h"
#include "../../Header/Robot/Robot.h"

CommandeRepartir CommandeRepartir::_instance("REPARTIR");

CommandeRepartir::CommandeRepartir(string nomCommande) : CommandeRobot(nomCommande) {
	Commande::COMMANDE_INSCRITS[nomCommande] = this;
}

CommandeRepartir::CommandeRepartir(Invocateur* invoc) : CommandeRobot(invoc->getRobot()) {
}

Commande* CommandeRepartir::constructeurVirtuel(Invocateur* invoc) {
	return new CommandeRepartir(invoc);
}

void CommandeRepartir::executer() {
	_robot->repartir();
}

void CommandeRepartir::annuler(){
}