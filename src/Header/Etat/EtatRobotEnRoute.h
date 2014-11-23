#ifndef ETATROBOTENROUTE_H_
#define ETATROBOTENROUTE_H_

#include "EtatRobot.h"

class EtatRobotEnRoute : public EtatRobot {
public:
    EtatRobotEnRoute(Robot* r);
    ~EtatRobotEnRoute();
    void figer();
    void afficher();
};

#endif /* ETATROBOTENROUTE_H_ */
