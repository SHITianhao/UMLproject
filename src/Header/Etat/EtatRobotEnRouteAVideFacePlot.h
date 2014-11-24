#ifndef ETAT_ROBOT_EN_ROUTE_A_VIDE_FACE_PLOT_H_INCLUDED
#define ETAT_ROBOT_EN_ROUTE_A_VIDE_FACE_PLOT_H_INCLUDED

#include "EtatRobotEnRoute.h"

class EtatRobotEnRouteAVideFacePlot: public EtatRobotEnRoute {
private:
<<<<<<< HEAD
    static EtatRobotEnRouteAVideFacePlot* thisEtat;

=======
	static EtatRobotEnRouteAVideFacePlot* ETAT_ROBOT_EN_ROUTE_AVIDE_FACE_PLOT;
>>>>>>> origin/robot
protected:
    EtatRobotEnRouteAVideFacePlot(Robot* r);

<<<<<<< HEAD
public:
    ~EtatRobotEnRouteAVideFacePlot();
    static EtatRobotEnRouteAVideFacePlot* instance(Robot* r);
    int evaluerPlot();
    void tourner();
    void saisir(const Objet& o);
    std::string getEtatToString();
=======
	EtatRobotEnRouteAVideFacePlot();
public:

	~EtatRobotEnRouteAVideFacePlot();
	static EtatRobotEnRouteAVideFacePlot* instance();
	EtatRobot* evaluerPlot();
	EtatRobot* tourner();
	EtatRobot* saisir();
	void afficher();

>>>>>>> origin/robot
};

#endif
