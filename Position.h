#ifndef POSITION_H_
#define POSITION_H_

class Position
{
private:
	int x;
	int y;
public:
	Position():x(0),y(0){};
	void setx(int x);
	void sety(int y);
	int getx();
	int gety();
};
#endif /* POSITION_H_ */