#ifndef ROBOT_H_
#define ROBOT_H_

#include "Position.h"
#include "Plot.h"
#include "Objet.h"
#include "../Etat/EtatRobot.h"
#include "../Affichage/Observable.h"

using namespace std;

class Robot : public Observable {
private:
    Position position;
    Objet* objet;
    Plot* plot;
    char direction;
    static EtatRobot* ETAT_ROBOT;
public:
    Robot(Position position = Position(0, 0), char direction = 'N');
    static EtatRobot* getEtat();
    void avancer(int x, int y);
    void tourner();
    void saisir(Objet* o);
    void poser();
    int peser();
    void rencontrerPlot();
    int evaluerPlot();
    void figer();
    void repartir();
    
    Position getPosition();
    Plot* getPlot();
    Objet* getObjet();
    char getDirection();
    
};

#endif /* ROBOT_H_ */
