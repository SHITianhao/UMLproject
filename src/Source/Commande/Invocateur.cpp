#include "../../Header/Commande/Invocateur.h"
#include <stdlib.h>
#include <algorithm>

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

int Invocateur::readParametreInt() {
	int p;
	majTypeGuid("parametre");
	if(cin >> p)
		return p;
	return 0;
}

char Invocateur::readParametreChar() {
	char d;
	majTypeGuid("parametre");
	if(cin >> d)
		return d;
	return '\0';
}

Robot* Invocateur::getRobot() {
	return _robot;
}

void Invocateur::readCommandeFromConsole(Robot* r) {
	majTypeGuid("commande");
	string nomCommande;
	cin >> nomCommande ;
	std::transform(nomCommande.begin(), nomCommande.end(),nomCommande.begin(), ::toupper);
	analyse(nomCommande,r);
}
