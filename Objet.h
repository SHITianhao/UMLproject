#ifndef OBJET_H_
#define OBJET_H_

class Objet
{
private:
	int poids;
public:
	Objet(int p):poids(p){};
	Objet():poids(1){};
	int getPoids(){return poids;};

};
#endif /* OBJET_H_ */