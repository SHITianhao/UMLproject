#include <iostream>

using namespace std;
class EtatRobot
{
public:
	EtatRobot();
	class EtatRobot_Exception: public std::exception{};
	EtatRobot avancer();
	EtatRobot tourner();
	EtatRobot saisir();
	EtatRobot poser();
	EtatRobot peser();
	EtatRobot rencontrerPlot();
	EtatRobot evaluerPlot();
	EtatRobot figer();
	EtatRobot repartir();
};
