#include <iostream>
using namespace std;

#include "../Header/Robot/Position.h"
#include "../Header/Robot/Plot.h"
#include "../Header/Robot/Objet.h"
#include "../Header/Robot/Robot.h"

int main() {
	Robot robot(Position(10, 10));
	Plot p(10);

	robot.affichier();

	robot.tourner();
	robot.affichier();

	robot.avancer(10, 10);
	robot.affichier();

	robot.figer();
	robot.affichier();
	robot.repartir();
	robot.affichier();

	robot.rencontrerPlot(p);
	robot.affichier();

	robot.figer();
	robot.affichier();

	Robot robot2(Position(0, 0));
	robot2.figer();
	robot2.affichier();

	robot.repartir();
	robot.affichier();

	robot2.repartir();
	robot2.affichier();

}
