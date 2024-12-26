#include <iostream>
#include "Cat.h"
#include "Dog.h"
#include "Cow.h"

using namespace std;

int main()
{
	Animal* animals[3];
	
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Cow();

	for (auto a : animals)
	{
		a->MakeSound();
	}
}