#include "../../Header/Commande/Commande.h"
#include "../../Header/Commande/CommandeAvancer.h"
#include <iostream>

map<string,Commande*> Commande::COMMANDE_INSCRITS;

const char* Commande::Commande_Exception::what() const throw () {
    return "C'est une commande exception.\n";
}

const char* Commande::UnknowCommande_Exception::what() const throw () {
    return "C'est une commande inconnu!\n";
}

const char* Commande::UnvalidCommande_Exception::what() const throw () {
    return "Ce n'est pas une commande valable!\n";
}

Commande::Commande(string nomCommande) {
	COMMANDE_INSCRITS[nomCommande] = this;
}

Commande* Commande::constructeurVirtuel(Invocateur* invocateur){
	throw Commande::UnknowCommande_Exception();
}

Commande* Commande::nouvelleCommande(string nomCommande,Invocateur* invocateur) {
	if (COMMANDE_INSCRITS.find(nomCommande)==COMMANDE_INSCRITS.end())
	{
		throw Commande::UnvalidCommande_Exception();
	}
	return COMMANDE_INSCRITS.at(nomCommande)->constructeurVirtuel(invocateur);
}

void Commande::executer() {
	throw Commande::UnknowCommande_Exception();
}

void Commande::annuler() {
	throw Commande::UnknowCommande_Exception();
}

