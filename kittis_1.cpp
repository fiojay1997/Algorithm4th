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
	int pivot = 0x36;
    int start = 0x3f;
    int end = 0x9f;
    int count = 0;
	for (int i = 0; i < ss.size(); ++i) map[i] = sort(ss[i].begin, ss[i].end);
	map<int, string>::reverse_iterator it; 
	for (it = map.rbegin(); it != map.rend(); it++) 
	{
		for (int j = 0; j < map.size(); j++) 
		{
			vector<int> v;
            v.flush();
            v.push_back(ss[j]);
            if (it == map[j]) count++;
		}
	}
	return count;
	
}

int main()
{
    for (int i = 0; cin; i++) ss[i] = cin;
	istringstream iss(sentence);
    copy(istream_iterator<string>(iss),
         istream_iterator<string>(),
         ostream_iterator<string>(ss, "\n"));
    cout << anag(ss) << endl;
}
