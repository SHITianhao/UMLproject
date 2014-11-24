#include <iostream>
using namespace std;

#include "../Header/Robot/Position.h"
#include "../Header/Robot/Plot.h"
#include "../Header/Robot/Objet.h"
#include "../Header/Robot/Robot.h"

int main() {
	cout << "*********robot 1**********"<<endl;
	Robot robot(Position(10, 10));
	Plot p(10);

	robot.affichier(); // pas objet

	robot.tourner();
	robot.affichier(); // etat en route a vide

	robot.avancer(5, 10);
	robot.affichier(); // etat en route a vide

	robot.figer();
	robot.affichier();//etat fige
	robot.repartir();
	robot.affichier();//etat en route a vide

	robot.rencontrerPlot(p);
	robot.affichier();//etat a vide face plot

	robot.evaluerPlot();
	robot.affichier();//etat a vide face plot

	robot.figer();
	robot.affichier();//etat fige

	cout << "*********robot 2**********"<<endl;
	Robot robot2(Position(0, 0));

	robot2.rencontrerPlot(p);
	robot2.saisir(Objet(10));
	robot2.affichier();//etat en charge face plot

	robot2.peser();
	robot2.affichier();//etat en charge face plot

	robot2.tourner();
	robot2.affichier();//etat en charge

	robot2.rencontrerPlot(p);
	robot2.affichier();//etat en charge face plot

	robot2.figer();
	robot2.affichier();//etat fige

	cout << "*********robot 1**********"<<endl;
	robot.repartir();
	robot.affichier();//etat a vide face plot

	cout << "*********robot 2**********"<<endl;
	robot2.repartir();
	robot2.affichier();//etat en charge face plot

	cout << "*********err**********"<<endl;
	robot2.avancer(1,1);
	robot.poser();

}
