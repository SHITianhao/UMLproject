#ifndef ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT_H_INCLUDED
#define ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT_H_INCLUDED

#include "EtatRobotEnRoute.h"

class EtatRobotEnRouteEnChargeFacePlot: public EtatRobotEnRoute {
private:
<<<<<<< HEAD
    static EtatRobotEnRouteEnChargeFacePlot* thisEtat;

=======

	static EtatRobotEnRouteEnChargeFacePlot* ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT;
>>>>>>> origin/robot
protected:
    EtatRobotEnRouteEnChargeFacePlot(Robot* r);

<<<<<<< HEAD
public:
    ~EtatRobotEnRouteEnChargeFacePlot();
    static EtatRobotEnRouteEnChargeFacePlot* instance(Robot* r);
    void poser();
    void tourner();
    int peser();
    std::string getEtatToString();
=======
	EtatRobotEnRouteEnChargeFacePlot();
public:

	~EtatRobotEnRouteEnChargeFacePlot();
	static EtatRobotEnRouteEnChargeFacePlot* instance();
	EtatRobot* poser();
	EtatRobot* tourner();
	EtatRobot* peser();
	void afficher();
>>>>>>> origin/robot
};

#endif
