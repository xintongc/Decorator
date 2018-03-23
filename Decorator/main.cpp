#include "IceCream.h"
#include "Component.h"
#include "ChocolateIceCreamDecorator.h"
#include "CaramelSauceDecorator.h"
#include "SprinklesDecorator.h"
#include <iostream>

using namespace std;

int main() {
	Component* iceCream = new IceCream();
	
	iceCream->showIceCream();
	cout << iceCream->getPrice() << "\n"<< endl;

	//Decorate the ice cream we just created
	iceCream = new ChocolateIceCreamDecorator(iceCream);

	iceCream->showIceCream();
	cout << iceCream->getPrice() << "\n" << endl;

	//Keep decorating the same ice cream
	iceCream = new CaramelSauceDecorator(iceCream);
	iceCream->showIceCream();
	cout << iceCream->getPrice() << "\n" << endl;

	iceCream = new SprinklesDecorator(iceCream);
	iceCream->showIceCream();
	cout << iceCream->getPrice() << "\n" << endl;

	//Decorate a brand new ice cream
	Component* decoratedIceCream = new ChocolateIceCreamDecorator(new IceCream());

	decoratedIceCream->showIceCream();
	cout << decoratedIceCream->getPrice() << "\n" << endl;

	cin.get();

	return 0;
}