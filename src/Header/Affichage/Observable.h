#ifndef OBSERVABLE_H_INCLUDED
#define	OBSERVABLE_H_INCLUDED


#include <iostream>
#include <vector>

#include "Observateur.h"

class Observateur;

class Observable {
private:
    std::vector <Observateur*> observateurs;

public:
    Observable();
    virtual ~Observable();
    void maj(std::string commande);
    void majTypeGuid(std::string message);
    void majWelcome();
    void majException(std::string commande, const char* message);
    void abonner(Observateur* obs);
    void desabonner(Observateur* obs);
};

#endif

