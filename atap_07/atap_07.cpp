#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float r, x, y;
	cout << "\nВведите радиус: ";
	cin >> r;
	cout << "\nВведите координату x: ";
	cin >> x;
	cout << "\nВведите координату y: ";
	cin >> y;
	if (pow(x, 2) + pow(y, 2) <= pow(r, 2))
	{
		if (x >= y)
		{
			if (y >= 0)
			{
				cout << "\nТочка находится в заштрихованной области\n";
			}
			else
			{
				cout << "\nТочка НЕ находится в заштрихованной области\n";
			}
		}
		else
		{
			cout << "\nТочка НЕ находится в заштрихованной области\n";
		}
	}
	else
	{
		cout << "\nТочка НЕ находится в заштрихованной области\n";
	}
}

/*int main()
{
	setlocale(LC_ALL, "Russian");
	float r, x, y;
	bool way;
	cout << "Введите способ решения (0 - короткий, 1 - длинный): ";
	cin >> way;
	cout << "\nВведите радиус: ";
	cin >> r;
	cout << "\nВведите координату x: ";
	cin >> x;
	cout << "\nВведите координату y: ";
	cin >> y;
	if (!way)
	{
		if (pow(x, 2) + pow(y, 2) <= pow(r, 2) && x >= y && y >= 0)
		{
			cout << "\nТочка находится в заштрихованной области\n";
		}
		else
		{
			cout << "\nТочка НЕ находится в заштрихованной области\n";
		}
	}
	else
	{
		if (pow(x, 2) + pow(y, 2) <= pow(r, 2))
		{
			if (x >= y)
			{
				if (y >= 0)
				{
					cout << "\nТочка находится в заштрихованной области\n";
				}
				else
				{
					cout << "\nТочка НЕ находится в заштрихованной области\n";
				}
			}
			else
			{
				cout << "\nТочка НЕ находится в заштрихованной области\n";
			}
		}
		else
		{
			cout << "\nТочка НЕ находится в заштрихованной области\n";
		}
	}
}*/