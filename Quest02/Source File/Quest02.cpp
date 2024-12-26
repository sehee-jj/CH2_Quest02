#include <iostream>
#include <random>
#include "Cat.h"
#include "Dog.h"
#include "Cow.h"
#include "Zoo.h"

using namespace std;

// ���� ������ �����ϴ� �Լ�
// - 0, 1, 2 �� �ϳ��� ������ �����Ͽ� ���� Dog, Cat, Cow ��ü �� �ϳ��� �������� �����մϴ�.
// - ������ ��ü�� Animal Ÿ���� �����ͷ� ��ȯ�˴ϴ�.
// - �Է� �Ű�����: ����
// - ��ȯ��: Animal* (������ ���� ��ü�� ������)
Animal* createRandomAnimal()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(0, 2);

	unsigned int selection = dis(gen);

	switch (selection)
	{
	case 0:
		return new Dog();
	case 1:
		return new Cat();
	case 2:
		return new Cow();
	default:
		return nullptr;
	}
}

int main()
{
	Animal* animals[3];
	
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Cow();

	cout << "<<<  Quest02_1  >>>\n";
	for (auto a : animals)
	{
		a->MakeSound();
		delete a;
	}

	cout << "<<<  Quest02_2  >>>\n";
	Zoo nbc_zoo;

	for (int i = 0; i < 11; i++)
	{
		nbc_zoo.addAnimal(createRandomAnimal());
	}

	nbc_zoo.performActions();

	return 0;
}