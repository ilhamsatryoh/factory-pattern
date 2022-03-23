#pragma once
#include <string> 

using namespace std;

class tiles
{
protected :
	int koordinat[2];
	string symbol;
public :
	virtual void explode() = 0;
	void setSymbol(char symb);
	string
		getSymbol();
	void setKoordinat(int x, int y)
	{
		koordinat[0] = x;
		koordinat[1] = y;
	}
	int getX();
	int getY();
};
void tiles::setSymbol(char symb)
{
	symbol = symb;
}
string tiles::getSymbol()
{
	return symbol;
}
void tiles::setKoordinat(int X, int Y)
{
	koordinat[0] = X;
	koordinat[1] = Y;
}
int tiles::getX()
{
	return koordinat[0];
}
int tiles::getY()
{
	return koordinat[1];
}



