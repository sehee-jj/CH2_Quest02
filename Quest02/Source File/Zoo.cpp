#include <iostream>
#include "Zoo.h"

using namespace std;

void Zoo::addAnimal(Animal* animal)
{
	if (animal_cnt < 10)
	{
		animals[animal_cnt] = animal;
		animal_cnt++;
		cout << "������ �߰��߽��ϴ�.\n";
	}
	else
	{
		cout << "������ ���̻� �߰��� �� �����ϴ�.\n";
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