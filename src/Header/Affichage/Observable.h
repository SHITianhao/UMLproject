#ifndef ELEMENTREPRESENTABLE_H
#define	ELEMENTREPRESENTABLE_H

#include <iostream>
#include <vector>

#include "Observateur.h"

class Observateur;

class Observable
{
    private :
        Observateur* observateur;

    public:
        Observable();
        virtual ~Observable();
        void maj(std::string commande);
        void majException(std::string commande, std::string message);
        void abonner (Observateur* obs);

};

#endif	/* ELEMENTREPRESENTABLE_H */

