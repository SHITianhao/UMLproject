#include "../../Header/Commande/Commande.h"

map<string,Commande*> Commande::COMMANDE_INSCRITS = new map<string,Commande*>();

const char* Commande::Commande_Exception::what() const throw () {
    return "C'est une commande exception.\n";
}

Commande::Commande(string nomCommande) {
	COMMANDE_INSCRITS[nomCommande] = this;
}

Commande Commande::nouvelleCommande(string nomCommande,Invocateur* invocateur) {
	return COMMANDE_INSCRITS[nomCommande]->constructeurVirtuel(invocateur);
}
