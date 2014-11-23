#include <iostream>

#include "../../Header/Affichage/Observateur.h"
#include "../../Header/Robot/Robot.h"

using namespace std;

Observateur::Observateur() {
    cpt = 1;
}

Observateur::~Observateur() {
}

void Observateur::afficher(Observable* o) {
    Robot* robot = (Robot*) o;
    cout << "<--------- Commande " << cpt << " --------->" << "\n";
    cout << "Etat : " << robot->getEtat()->getEtatToString() << "\n";
    cout << "Position : " << robot->getPosition().getX() << ", " << robot->getPosition().getY() << "\n";
    cout << "Direction : " << robot->getDirection() << "\n";
    if (robot->getObjet().getPoids() != -1) {
        cout << "Objet saisi - poids : " << robot->getObjet().getPoids() << "\n";
    }
    if (robot->getPlot().getHauteur() != -1) {
        cout << "Plot en face - hauteur : " << robot->getPlot().getHauteur() << "\n";
    }
    cout << "<------- Fin Commande " << cpt << " ------->" << "\n\n";
    cpt++;
}

void Observateur::afficherException(Observable* o, std::string message) {
    Robot* robot = (Robot*) o;
    cout << "<--------- Commande " << cpt << " --------->" << "\n";
    cout << "Exception : " << message << "\n";
    cout << "RAPPEL, Etat actuel du robot : " << robot->getEtat()->getEtatToString() << "\n";
    cout << "<------- Fin Commande " << cpt << " ------->" << "\n\n";
    cpt++;
}

