#ifndef ETATROBOTFIGE_H_
#define ETATROBOTFIGE_H_

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

#endif /* ETATROBOTFIGE_H_ */
