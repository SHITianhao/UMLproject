#ifndef ETATROBOTFIGE_H_
#define ETATROBOTFIGE_H_

#include "EtatRobot.h"

class EtatRobotFige : public EtatRobot {
private:
    static EtatRobotFige* thisEtat;
    
protected:
    EtatRobotFige(Robot* r);
    
public:
    ~EtatRobotFige();
    static EtatRobotFige* instance(Robot* r);
    EtatRobot* repartir();
};

#endif /* ETATROBOTFIGE_H_ */
