#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

#include "../../Header/Affichage/Observable.h"

using namespace std;

Observable::Observable() {
}

Observable::~Observable() {
}

void Observable::maj() {
    for (unsigned i = 0; i < observateurs.size(); ++i)
        observateurs.at(i)->afficher(this);
}// notifierObservateurs()


void Observable::majException(std::string message) {
    for (unsigned i = 0; i < observateurs.size(); ++i)
        observateurs.at(i)->afficherException(this, message);
}

void Observable::attacher(Observateur* obs) {
    for (unsigned i = 0; i < observateurs.size(); ++i)
        if (observateurs.at(i) == obs) return;

    observateurs.push_back(obs);
}

void Observable::detacher(Observateur* obs) {
    vector<Observateur *>::iterator it = find(observateurs.begin(), observateurs.end(), obs);
    if (it == observateurs.end())
        return;
    observateurs.erase(it);
}

