#include "../../Header/Commande/CommandeSaisir.h"
#include "../../Header/Commande/Invocateur.h"
#include "../../Header/Robot/Robot.h"
#include "../../Header/Robot/Objet.h"

CommandeSaisir CommandeSaisir::_instance("SAISIR");

CommandeSaisir::CommandeSaisir(string nomCommande) : CommandeRobot(nomCommande) {
	Commande::COMMANDE_INSCRITS[nomCommande] = this;
}

CommandeSaisir::CommandeSaisir(Invocateur* invoc) : CommandeRobot(invoc->getRobot()) {
	int p = invoc->readParametre<int>();
	_objet = new Objet(p);
}

Commande* CommandeSaisir::constructeurVirtuel(Invocateur* invoc) {
	return new CommandeSaisir(invoc);
}

void CommandeSaisir::executer() {
	_robot->saisir(*_objet);
	Commande::HISTOIRE.push_back(this);
}

void CommandeSaisir::annuler(){
}