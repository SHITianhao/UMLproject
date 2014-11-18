#include <iostream>
using namespace std;
class EtatRobot
{
public:
	EtatRobot();
	class EtatRobot_Exception: public std::exception{};
	EtatRobot avancer(int x, int y);
	EtatRobot tourner();
	EtatRobot saisir(Objet o);
	EtatRobot poser();
	EtatRobot peser();
	EtatRobot rencontrerPlot(Plot p);
	EtatRobot evaluerPlot();
	EtatRobot figer();
	EtatRobot repartir();

};
