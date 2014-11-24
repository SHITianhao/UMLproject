/*
 * Command.h
 *
 *  Created on: Nov 23, 2014
 *      Author: sth
 */

#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDE_H_
#define UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDE_H_
#include <iostream>
using namespace std;

class Command {
protected:

	static const string VALIDE_COMMAND[];
public:

	class Commande_Exception: public std::exception {
		virtual const char* what() const throw ();
	};
	virtual void execute();
};

#endif /* UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDE_H_ */
