#ifndef COMMANDE_H_INCLUDED
#define	COMMANDE_H_INCLUDED

class Commande {
protected:
	Commande();

public:
	class Commande_Exception: public std::exception {
		virtual const char* what() const throw ();
	};

	virtual void executer();
	virtual void annuler();
	virtual ~Commande();
};

#endif

