#include "../../Header/Etat/EtatRobotEnRouteAVideFacePlot.h"
#include "../../Header/Etat/EtatRobotEnRouteEnChargeFacePlot.h"
#include "../../Header/Etat/EtatRobotEnRouteEnCharge.h"

EtatRobotEnRouteAVideFacePlot* EtatRobotEnRouteAVideFacePlot::thisEtat = NULL;

<<<<<<< HEAD
EtatRobotEnRouteAVideFacePlot::EtatRobotEnRouteAVideFacePlot(Robot* r) : EtatRobotEnRoute(r) {
=======
EtatRobotEnRouteAVideFacePlot* EtatRobotEnRouteAVideFacePlot::ETAT_ROBOT_EN_ROUTE_AVIDE_FACE_PLOT =
		NULL;

EtatRobotEnRouteAVideFacePlot::EtatRobotEnRouteAVideFacePlot() {
>>>>>>> origin/robot
}

EtatRobotEnRouteAVideFacePlot::~EtatRobotEnRouteAVideFacePlot() {
}

<<<<<<< HEAD
EtatRobotEnRouteAVideFacePlot* EtatRobotEnRouteAVideFacePlot::instance(Robot* r) {
    if (thisEtat == NULL) {
        thisEtat = new EtatRobotEnRouteAVideFacePlot(r);
    }
    return thisEtat;
}

int EtatRobotEnRouteAVideFacePlot::evaluerPlot() {
    return robot->getPlot().getHauteur();
}

void EtatRobotEnRouteAVideFacePlot::tourner() {
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

void EtatRobotEnRouteAVideFacePlot::saisir(const Objet& o) {
    robot->setEtat(EtatRobotEnRouteEnChargeFacePlot::instance(robot));
    robot->setObjet(o);
}

std::string EtatRobotEnRouteAVideFacePlot::getEtatToString() {
    return "En route à vide et face à un plot";
=======
EtatRobotEnRouteAVideFacePlot* EtatRobotEnRouteAVideFacePlot::instance() {
	if (ETAT_ROBOT_EN_ROUTE_AVIDE_FACE_PLOT == NULL)
		ETAT_ROBOT_EN_ROUTE_AVIDE_FACE_PLOT =
				new EtatRobotEnRouteAVideFacePlot();
	return ETAT_ROBOT_EN_ROUTE_AVIDE_FACE_PLOT;
}

EtatRobot* EtatRobotEnRouteAVideFacePlot::evaluerPlot() {
	return EtatRobotEnRouteAVideFacePlot::instance();
}

EtatRobot* EtatRobotEnRouteAVideFacePlot::tourner() {
	return EtatRobotEnRouteAVide::instance();
}

EtatRobot* EtatRobotEnRouteAVideFacePlot::saisir() {
	return EtatRobotEnRouteEnChargeFacePlot::instance();
}

void EtatRobotEnRouteAVideFacePlot::afficher() {
	cout << "Vous êtes dans état robot en route a vide face plot." << endl;
>>>>>>> origin/robot
}

