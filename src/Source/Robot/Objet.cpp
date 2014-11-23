#include "../../Header/Robot/Objet.h"

Objet::Objet(int p) : poids(p) {
}

int Objet::getPoids() const {
    return poids;
}

void Objet::setPoids(const int& p) {
    poids = p;
}