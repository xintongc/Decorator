#include "CaramelSauceDecorator.h"
#include <iostream>

using namespace std;


CaramelSauceDecorator::CaramelSauceDecorator(Component* ic): IceCreamDecorator(ic)
{
}


CaramelSauceDecorator::~CaramelSauceDecorator()
{
}

double CaramelSauceDecorator::getPrice() {
	return this->getIceCream()->getPrice() + 0.25;
}

void CaramelSauceDecorator::showIceCream() {
	this->getIceCream()->showIceCream();
	cout << "With caramel sauce on top!" << endl;
}