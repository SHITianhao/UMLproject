#ifndef OBJET_H_
#define OBJET_H_

class Objet {
private:
    int poids;
public:
    Objet(int p = -1);
    int getPoids() const;
    void setPoids(const int& p);
};

#endif /* OBJET_H_ */