#ifndef OBSERVATEURCONCRET_H
#define	OBSERVATEURCONCRET_H

#include "Observable.h"

using namespace std;

class Observable;

class Observateur {
private:
    int cpt;

public:
    Observateur();
    virtual ~Observateur();
    void afficher(Observable* o, std::string commande);
    void afficherException(Observable* o, std::string commande, std::string message);
};

#endif	/* OBSERVATEURCONCRET_H */

