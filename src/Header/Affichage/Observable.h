#ifndef OBSERVABLE_H_INCLUDED
#define	OBSERVABLE_H_INCLUDED

#include <iostream>

#include "Observateur.h"

class Observateur;

class Observable {
private:
	Observateur* observateur;

public:
	Observable();
	virtual ~Observable();
	void maj(const std::string commande);
	void majException(const std::string commande, const std::string message);
	void abonner(Observateur* obs);

};

#endif

