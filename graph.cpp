#include <iostream>

using namespace std;

struct empty
{
	
};

int main()
{
	empty e;
	cout << sizeof(e) << endl;
}