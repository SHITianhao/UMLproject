#ifndef OBSERVATEUR_H_INCLUDED
#define OBSERVATEUR_H_INCLUDED

#include "Observable.h"

using namespace std;

class Observable;

class Observateur {
private:
	int cpt;

public:
	Observateur();
	virtual ~Observateur();
	void afficher(Observable* o, const std::string commande);
	void afficherException(Observable* o, const std::string commande,
			const std::string message);
};

#endif

