#include <iostream>
using namespace std;

void fibonachi_recurshion(int n, int a = 0, int b = 1, int i = 3, bool started = false)
{
	if (n == 1)
	{
		cout << "0\n";
		return;
	}
	else if (n == 2)
	{
		cout << "0\n1\n";
		return;
	}
	if (!started)
	{
		cout << "0\n1\n";
	}
	if (i <= n)
	{
		int result = a + b;
		cout << result << endl;
		fibonachi_recurshion(n, b, result, i + 1, true);
	}
}

void fibonachi_cycle(int n)
{
	int a = 0; int b = 1; int result;
	if (n == 1)
	{
		cout << "0\n";
		return;
	}
	else if (n == 2)
	{
		cout << "0\n1\n";
		return;
	}
	else if (n > 2)
	{
		cout << "0\n1\n";
		for (int i = 2; i < n; i++)
		{
			result = a + b;
			cout << result << endl;
			a = b;
			b = result;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n; bool way;
	cout << "Введиите количество чисел ряда: ";
	cin >> n;
	cout << "\nВведиите метод решения (0 - рекурсивно, 1 - итеративно): ";
	cin >> way;
	cout << endl;
	way ? fibonachi_cycle(n) : fibonachi_recurshion(n);
	return 0;
}