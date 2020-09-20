#include <iostream>

using namespace std;

int n, k;
const int N = 1e5 + 10;
int a[N];

int[] get_res()
{
    int sum = 0;
    for (int i = 0; i < n; i++) sum += a[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > 0; j--)
        {
            
        }
    }
}

int main()
{
    cin << n << k;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int res[] = get_res();
    for (auto a : res) cout << a << endl;
    return 0;
}
