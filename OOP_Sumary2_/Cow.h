#pragma once
#include "Animal.h"

class Cow : public Animal
{
public:
	Cow();
	~Cow();
	void makeSound();
};