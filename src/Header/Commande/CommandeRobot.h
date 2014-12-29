#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEROBOT_H_
#define UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEROBOT_H_
#include "Commande.h"

class Robot;

class CommandeRobot : public Commande {
protected:
	Robot* _robot;
	CommandeRobot(string nomCommand = "UNKNOW");
	virtual~CommandeRobot();
public:
	CommandeRobot(Robot* r = 0);
	virtual void executer() = 0;
	virtual void annuler() = 0;
	virtual Commande* constructeurVirtuel(Invocateur* invocateur) = 0;
};



#endif /* UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDEROBOT_H_ */
