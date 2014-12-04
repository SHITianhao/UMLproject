#include "../../Header/Commande/CommandeRencontrerPlot.h"

void CommandeRencontrerPlot::action(){
	_robot->rencontrerPlot(_plot);
}

