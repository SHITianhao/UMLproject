#ifndef ETATROBOTENROUTEENCHARGEFACEPLOT_H_
#define ETATROBOTENROUTEENCHARGEFACEPLOT_H_

#include "EtatRobotEnRoute.h"

class EtatRobotEnRouteEnChargeFacePlot : public EtatRobotEnRoute {
private:
    static EtatRobotEnRouteEnChargeFacePlot* thisEtat;
    
protected:
    EtatRobotEnRouteEnChargeFacePlot(Robot* r);
    
public:
    ~EtatRobotEnRouteEnChargeFacePlot();
    static EtatRobotEnRouteEnChargeFacePlot* instance(Robot* r);
    void poser();
    void tourner(char d);
    int peser();
};

#endif /* ETATROBOTENROUTEENCHARGEFACEPLOT_H_ */
