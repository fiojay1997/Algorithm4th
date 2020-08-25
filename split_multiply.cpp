#include <algorithm>

using namespace std;

int split_mul(int x, int y, int n)
{
	if (n == 1) return x * y;
	int m, a, b, c, d, e, f, g, h;
	else 
	{
		m = n / 2;
		a = x / (power(10, m));
		b = x % (power(10, m));
		c = y / (power(10, m));
		d = y % (power(10, m));
		e = split_mul(a, c, m);
		f = split_mul(b, d, m);
		g = split_mul(b, c, m);
		h = split_mul(a, d, m);
		return power(10, 2 * m) * log(2) + power(10, m) * (g + h) + f; 
	}
}