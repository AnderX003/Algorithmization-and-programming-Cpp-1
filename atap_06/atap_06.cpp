#include <iostream>
using namespace std;
int main()
{
	bool x, y, z;
	cin >> x;	
	cin >> y;	
	cin >> z;
	cout << "result: ";
	cout << !(!x && !y && (x || y) || z) << endl;
}
