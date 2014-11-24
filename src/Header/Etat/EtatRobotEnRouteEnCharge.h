#ifndef ETAT_ROBOT_EN_ROUTE_EN_CHARGE_H_INCLUDED
#define ETAT_ROBOT_EN_ROUTE_EN_CHARGE_H_INCLUDED

#include "EtatRobotEnRoute.h"

class EtatRobotEnRouteEnCharge: public EtatRobotEnRoute {
private:
<<<<<<< HEAD
    static EtatRobotEnRouteEnCharge* thisEtat;

=======
	static EtatRobotEnRouteEnCharge* ETAT_ROBOT_EN_ROUTE_EN_CHARGE;
>>>>>>> origin/robot
protected:
    EtatRobotEnRouteEnCharge(Robot* r);

<<<<<<< HEAD
public:
    ~EtatRobotEnRouteEnCharge();
    static EtatRobotEnRouteEnCharge* instance(Robot* r);
    void avancer(int x, int y);
    void tourner();
    int peser();
    void rencontrerPlot(const Plot& p);
    std::string getEtatToString();
=======
	EtatRobotEnRouteEnCharge();
public:

	~EtatRobotEnRouteEnCharge();
	static EtatRobotEnRouteEnCharge* instance();
	EtatRobot* avancer();
	EtatRobot* tourner();
	EtatRobot* peser();
	EtatRobot* rencontrerPlot();
	void afficher();
>>>>>>> origin/robot
};

#endif
