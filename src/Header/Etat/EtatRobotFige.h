#ifndef ETAT_ROBOT_FIGE_H_INCLUDED
#define ETAT_ROBOT_FIGE_H_INCLUDED

#include <map>
#include "EtatRobot.h"

class EtatRobotFige : public EtatRobot {
private:
    static EtatRobotFige* ETAT_ROBOT_FIGE;

protected:
    std::map<Robot*, EtatRobot*> _figeRobots;
    EtatRobotFige();

public:
    ~EtatRobotFige();
    static EtatRobotFige* instance();
    EtatRobot* repartir(Robot* robot);
    virtual string toString();
    void enregistrerRobotFige(Robot* robot);
};

#endif
