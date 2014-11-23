#ifndef OBSERVATEURCONCRET_H
#define	OBSERVATEURCONCRET_H

#include "Observable.h"

using namespace std;

class Observable;

class ObservateurConcret : public Observateur {
private:
    int cpt;
    
public:
    ObservateurConcret();
    virtual ~ObservateurConcret();
    void afficher(Observable* o);
};

#endif	/* OBSERVATEURCONCRET_H */

