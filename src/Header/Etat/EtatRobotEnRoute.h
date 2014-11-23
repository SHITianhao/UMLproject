#ifndef ETATROBOTENROUTE_H_
#define ETATROBOTENROUTE_H_

#include "EtatRobot.h"

class EtatRobotEnRoute : public EtatRobot {
protected:
    EtatRobotEnRoute(Robot* r);
    
public:
    ~EtatRobotEnRoute();
    void figer();
    void afficher();
};

#endif /* ETATROBOTENROUTE_H_ */
