#ifndef ETATROBOTENROUTEAVIDE_H_
#define ETATROBOTENROUTEAVIDE_H_

#include "EtatRobotEnRoute.h"

class EtatRobotEnRouteAVide : public EtatRobotEnRoute {
private:
    EtatRobotEnRouteAVide* thisEtat;

protected:
    EtatRobotEnRouteAVide(Robot* r);

public:
    ~EtatRobotEnRouteAVide();
    EtatRobotEnRouteAVide* instance(Robot* r);
    void avancer(int x, int y);
    void tourner(char d);
    void rencontrerPlot(Plot* p);
};

#endif /* ETATROBOTENROUTEAVIDE_H_ */
