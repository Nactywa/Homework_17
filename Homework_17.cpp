// Homework_17.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

class Vector
{
public:
	Vector() : x(), y(), z()
	{}

	void Show()
	{
		double x{ std::pow(3.0,2.0) };
		double y{ std::pow(5.0,2.0) };
		double z{ std::pow(6.0,2.0) };

		 sqrt(x + y + z);
}
private:
	double x;
	double y;
	double z;
};


int main()
{
	std::cout << "sqrt";
}

