#ifndef ETATROBOTENROUTEAVIDE_H_
#define ETATROBOTENROUTEAVIDE_H_

#include "EtatRobotEnRoute.h"

class EtatRobotEnRouteAVide : public EtatRobotEnRoute {
private:
    static EtatRobotEnRouteAVide* thisEtat;

protected:
    EtatRobotEnRouteAVide(Robot* r);

public:
    ~EtatRobotEnRouteAVide();
    static EtatRobotEnRouteAVide* instance(Robot* r);
    void avancer(int x, int y);
    void tourner();
    void rencontrerPlot(const Plot& p);
    std::string getEtatToString();
};

#endif /* ETATROBOTENROUTEAVIDE_H_ */
