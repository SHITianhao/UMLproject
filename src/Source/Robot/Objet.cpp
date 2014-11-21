#include "../../Header/Robot/Objet.h"

Objet::Objet(int poids) : poids(poids) {}

int Objet::getPoids() {
	return Objet::poids;
}