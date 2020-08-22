#include <iostream>

using namespace std;

int peasant_mul(int x, int y)
{
	int prod = 0;
	while (x > 0) 
	{
		if (x % 2 != 0)
			prod = prod + y;
		x = x / 2;
		y = y + y;
	}
	return prod;
}

int main()
{
	int res = peasant_mul(10, 20);
	int res2 = peasant_mul(2012, 10);
	int res3 = peasant_mul(120391, 1000211);
	cout << res << endl;
	cout << res2 << endl;
	cout << res3 << endl;
	return 0;
}