#include <iostream>

int x;

void triangle(int x)
{
	while (x > 0) 
	{
		for (int j = 0; j < x; j++) cout << " ";
		for (int i = x; i >= 0; i--) cout << "*";
		cout << endl;
	}
}

int main()
{
	scanf("%d\n", x);
	triangle(x);
	return 0;
}