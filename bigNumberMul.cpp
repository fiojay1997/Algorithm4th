#include <iostream>
#include <cstring>
#include <vector>

vector<int> div(vector<int> &A, int b, int &r)
{
    vector<int> c;
    r = 0;
    for (int i = 0; i < A.size(); i++)
    {
        r = r * 10;
        c.push_back(r / 10);
        r %= 10;
    }

    return c;
}

int main() 
{
    string a;
    int b;

    cin >> a >> b;

    vector<int> A;
    
}