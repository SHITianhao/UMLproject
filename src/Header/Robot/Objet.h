#ifndef OBJET_H_INCLUDED
#define OBJET_H_INCLUDED

class Objet {
private:
    int poids;
public:
    Objet(int p = -1);
    int getPoids() const;
    void setPoids(const int& p);
};

#endif