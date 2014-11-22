#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

#include "../../Header/Affichage/Observable.h"

using namespace std;

Observable::Observable()
: observateurs() {
}

Observable::~Observable() {
}

void Observable::notifierObservateurs() {
    for (unsigned i = 0; i < observateurs.size(); ++i)
        observateurs.at(i)->afficher(this);
}// notifierObservateurs()

void Observable::attacher(Observateur* obs) {
    for (unsigned i = 0; i < observateurs.size(); ++i)
        if (observateurs.at(i) == obs) return;

    observateurs.push_back(obs);
}// attacher()

void Observable::detacher(Observateur* obs) {
    vector<Observateur *>::iterator it = find(observateurs.begin(), observateurs.end(), obs);
    if (it == observateurs.end())
        return;
    observateurs.erase(it);
}// detacher()

