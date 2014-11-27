#ifndef COMMANDE_H_INCLUDED
#define	COMMANDE_H_INCLUDED

#include "../Robot/Robot.h"

class Robot;

class Commande {
protected:
    Robot* robot;
    Commande(Robot* r );
    
public:
    virtual void action();
    virtual ~Commande();
};


#endif

