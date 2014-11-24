#ifndef POSITION_H_INCLUDED
#define POSITION_H_INCLUDED

class Position {
private:
    int x;
    int y;
public:
    Position(int x = 0, int y = 0);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
};

#endif
