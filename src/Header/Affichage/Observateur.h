#ifndef OBSERVATEUR_H_INCLUDED
#define OBSERVATEUR_H_INCLUDED

#include "Observable.h"

class Observable;

class Observateur {
private:
    int cpt;

public:
    Observateur();
    virtual ~Observateur();
    void afficher(Observable* o, std::string commande);
    void afficherException(Observable* o, std::string commande, const char* message);
    void resetCompteur();
};

#endif

