#include "../../Header/Robot/Plot.h"

Plot::Plot(int h) : hauteur(h) {
}

int Plot::getHauteur() {
    return Plot::hauteur;
}

void Plot::setHauteur(int h) {
    hauteur = h;
}