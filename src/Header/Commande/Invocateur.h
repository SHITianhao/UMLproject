/*
 * Parse.h
 *
 *  Created on: Dec 4, 2014
 *      Author: sth
 */

#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_INVOCATEUR_H_
#define UMLPROJECT_SRC_HEADER_COMMANDE_INVOCATEUR_H_
#include <string>
#include "Commande.h"
#include "../Affichage/Observable.h"

using namespace std;

class Robot;

class Invocateur : public Observable {
private:
	Commande* _commande;
	Robot* _robot;
	void executer();
public:
	Invocateur();
	void analyse(string commandeName, Robot* r);
	string readCommandeFromConsole(const string message, Robot* r);
	template<typename T>
	T readParametre() {
		T p;
		majTypeGuid("parametre");
		if(cin >> p)
			return p;
		throw Commande::Parametre_Exception();
	}
	Robot* getRobot();
};




#endif /* UMLPROJECT_SRC_HEADER_COMMANDE_INVOCATEUR_H_ */
