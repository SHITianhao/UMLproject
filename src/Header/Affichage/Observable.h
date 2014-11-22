#ifndef ELEMENTREPRESENTABLE_H
#define	ELEMENTREPRESENTABLE_H

#include <vector>

#include "Observateur.h"

class Observateur;

class Observable
{
    private :
        std::vector<Observateur *> observateurs;

    protected:
        void notifierObservateurs();

    public:
        Observable();
        virtual ~Observable();
        void attacher (Observateur* obs);
        void detacher (Observateur* obs);

};

#endif	/* ELEMENTREPRESENTABLE_H */

