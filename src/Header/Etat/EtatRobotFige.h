#ifndef ETAT_ROBOT_FIGE_H_INCLUDED
#define ETAT_ROBOT_FIGE_H_INCLUDED

#include "EtatRobot.h"

class EtatRobotFige : public EtatRobot {
private:
    static EtatRobotFige* thisEtat;
    EtatRobot* lastEtat;

protected:
    EtatRobotFige(Robot* r, EtatRobot* l);

public:
    ~EtatRobotFige();
    static EtatRobotFige* instance(Robot* r, EtatRobot* l);
    void repartir();
    std::string getEtatToString();
};

#endif