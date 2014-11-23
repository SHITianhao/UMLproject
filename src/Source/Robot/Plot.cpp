#include "../../Header/Robot/Plot.h"

Plot::Plot(int h) : hauteur(h) {
}

int Plot::getHauteur() const {
    return hauteur;
}

void Plot::setHauteur(const int& h) {
    hauteur = h;
}