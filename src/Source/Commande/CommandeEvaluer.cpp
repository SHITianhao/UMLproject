#include "../../Header/Commande/CommandeEvaluer.h"
#include "../../Header/Commande/Invocateur.h"
#include "../../Header/Robot/Robot.h"

CommandeEvaluer CommandeEvaluer::_instance("EVALUER");

CommandeEvaluer::CommandeEvaluer(string nomCommande) : CommandeRobot(nomCommande) {
	Commande::COMMANDE_INSCRITS[nomCommande] = this;
}

CommandeEvaluer::CommandeEvaluer(Invocateur* invoc) : CommandeRobot(invoc->getRobot()) {
}

Commande* CommandeEvaluer::constructeurVirtuel(Invocateur* invoc) {
	return new CommandeEvaluer(invoc);
}

void CommandeEvaluer::executer() {
	_robot->evaluerPlot();
	Commande::HISTOIRE.push_back(this);
}

void CommandeEvaluer::annuler(){
}