#include "../Header/Robot/Robot.h"
#include "../Header/Affichage/Observateur.h"

int main() {
    Robot robot;
    Observateur observateur;
    Plot p = Plot(10);
    Objet o = Objet(20);
    robot.attacher(&observateur);
    robot.getEtat()->attacher(&observateur);
    
    robot.avancer(10, 10);      // Commande 1
    robot.tourner();            // Commande 2
    robot.rencontrerPlot(p);    // Commande 3
    robot.evaluerPlot();        // Commande 4
    robot.saisir(o);            // Commande 5
    robot.figer();              // Commande 6
    robot.repartir();           // Commande 7    
    robot.tourner();            // Commande 8
    robot.poser();              // Commande 9
    robot.avancer(0, 0);        // Commande 10
    robot.tourner();            // Commande 11
    robot.tourner();            // Commande 12
    robot.poser();
    return 0;
}
