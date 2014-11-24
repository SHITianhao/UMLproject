#include "../../Header/Affichage/Observable.h"

Observable::Observable() : observateurs() {
}

Observable::~Observable() {
}

void Observable::maj(std::string commande) {
    for (int i = 0; i < observateurs.size(); i++) {
        observateurs.at(i)->afficher(this, commande);
    }
}

void Observable::majException(std::string commande, const char* message) {
    for (int i = 0; i < observateurs.size(); i++) {
        observateurs.at(i)->afficherException(this, commande, message);
    }
}

void Observable::abonner(Observateur* obs) {
    for (int i = 0; i < observateurs.size(); i++) {
        if (observateurs.at(i) == obs) {
            return;
        }
    }
    observateurs.push_back(obs);
}

void Observable::desabonner(Observateur* obs) {
    for (int i = 0; i < observateurs.size(); i++) {
        if (observateurs.at(i) == obs) {
            observateurs.erase(observateurs.begin() + i);
            break;
        }
    }
}
