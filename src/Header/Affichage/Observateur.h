#ifndef OBSERVATEUR_H
#define	OBSERVATEUR_H

#include "Observable.h"

class Observable;

class Observateur
{
    public:
        Observateur();
        virtual ~Observateur();
        virtual void afficher(Observable* o) = 0;
};


#endif	/* OBSERVATEUR_H */

