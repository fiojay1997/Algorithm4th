#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int N = 10010;
int n, k;
string s;
string ss[N];

unordered_map<string, string> map;

int anag(string ss[])
{
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
   scanf("%d%d\n", n, k);
   scanf("%s\n", s);
   cout << anga(ss) << endl;
}
