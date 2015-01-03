#include "../../Header/Commande/Invocateur.h"
#include <stdlib.h>
#include <algorithm>
#include "../../Header/Commande/Commande.h"

Invocateur::Invocateur() {
}

void Invocateur::analyse(string nomCommande, Robot* r) {
	_robot = r;
	try{
		_commande = _commande->nouvelleCommande(nomCommande,this);
		executer();
	} catch(exception& e) {
		majException(nomCommande,e.what());
	}
	
}

void Invocateur::executer() {
	_commande->executer();
}


Robot* Invocateur::getRobot() {
	return _robot;
}

string Invocateur::readCommandeFromConsole(const string message, Robot* r) {
	majTypeGuid(message);
	string nomCommande;
	cin >> nomCommande ;
	std::transform(nomCommande.begin(), nomCommande.end(),nomCommande.begin(), ::toupper);
	return nomCommande;
}
