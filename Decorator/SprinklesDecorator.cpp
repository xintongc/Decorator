#include "SprinklesDecorator.h"
#include <iostream>



SprinklesDecorator::SprinklesDecorator(Component* ic): IceCreamDecorator(ic)
{
}


SprinklesDecorator::~SprinklesDecorator()
{

}

double SprinklesDecorator::getPrice() {
	return this->getIceCream()->getPrice() + 0.50;
}

void SprinklesDecorator::showIceCream() {
	this->getIceCream()->showIceCream();
	cout << "Sprinkles added on top!" << endl;
}