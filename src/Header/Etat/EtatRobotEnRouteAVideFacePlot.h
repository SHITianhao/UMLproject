#ifndef ETATROBOTENROUTEAVIDEFACEPLOT_H_
#define ETATROBOTENROUTEAVIDEFACEPLOT_H_

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
    void tourner(char d);
    void saisir(Objet* o);
};

#endif /* ETATROBOTENROUTEAVIDEFACEPLOT_H_ */
