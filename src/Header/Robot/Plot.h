#ifndef PLOT_H_
#define PLOT_H_

class Plot {
private:
    int hauteur;
public:
    Plot(int h = -1);
    int getHauteur();
    void setHauteur(int h);
};

#endif /* PLOT_H_ */