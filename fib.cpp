#include <iostream>
#include <vector>

using namespace std;

int N;

// memo 
int fib(int N)
{
	if (N < 1) return 0;
	vector<int> memo(N + 1, 0);
	return helper(memo, N);
}

int helper(vector<int>& memo, int N)
{
	if (N == 1 || N == 2) return 1;
	if (memo[N] != 0) return memo[N];
}

// dp table
int fib2(int N) {
    vector<int> dp(N + 1, 0);
    dp[1] = dp[2] = 1;
    for (int i = 3; i <= N; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    return dp[N];
}

// dp table with O(1) space complexity
int fib3(int n) {
    if (n == 2 || n == 1) 
        return 1;
    int prev = 1, curr = 1;
    for (int i = 3; i <= n; i++) {
        int sum = prev + curr;
        prev = curr;
        curr = sum;
    }
    return curr;
}

int main()
{
	scanf("%d", &N);
	cout << fib(N) << endl;
	cout << fib(N) << endl;
	cout << fib(N) << endl;
	return 0;
}