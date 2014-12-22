/*
 * Parse.h
 *
 *  Created on: Dec 4, 2014
 *      Author: sth
 */

#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_INVOCATEUR_H_
#define UMLPROJECT_SRC_HEADER_COMMANDE_INVOCATEUR_H_
#include <string>
#include <vector>
#include "Commande.h"

using namespace std;

class Invocateur {
public:
	Invocateur();
	void lire(string s);
	void executer();
	vector<int> getParametres();
private:
	vector<std::string> _str_list;
	Commande _commande;
};




#endif /* UMLPROJECT_SRC_HEADER_COMMANDE_INVOCATEUR_H_ */
