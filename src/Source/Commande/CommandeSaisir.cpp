#include "../../Header/Commande/CommandeSaisir.h"

CommandeSaisir::CommandeSaisir(Objet o) {
	_objet = o;
}

void CommandeSaisir::action() {
	_robot->saisir(_objet);
}

