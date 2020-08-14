#include <iostream>
#include <vector>

using namespace std;

int N;

int fib(int N)
{
	if (N < 1) return 0;
	vector<int> memo(N + 1, 0);
	return helper(memo, N);
}

int helper(vector<int>& memo, int N)
{
	if (N == 1 || N == 2) return 1;
	if (memo[n] != 0) return memo[n];
}

int main()
{
	scanf("%d", &N);
	cout << fib(N) << endl;
	return 0;
}