#ifndef COMMANDE_H_INCLUDED
#define	COMMANDE_H_INCLUDED
#include <string>
#include <list>
using namespace std;

class Invocateur;

class Commande {
private:
	static map<string,Commande*> COMMANDE_INSCRITS;
	static list<Commande*> histoire;
public:
	class Commande_Exception: public std::exception {
		virtual const char* what() const throw ();
	};
	virtual Commande(string nomCommand);
	virtual	Commande constructeurVirtuel(Invocateur* invocateur);
	Commande nouvelleCommande(string nomCommande,Invocateur* invocateur);
	virtual void executer();
	virtual void annuler();
	virtual ~Commande();
};

#endif

