#ifndef ETAT_ROBOT_EN_ROUTE_A_VIDE_H_INCLUDED
#define ETAT_ROBOT_EN_ROUTE_A_VIDE_H_INCLUDED

#include "EtatRobotEnRoute.h"

class EtatRobotEnRouteAVide : public EtatRobotEnRoute {
private:
    static EtatRobotEnRouteAVide* thisEtat;

protected:
<<<<<<< HEAD
    EtatRobotEnRouteAVide(Robot* r);

public:
    ~EtatRobotEnRouteAVide();
    static EtatRobotEnRouteAVide* instance(Robot* r);
    void avancer(int x, int y);
    void tourner();
    void rencontrerPlot(const Plot& p);
    std::string getEtatToString();
=======
	EtatRobotEnRouteAVide();
public:
	~EtatRobotEnRouteAVide();
	static EtatRobotEnRouteAVide* instance();
	EtatRobot* avancer();
	EtatRobot* tourner();
	EtatRobot* rencontrerPlot();
	void afficher();
>>>>>>> origin/robot
};

#endif
