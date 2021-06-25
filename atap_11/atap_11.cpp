#include <iostream>
using namespace std;

int countZeroBits(int n)
{
	int size = sizeof(n) * 8, result = size;
	for (int i = 0; i < size; i++)
	{
		int bit = 1 << (i + 1);
		if (n & bit) result--;
	}
	return result;
}

void print(int n)
{
	string result;
	do
	{
		result = (char)('0' + (n % 2)) + result;
		n = n / 2;
	} while (n > 0);
	cout << result << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите число: ";
	cin >> n;
	cout << "----------\nЧисло " << n << " в двоичной системе: ";
	print(n);
	cout << "----------\nКоличество нулевых битов числа: ";
	cout << countZeroBits(n) << endl;
}