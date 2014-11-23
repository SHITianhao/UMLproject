#include "../../Header/Affichage/Observable.h"

using namespace std;

Observable::Observable() {
}

Observable::~Observable() {
}

void Observable::maj(std::string commande) {
    observateur->afficher(this, commande);
}

void Observable::majException(std::string commande, std::string message) {
    observateur->afficherException(this, commande, message);
}

void Observable::abonner(Observateur* obs) {
    observateur = obs;
}

