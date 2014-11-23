#ifndef ELEMENTREPRESENTABLE_H
#define	ELEMENTREPRESENTABLE_H

#include <iostream>
#include <vector>

#include "Observateur.h"

class Observateur;

class Observable
{
    private :
        std::vector<Observateur *> observateurs;

    protected:
        void maj();
        void majException(std::string message);

    public:
        Observable();
        virtual ~Observable();
        void attacher (Observateur* obs);
        void detacher (Observateur* obs);

};

#endif	/* ELEMENTREPRESENTABLE_H */

