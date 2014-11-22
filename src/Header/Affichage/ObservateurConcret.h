#ifndef OBSERVATEURCONCRET_H
#define	OBSERVATEURCONCRET_H

#include "Observable.h"

class Observable;

class ObservateurConcret : public Observateur {
public:
    ObservateurConcret();
    virtual ~ObservateurConcret();
    void afficher(Observable* e);
};

#endif	/* OBSERVATEURCONCRET_H */

