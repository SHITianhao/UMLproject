#ifndef ETATROBOTFIGE_H_
#define ETATROBOTFIGE_H_
#include <map>
#include "EtatRobot.h"


class EtatRobotFige: public EtatRobot {
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
