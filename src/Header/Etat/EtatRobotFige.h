<<<<<<< HEAD
#ifndef ETAT_ROBOT_FIGE_H_INCLUDED
#define ETAT_ROBOT_FIGE_H_INCLUDED

=======
#ifndef ETATROBOTFIGE_H_
#define ETATROBOTFIGE_H_
#include <map>
>>>>>>> origin/robot
#include "EtatRobot.h"


class EtatRobotFige: public EtatRobot {
private:
<<<<<<< HEAD
    static EtatRobotFige* thisEtat;
    EtatRobot* lastEtat;

=======

	static EtatRobotFige* ETAT_ROBOT_FIGE;
>>>>>>> origin/robot
protected:
    EtatRobotFige(Robot* r, EtatRobot* l);

<<<<<<< HEAD
public:
    ~EtatRobotFige();
    static EtatRobotFige* instance(Robot* r, EtatRobot* l);
    void repartir();
    std::string getEtatToString();
=======
	std::map<Robot*, EtatRobot*> _figeRobots;
	EtatRobotFige();
public:

	~EtatRobotFige();
	static EtatRobotFige* instance();
	//void getCurrentRobot(Robot* robot);
	EtatRobot* repartir(Robot* robot);
	void afficher();
	void enregistrerRobotFige(Robot* robot);
	//void effacerCurrentRobot();
>>>>>>> origin/robot
};

#endif
