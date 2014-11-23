#ifndef ETAT_ROBOT_EN_ROUTE_A_VIDE_FACE_PLOT_H_INCLUDED
#define ETAT_ROBOT_EN_ROUTE_A_VIDE_FACE_PLOT_H_INCLUDED

#include "EtatRobotEnRoute.h"

class EtatRobotEnRouteAVideFacePlot : public EtatRobotEnRoute {
private:
    static EtatRobotEnRouteAVideFacePlot* thisEtat;

protected:
    EtatRobotEnRouteAVideFacePlot(Robot* r);

public:
    ~EtatRobotEnRouteAVideFacePlot();
    static EtatRobotEnRouteAVideFacePlot* instance(Robot* r);
    int evaluerPlot();
    void tourner();
    void saisir(const Objet& o);
    std::string getEtatToString();
};

#endif
