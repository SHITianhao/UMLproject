#ifndef ETATROBOTFIGE_H_
#define ETATROBOTFIGE_H_

#include "EtatRobot.h"

class EtatRobotFige : public EtatRobot {
private:
    EtatRobotFige* thisEtat;
protected:
    EtatRobotFige(Robot* r);
public:
    ~EtatRobotFige();
    EtatRobotFige* instance(Robot* r);
    EtatRobot* repartir();
};

#endif /* ETATROBOTFIGE_H_ */
