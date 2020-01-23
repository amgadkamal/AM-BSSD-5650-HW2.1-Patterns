#include <iostream>
#include "Animal.h"
#include "Duck.h"
#include "Dog.h"

int main() {

	Animal* anims[2];
	anims[0] = new Duck();
	anims[1] = new Dog();

	for (int i = 0; i < 2; i++)
	{



		anims[i]->eat();
	}
	return 0;
}