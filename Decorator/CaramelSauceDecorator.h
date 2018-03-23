#pragma once
#include "IceCreamDecorator.h"
#include "Component.h"


class CaramelSauceDecorator: public IceCreamDecorator
{
public:
	CaramelSauceDecorator(Component* ic);
	~CaramelSauceDecorator();

	void showIceCream();
	double getPrice();
};

