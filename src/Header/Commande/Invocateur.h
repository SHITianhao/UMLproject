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
	void analyse(string commandeName, Robot* r);
public:
	Invocateur();
	void readCommandeFromConsole(Robot* r);
	int readParametreInt();
	char readParametreChar();
	Robot* getRobot();
};




#endif /* UMLPROJECT_SRC_HEADER_COMMANDE_INVOCATEUR_H_ */
