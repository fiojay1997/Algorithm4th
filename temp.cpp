#include <iostream>
#include <string>

using namespace std;

template <typename T>

struct Point
{
	T x, y;
	Point(T x = 0, T y = 0):x(x), y(y) {}
};

template <typename T>

Point<T> operator + (const Point<T>& A, const Point<T>& B)
{
	return Point<T>(A.x + B.x, A.y + B.y);
}

template <typename T>

ostream& operator << (ostream &out, const Point<T>& p) 
{
	out << "(" << p.x << "," << p.y << ")";
	return out; 
}

int main() 
{
    string s1 = "abc";
    string s2 = "bac";
    int res = s1.compare(s2);
    cout << res << endl;
    return 0;
}
