#include "../../Header/Etat/EtatRobotEnRouteAVideFacePlot.h"
#include "../../Header/Etat/EtatRobotEnRouteEnCharge.h"
#include "../../Header/Etat/EtatRobotEnRouteEnChargeFacePlot.h"

<<<<<<< HEAD
EtatRobotEnRouteEnChargeFacePlot* EtatRobotEnRouteEnChargeFacePlot::thisEtat = NULL;

EtatRobotEnRouteEnChargeFacePlot::EtatRobotEnRouteEnChargeFacePlot(Robot* r) : EtatRobotEnRoute(r) {
}

EtatRobotEnRouteEnChargeFacePlot::~EtatRobotEnRouteEnChargeFacePlot() {
}

EtatRobotEnRouteEnChargeFacePlot* EtatRobotEnRouteEnChargeFacePlot::instance(Robot* r) {
    if (thisEtat == NULL)
        thisEtat =
            new EtatRobotEnRouteEnChargeFacePlot(r);
    return thisEtat;
}

void EtatRobotEnRouteEnChargeFacePlot::poser() {
    robot->setEtat(EtatRobotEnRouteAVideFacePlot::instance(robot));
    robot->setObjet(Objet());
}

void EtatRobotEnRouteEnChargeFacePlot::tourner() {
    robot->setEtat(EtatRobotEnRouteEnCharge::instance(robot));
    robot->setPlot(Plot());
    switch (robot->getDirection()) {
        case 'E':
            robot->setDirection('S');
            break;
        case 'S':
            robot->setDirection('O');
            break;
        case 'O':
            robot->setDirection('N');
            break;
        case 'N':
            robot->setDirection('E');
            break;
        default:
            break;
    }
}

int EtatRobotEnRouteEnChargeFacePlot::peser() {
    return robot->getObjet().getPoids();
=======
EtatRobotEnRouteEnChargeFacePlot* EtatRobotEnRouteEnChargeFacePlot::ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT =
NULL;

EtatRobotEnRouteEnChargeFacePlot::EtatRobotEnRouteEnChargeFacePlot() {
}

EtatRobotEnRouteEnChargeFacePlot::~EtatRobotEnRouteEnChargeFacePlot() {
}

EtatRobotEnRouteEnChargeFacePlot* EtatRobotEnRouteEnChargeFacePlot::instance() {
	if (ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT == NULL)
		ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT =
				new EtatRobotEnRouteEnChargeFacePlot();
	return ETAT_ROBOT_EN_ROUTE_EN_CHARGE_FACE_PLOT;
}

EtatRobot* EtatRobotEnRouteEnChargeFacePlot::poser() {
	return EtatRobotEnRouteAVideFacePlot::instance();
}

EtatRobot* EtatRobotEnRouteEnChargeFacePlot::tourner() {
	return EtatRobotEnRouteEnCharge::instance();
}

EtatRobot* EtatRobotEnRouteEnChargeFacePlot::peser() {
	return EtatRobotEnRouteEnChargeFacePlot::instance();
}

void EtatRobotEnRouteEnChargeFacePlot::afficher() {
	cout << "Vous êtes dans état robot en route en charge face plot." << endl;
>>>>>>> origin/robot
}

std::string EtatRobotEnRouteEnChargeFacePlot::getEtatToString() {
    return "En route en charge et face à un plot";
}
