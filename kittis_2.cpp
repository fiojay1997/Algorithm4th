#include <iostream>
#include <cmath>
using namespace std;

unsigned long d;
int k;
const unsigned long N = 10e9 + 10;
unsigned long x[N], y[N];

int get_majority(unsigned long x[], unsigned long y[])
{
    int res = 0;
    unsigned long dis = 0;
    int ct = 0;
    long long dp = pow(d, 2);
    for (int i = 0; i < k - 1; i++)
    {
        dis = pow(x[i] - y[i], 2) + pow(x[i + 1] - y[i + 1], 2);
        if (ct == 0) res = i, ct = 1;
        else if (dis <= dp) ct++;
        else ct--;
    }
    return res;

}

int main()
{
    cin >> d;
    cin >> k;
    for (int i = 0; i < k; i++) scanf("%ld%ld", &x[i], &y[i]);

//    int res = get_majority(x, y);
  //  if (res == 0) cout << "NO" << endl;
  //  else cout << res << endl;
    return 0;
}

