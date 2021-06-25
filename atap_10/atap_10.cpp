#include <iostream>
using namespace std;

int main()
{
	float input;
	int way, x;
	cout << "0 -> for\n1 -> while\n2 -> do-while\n-------\n";
	cin >> way;
	cout << "enter number: ";
	cin >> input;
	cout << "-------" << endl;
	x = input > 0 ? (input > (int)input ? input + 1 : input) : 1;
	switch (way)
	{
		default:
		case 0:
		{
			for (int counter = 0; counter < 5;)
			{
				bool isPrime = true;
				for (int j = 2; j < x; j++)
				{
					if (x % j == 0)
					{
						isPrime = false;
						break;
					}
				}
				if (isPrime)
				{
					counter++;
					cout << x << endl;
				}
				x++;
			}
			break;
		}
		case 1:
		{
			int counter = 0;
			while (counter < 5)
			{
				bool isPrime = true;
				int j = 2;
				while (j < x)
				{
					if (x % j == 0)
					{
						isPrime = false;
						break;
					}
					j++;
				}
				if (isPrime)
				{
					counter++;
					cout << x << endl;
				}
				x++;
			}
			break;
		}
		case 2:
		{
			int counter = 0;
			do
			{
				bool isPrime = true;
				int j = 2;
				do
				{
					if (x % j == 0)
					{
						isPrime = false;
						break;
					}
					j++;
				} while (j < x);
				if (isPrime)
				{
					counter++;
					cout << x << endl;
				}
				x++;
			} while (counter < 5);
			break;
		}
	}
	/*float input;
	cin >> input;
	cout << "-------" << endl;
	int x = input > 0 ? (input > (int)input ? input + 1 : input) : 1;
	for (int counter = 0; counter < 5;)
	{
		bool isPrime = true;
		for (int j = 2; j < x; j++)
		{
			if (x % j == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
		{
			counter++;
			cout << x << endl;
		}
		x++;
	}*/
}