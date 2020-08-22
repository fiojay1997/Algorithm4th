#include <iostream>

using namespace std;

int[] fib_mul(int x[], int y[]) 
{
	int hold = 0;
	int z[];
	for (int k = 0; k < x.size() + y.size(); i++) 
	{
		for (int i = 0, int j = 0; i + j = k; i++, j++) 
			hold = hold + x[i] * y[j];
		z[k] = hold % 10;
		hold = hold /10;
	}

	return z;
}