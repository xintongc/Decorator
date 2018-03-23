#pragma once
#include "IceCream.h"
#include "Component.h"

class IceCreamDecorator : public Component
{
public:
	IceCreamDecorator(Component* ic) : iceCream(ic) { }
	~IceCreamDecorator() {}
	virtual void showIceCream() =0;

	Component* getIceCream() { return this->iceCream; }
	

private:
	Component* iceCream;
};

