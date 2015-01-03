#include "../../Header/Affichage/Observateur.h"
#include "../../Header/Robot/Robot.h"
#include "../../Header/Commande/Invocateur.h"

using namespace std;

Observateur::Observateur() {
    cpt = 1;
}

Observateur::~Observateur() {
}

void Observateur::afficher(Observable* o, std::string commande) {

    cout << "<------------ Commande " << cpt << " ------------>" << endl;
    Robot* robot;
    if ((robot = dynamic_cast<Robot*>(o)) != nullptr)
    {
        cout << "|  Requete : " << commande << endl;
        cout << "|  Etat : " << robot->getEtat()->toString();
        cout << "|  Position : " << robot->getPosition().getX() << ", " << robot->getPosition().getY() << endl;
        cout << "|  Direction : " << robot->getDirection() << endl;
        if (robot->getObjet().getPoids() > 0 and commande == "PESER") {
            cout << "|  Objet saisi - poids : " << robot->getObjet().getPoids() << endl;
        }
        if (robot->getPlot().getHauteur() > 0 and commande == "EVALUER PLOT") {
            cout << "|  Plot en face - hauteur : " << robot->getPlot().getHauteur() << endl;
        }
    } 
    cout << "<---------- Fin Commande " << cpt << " ---------->" << endl << endl;
    cpt++;
}

void Observateur::afficherException(Observable* o, std::string commande, const char* message) {
    cout << "<------------ Commande " << cpt << " ------------>" << endl;
    cout << "|  Requete : " << commande << endl;
    cout << "|  Exception : " << message;
    Robot* robot;
    if ((robot = dynamic_cast<Robot*>(o)) != nullptr)
    {
        EtatRobot* etat = robot->getEtat();
        cout << "|  RAPPEL ->  " << etat->toString();
    }

    Invocateur* invocateur;
    if ((invocateur = dynamic_cast<Invocateur*>(o)) != nullptr)
    {
        cout << "|  RAPPEL ->  " << invocateur->getRobot()->getEtat()->toString();
    }
    cout << "<---------- Fin Commande " << cpt << " ---------->" << endl << endl;
    cpt++;
}

void Observateur::afficherTypeGuid(std::string message) {
    cout << "<------------ Type Guid ------------>" << endl;
    cout << "|  Type votre " << message << " : ";
}

void Observateur::afficherWelcome() {
    cout << "<------------ Welcome ------------>" << endl;
    cout << "|   Bienvenu au monde de robot!   |" << endl;
    cout << "<------------ Welcome ------------>" << endl << endl;
}

void Observateur::resetCompteur() {
    cpt = 1;
}

