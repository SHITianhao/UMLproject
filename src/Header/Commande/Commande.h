#ifndef UMLPROJECT_SRC_HEADER_COMMANDE_H_
#define	UMLPROJECT_SRC_HEADER_COMMANDE_H_
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Invocateur;
class EtatRobot;

class Commande {
protected:
	static vector<Commande*> HISTOIRE;
	static map<string,Commande*> COMMANDE_INSCRITS;
public:
	class Commande_Exception: public std::exception {
	public:
		virtual const char* what() const throw ();
	};
	class Parametre_Exception: public std::exception {
	public:
		virtual const char* what() const throw ();
	};
	class UnknowCommande_Exception: public Commande_Exception {
	public:
		virtual const char* what() const throw ();
	};
	class UnvalidCommande_Exception: public Commande_Exception {
	public:
		virtual const char* what() const throw ();
	};
	Commande(string nomCommand);
	Commande(){};
	virtual Commande* constructeurVirtuel(Invocateur* invocateur);
	Commande* nouvelleCommande(string nomCommande,Invocateur* invocateur);
	virtual void executer();
	virtual void annuler();
};

#endif

