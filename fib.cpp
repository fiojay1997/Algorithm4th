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

int fib2(int N) {
    vector<int> dp(N + 1, 0);
    dp[1] = dp[2] = 1;
    for (int i = 3; i <= N; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    return dp[N];
}

int main()
{
	scanf("%d", &N);
	cout << fib(N) << endl;
	cout << fib(N) << endl;
	return 0;
}