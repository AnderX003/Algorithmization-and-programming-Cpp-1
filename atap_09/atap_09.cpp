#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	for (float t = -1; t <= 5; t += 0.5)
	{
		float x;
		if (t < 2)
		{
			x = sqrt(abs(t) + 1.2);
		}
		else if (t == 2)
		{
			x = 2 + t;
		}
		else
		{
			x = log(pow(t, 2) + 1);
		}
		cout << "\tt =" << setw(5) << t << "\tx =" << setw(8)
			<< x << "\ty = " << (x / pow(x + 2.3, 3)) << endl;
	}
}



