#pragma once
#include <iostream>
using namespace std;

class rocket
{
public:
	rocket();
	void launch();
};
rocket::rocket()
{

}
void rocket::launch()
{
	cout << "Rocket Launch" << endl;
}

