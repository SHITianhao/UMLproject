#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDETOURNER_H_
#define UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDETOURNER_H_
#include "CommandeRobot.h"

class CommandeTourner: public CommandeRobot {
protected:
	static CommandeTourner _instance;
	CommandeTourner(string nomCommande);
	char _direction;
	char _last_direction;
public:
	CommandeTourner(Invocateur* invoc);
	virtual Commande* constructeurVirtuel(Invocateur* invoc);
	virtual void executer();
	virtual void annuler();
};

#endif /* UMLPROJECT_SRC_HEADER_COMMANDE_COMMANDETOURNER_H_ */
