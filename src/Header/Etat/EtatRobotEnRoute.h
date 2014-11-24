#ifndef ETATROBOTENROUTE_H_
#define ETATROBOTENROUTE_H_

#include "EtatRobot.h"

class EtatRobotEnRoute : public EtatRobot {
public:
    EtatRobotEnRoute();
    ~EtatRobotEnRoute();
    EtatRobot* figer(Robot* robot);
    virtual string toString();
};

#endif
