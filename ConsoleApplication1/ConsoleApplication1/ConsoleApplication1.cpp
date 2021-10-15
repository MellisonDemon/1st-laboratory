#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "int -- " << sizeof (int) << endl;
	cout << "short int -- " << sizeof (short int) << endl;
	cout << "long int -- " << sizeof (long int) << endl;
	cout << "float -- " << sizeof (float) << endl;
	cout << "double -- " << sizeof (double) << endl;
	cout << "long double -- " << sizeof (long double) << endl;
	cout << "char -- " << sizeof (char) << endl;
	cout << "bool -- " << sizeof (bool) << endl;

	//--------------------------------------------//
	
	unsigned int bytes = 4;
	unsigned int amount = bytes * 8;
	unsigned int mask = 1 << (amount - 1);
	int value;

	//--------------------------------------------//

	cout << "Введите целое число: ";
	cin >> value;

	cout << "Побитовое представление: "; 
	for (int i = 1; i <= amount; i++)
	{
		cout << ((value & mask) ? '1' : '0');
		value <<= 1;
		if (i == 1) {cout << ' ';}
	}
	cout << endl;

	//--------------------------------------------//

	union
	{
		int value;
		float number;
	} Float;

	cout << "Введите число float: ";
	cin >> Float.number;

	cout << "Побитовое представление: ";
	for (int i = 1; i <= amount; i++)
	{
		cout << ((Float.value & mask) ? '1' : '0');
		Float.value <<= 1;
		if (i == 9 || i == 1) {cout << ' ';}
	}
	
	system("pause");
	return 0;
}
