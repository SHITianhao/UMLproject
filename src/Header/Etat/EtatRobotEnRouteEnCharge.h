#ifndef ETATROBOTENROUTEENCHARGE_H_
#define ETATROBOTENROUTEENCHARGE_H_

#include "EtatRobotEnRoute.h"

class EtatRobotEnRouteEnCharge : public EtatRobotEnRoute {
private:
    static EtatRobotEnRouteEnCharge* thisEtat;
    
protected:
    EtatRobotEnRouteEnCharge(Robot* r);
    
public:
    ~EtatRobotEnRouteEnCharge();
    static EtatRobotEnRouteEnCharge* instance(Robot* r);
    void avancer(int x, int y);
    void tourner(char d);
    int peser();
    void rencontrerPlot(Plot* p);
};

#endif /* ETATROBOTENROUTEENCHARGE_H_ */
