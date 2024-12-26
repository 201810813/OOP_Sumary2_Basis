#pragma once
#include <iostream>
using namespace std;
class Animal
{
public:
	Animal();
	virtual ~Animal();
	virtual void makeSound() = 0;
};