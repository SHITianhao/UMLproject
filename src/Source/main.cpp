#include <iostream>
using namespace std;

#include "../Header/Robot/Position.h"
#include "../Header/Robot/Plot.h"
#include "../Header/Robot/Objet.h"
#include "../Header/Robot/Robot.h"

int main() {
    Robot robot(Position(10, 10));
    robot.tourner();
    robot.avancer(15, 15);
}
