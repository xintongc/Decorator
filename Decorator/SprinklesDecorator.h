#pragma once
#include "IceCreamDecorator.h"
#include "Component.h"
#include <string>

using namespace std;

class SprinklesDecorator : public IceCreamDecorator
{
public:
	SprinklesDecorator(Component* ic);
	~SprinklesDecorator();

	void showIceCream();
	double getPrice();

private:
};

