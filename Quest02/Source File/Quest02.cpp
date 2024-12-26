#include <iostream>
#include <random>
#include "Cat.h"
#include "Dog.h"
#include "Cow.h"
#include "Zoo.h"

using namespace std;

// 랜덤 동물을 생성하는 함수
// - 0, 1, 2 중 하나의 난수를 생성하여 각각 Dog, Cat, Cow 객체 중 하나를 동적으로 생성합니다.
// - 생성된 객체는 Animal 타입의 포인터로 반환됩니다.
// - 입력 매개변수: 없음
// - 반환값: Animal* (생성된 동물 객체의 포인터)
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