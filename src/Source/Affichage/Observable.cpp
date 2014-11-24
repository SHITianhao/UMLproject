#include "../../Header/Affichage/Observable.h"

using namespace std;

Observable::Observable() {
	observateur = new Observateur();
}

Observable::~Observable() {
}

void Observable::maj(const std::string commande) {
	observateur->afficher(this, commande);
}

void Observable::majException(const std::string commande,
		const std::string message) {
	observateur->afficherException(this, commande, message);
}

void Observable::abonner(Observateur* obs) {
	observateur = obs;
}

