#include <iostream>

int x;
int y;
typedef long long ll;

ll subsequnceSum(int x, int y)
{
	ll sum = 0;
	while (x <= y)
	{
		sum += (1 / ((x + 1) * (x + 1)));
		x++;
	}
	return sum;
}   

int main()
{
	scanf("%d%d\n", &x, &y);
	printf("%d\n", subsequnceSum(x, y));
	return 0;
} 
