#include "../../Header/Commande/CommandeRobot.h"
#include "../../Header/Robot/Robot.h"

CommandeRobot::CommandeRobot(Robot* r) {
	_robot = r;
}

CommandeRobot::CommandeRobot(string nomCommand) : Commande::Commande(nomCommand) {
}

CommandeRobot::~CommandeRobot() {
	delete _robot;
}