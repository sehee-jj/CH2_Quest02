#include <iostream>
#include "Zoo.h"

using namespace std;

void Zoo::addAnimal(Animal* animal)
{
	if (animal_cnt < 10)
	{
		animals[animal_cnt] = animal;
		animal_cnt++;
		cout << "동물을 추가했습니다.\n";
	}
	else
	{
		cout << "동물을 더이상 추가할 수 없습니다.\n";
	}
}

void Zoo::performActions()
{
	for (int i = 0; i < animal_cnt; i++)
	{
		animals[i]->MakeSound();
	}
}

Zoo::~Zoo()
{
	for (int i = 0; i < animal_cnt; i++)
	{
		delete animals[i];
	}
}