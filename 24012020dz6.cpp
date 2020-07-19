/*
6. Пусть элементами круга являются радиус(первый элемент), диаметр(второй элемент) и длина окружности(третий элемент).Составить программу, которая по номеру элемента запрашивала бы его соответствующее значение и вычисляла бы площадь круга.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int a;
	double pi = 3.1415926535;
	cout << "Введите номер эл-та (1 - радиус; 2 - диаметр; 3 - длина окружности): ";
	cin >> a;
	switch (a) {
	case 1:
		cout << "радиус = "; cin >> a;
		cout << "площадь круга = " << pi * pi * a << endl;
		break;
	case 2:
		cout << "диаметр = "; cin >> a;
		cout << "площадь круга = " << pi * pi * a / 2 << endl;
		break;
	case 3:
		cout << "длина окружности = "; cin >> a;
		cout << "площадь круга = " << pi * a / 2 << endl;
		break;
	default: cout << "Ошибка";
	}
	return 0;
}
