#pragma once
class Component
{
public:
	Component();
	~Component();
	
	virtual void showIceCream()= 0;
	virtual double getPrice() { return this->price; }

private:
	double price = 2.50;
};

