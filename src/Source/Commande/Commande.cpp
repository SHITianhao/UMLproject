#include "../../Header/Commande/Commande.h"


const char* Commande::Commande_Exception::what() const throw () {
    return "C'est une commande exception.\n";
}
