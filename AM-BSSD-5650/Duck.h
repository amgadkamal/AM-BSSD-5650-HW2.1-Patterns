#ifndef Duck_h
#define Duck_h

#include "Animal.h"
#include <iostream>

class Duck :public Animal {
public:
	void speak() {
		std::cout << "Quacktastic" << std::endl;
	};
	void eat() {
		std::cout << "ate Bread" << std::endl;
	};


};
#endif // !Duck_h
