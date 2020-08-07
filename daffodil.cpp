#include <iostream>

int x;

bool daffodil(int x)
{
	int sum = 0;
	int temp = x;
	int divisor = 10;
	while (temp >= 0) {
		sum += ((temp % divisor) * (temp % divisor) * (temp % divisor));
		divisor *= 10;
		temp /= 10;
	}
	printf("%d\n", sum);
	return sum == x;
}

int main()
{
	scanf("%d\n", &x);
	if (daffodil(x)) printf("%s\n", "true");
	else printf("%s\n", "false");
}