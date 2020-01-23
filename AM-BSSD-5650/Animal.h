#ifndef Animal_h
#define Animal_h

#include <iostream>

class Animal {
public:
	// pure virtual function
	virtual void speak() = 0;
	virtual void eat() = 0;
};
#endif // !Animal_h