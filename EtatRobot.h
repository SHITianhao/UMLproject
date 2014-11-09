class EtatRobot
{
public:
	EtatRobot();
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