#ifndef Dog_h
#define Dog_h

#include <iostream>
#include "Animal.h"

class Dog :public Animal {
public:
	void speak() override { std::cout << "Woof" << std::endl; };
	void eat() override { std::cout << "ate kibble" << std::endl; };
};


#endif // !Dog_h