#include <iostream>
using namespace std;

int main()
{
	string result, symbol;// , symbols[ ] = { "X","IX","V","IV", "I" };
	int n, value;//, values[ ] = { 10,9,5,4,1 };
	cin >> n;
	for (int i = 0; i < 5; i++)
	{
		switch (i)
		{
			case 0: symbol = "X"; value = 10; break;
			case 1: symbol = "IX"; value = 9; break;
			case 2: symbol = "V"; value = 5; break;
			case 3: symbol = "IV"; value = 4; break;
			case 4: symbol = "I"; value = 1; break;
		}
		while (n - value >= 0)
		{
			n -= value;
			result += symbol;
		}
	}
	cout << result << endl;
	/*
	int d;
	cin >> d;
	switch (d % 7)
	{
		case 1:
			cout << "Понедельник\n";
			break;
		case 2:
			cout << "Вторник\n";
			break;
		case 3:
			cout << "Среда\n";
			break;
		case 4:
			cout << "Четверг\n";
			break;
		case 5:
			cout << "Пятница\n";
			break;
		case 6:
			cout << "Суббота\n";
			break;
		case 0:
			cout << "Воскресенье\n";
			break;
		default:
			cout << "Ошибка\n";
			break;
	}*/
}
