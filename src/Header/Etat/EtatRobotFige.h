#ifndef ETATROBOTFIGE_H_
#define ETATROBOTFIGE_H_

#include "EtatRobot.h"

class EtatRobotFige : public EtatRobot {
private:
    static EtatRobotFige* ETAT_ROBOT_FIGE;
protected:

    EtatRobotFige() {
    }
public:

    ~EtatRobotFige() {
    }
    static EtatRobotFige* instance();
    EtatRobot* repartir();
    void afficher();
};

#endif /* ETATROBOTFIGE_H_ */
