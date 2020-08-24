#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <iterator>
#include <unordered_map>

using namespace std;

int N = 10010;
int n, k;
string s;
string ss[N];

unordered_map<string, string> map;

int anag(string ss[])
{
	int count = 0;
	for (int i = 0; i < ss.size(); ++i) map[i] = sort(ss[i].begin, ss[i].end);
	map<int, string>::reverse_iterator it; 
	for (it = map.rbegin(); it != map.rend(); it++) 
	{
		for (int j = 0; j < map.size(); j++) 
		{
			if (it == map[j]) count++;
		}
	}
	return count;
	
}

int main()
{
	cin >> n >> k;
	cin >> s;
	istringstream iss(sentence);
    copy(istream_iterator<string>(iss),
         istream_iterator<string>(),
         ostream_iterator<string>(ss, "\n"));
    cout << anag(ss) << endl;
}