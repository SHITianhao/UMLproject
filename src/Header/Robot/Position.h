#ifndef POSITION_H_
#define POSITION_H_

class Position
{
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

#endif /* POSITION_H_ */