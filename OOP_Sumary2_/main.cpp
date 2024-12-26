#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Cow.h"

int main() {
	Animal* animals[3];
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Cow();
	for (int i = 0; i < 3; i++) {
		animals[i]->makeSound();
	}
	for (int i = 0; i < 3; i++) {
		delete animals[i];
	}
	return 0;
}