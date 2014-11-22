#include <iostream>

#include "../../Header/Affichage/ObservateurConcret.h"
#include "../../Header/Robot/Robot.h"

using namespace std;

ObservateurConcret::ObservateurConcret() {
}

ObservateurConcret::~ObservateurConcret() {
}

void ObservateurConcret::afficher(Observable* e) {
    Robot* robot = (Robot*) e;
    cout << "--------- Début Action ---------" << endl;
    
    cout << "Direction : " << robot->getDirection() << endl
            << "Position : " << robot->getPosition().getX() << ", " << robot->getPosition().getY() << endl;

    cout << "Objet : ";
    if (robot->getObjet() != 0)
        cout << "poids -> " << robot->getObjet()->getPoids() << endl;
    else
        cout << "Aucun objet tenu" << endl;

    cout << "Plot : ";
    if (robot->getPlot() != 0)
        cout << "hauteur -> " << robot->getPlot()->getHauteur() << endl;
    else
        cout << "Aucun Plot en face" << endl;

    cout << "---------- Fin Action ----------" << endl;
}// afficher()

