#include "../Header/Robot/Robot.h"
#include "../Header/Commande/Invocateur.h"
#include <string>
int main() {
    Observateur observateur;
    Robot robot(Position(0, 0));
    robot.abonner(&observateur);
    //Plot p = Plot(10);
    //Objet o = Objet(20);
    while(true){
        Invocateur inv;
        inv.abonner(&observateur);
        string commande = inv.readCommandeFromConsole("Commande", &robot);
        inv.analyse(commande,&robot);
    }
    


    //cout << "\n/********* Robot 1 *************/\n\n";

    /**
    robot.repartir(); // Commande 1
    robot.evaluerPlot(); // Commande 2 : FAIL
    robot.saisir(o); // Commande 3 : FAIL
    robot.avancer(10, 10); // Commande 4
    robot.tourner(); // Commande 5
    robot.rencontrerPlot(p); // Commande 6
    robot.evaluerPlot(); // Commande 7
    robot.saisir(o); // Commande 8
    robot.peser(); // Commande 9
    robot.figer(); // Commande 10
    robot.repartir(); // Commande 11   
    robot.tourner(); // Commande 12
    robot.poser(); // Commande 13 : FAIL
    robot.avancer(0, 0); // Commande 14
    robot.tourner(); // Commande 15
    robot.tourner(); // Commande 16
    robot.rencontrerPlot(p); // Commande 17
    robot.avancer(100, 100); // Commande 18 : FAIL
    robot.poser(); // Commande 19 : FAIL
    robot.peser(); // Commande 20 : FAIL
    robot.figer(); // Commande 21
	**/
    //cout << "\n\n/********* Robot 2 *************/\n\n";
    /**
    observateur.resetCompteur();

    Robot robot2;
    robot2.abonner(&observateur);
    robot2.figer();
    robot2.repartir();
    robot2.rencontrerPlot(p);
    robot2.avancer(5, 5);
    robot2.tourner();
    robot2.figer();
	*/

    return 0;
}
