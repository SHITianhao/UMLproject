#include "../../Header/Commande/CommandeRencontrerPlot.h"
#include "../../Header/Commande/Invocateur.h"
#include "../../Header/Robot/Robot.h"
#include "../../Header/Robot/Plot.h"

CommandeRencontrerPlot CommandeRencontrerPlot::_instance("RENCONTRERPLOT");

CommandeRencontrerPlot::CommandeRencontrerPlot(string nomCommande) : CommandeRobot(nomCommande) {
	Commande::COMMANDE_INSCRITS[nomCommande] = this;
}

CommandeRencontrerPlot::CommandeRencontrerPlot(Invocateur* invoc) : CommandeRobot(invoc->getRobot()) {
	int h = invoc->readParametreInt();
	_plot = new Plot(h);
}

Commande* CommandeRencontrerPlot::constructeurVirtuel(Invocateur* invoc) {
	return new CommandeRencontrerPlot(invoc);
}

void CommandeRencontrerPlot::executer(){
	_robot->rencontrerPlot(*_plot);
}

void CommandeRencontrerPlot::annuler(){
}