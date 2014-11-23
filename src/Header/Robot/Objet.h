#ifndef OBJET_H_
#define OBJET_H_

class Objet {
private:
    int poids;
public:
    Objet(int p = 0);
    int getPoids();
    void setPoids(int p);
};

#endif /* OBJET_H_ */