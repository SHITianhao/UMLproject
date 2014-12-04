#include "../../Header/Commande/Invocateur.h"

Invocateur::Invocateur() {

}

void Invocateur::lire(string s) {
	string::size_type position = 0;
	string tmp_s = "";
	do {
		position = s.find(" ");
		tmp_s = s.substr(0, position);
		s.erase(0, position + 1);
		_str_list.push_back(tmp_s);
	} while (-1 != position);
	tmp_s = s.substr(0, s.length());
	_str_list.push_back(tmp_s);
}

void Invocateur::executer() {
	_commande.executer();
}
