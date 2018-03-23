#pragma once
#include "IceCreamDecorator.h"
#include "Component.h"
#include <string>

using namespace std;

class ChocolateIceCreamDecorator : public IceCreamDecorator
{
public:
	ChocolateIceCreamDecorator(Component* ic);
	~ChocolateIceCreamDecorator();

	void showIceCream();
	double getPrice();

private:
	string flavour;
};

