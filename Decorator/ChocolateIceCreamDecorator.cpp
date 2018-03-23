#include "ChocolateIceCreamDecorator.h"
#include <iostream>



ChocolateIceCreamDecorator::ChocolateIceCreamDecorator(Component* ic): IceCreamDecorator(ic)
{
	this->flavour = "chocolate";
}


ChocolateIceCreamDecorator::~ChocolateIceCreamDecorator()
{
}

void ChocolateIceCreamDecorator::showIceCream() {
	this->getIceCream()->showIceCream();
	cout << "Ice cream flavour: " + this->flavour << endl;
}

double ChocolateIceCreamDecorator::getPrice() {
	return this->getIceCream()->getPrice() + 0.25;
}