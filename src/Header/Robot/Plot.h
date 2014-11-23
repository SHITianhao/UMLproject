#ifndef PLOT_H_
#define PLOT_H_

class Plot {
private:
    int hauteur;
public:
    Plot(int h = -1);
    int getHauteur() const;
    void setHauteur(const int& h);
};

#endif /* PLOT_H_ */