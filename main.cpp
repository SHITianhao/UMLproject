#include <iostream>
using namespace std;

#include "Position.h"
#include "Plot.h"
#include "Objet.h"
#include "Robot.h"

int main() {
	Robot robot(Position(10, 10));
	robot.tourner();
	robot.affichier();
}
