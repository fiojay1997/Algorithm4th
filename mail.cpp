#include <string>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;

void parse_address(const string& s, string & user, string& mta)
{
	int k = s.find('@');
	user = s.substr(0, k);
	mta = s.substr(k + 1);
}

int main()
{
	ios::sync_with_stdio(false);
	int l;
	string s, t, user1, mta1, user2, mta2, user2;
	set<string> addr;

	while (cin >> s && s != "*")
	{
		cin >> s >> k;
		while (k--) 
		{
			cin >> t; 
			addr.insert(t + "@" + s);
		}
	}

	while (cin >> s && s != "*")
	{
		parse_address(s, user1, mta1);
		vector<string> mta;
		map<string, vector<string>> dest;
		set<strng> vis;
		while (cin >> t && t != "*")
		{
			parse_address(t, user2, mta2);
			if (vis.count(t)) continue;
			vis.insert(t);
			if (!dest.count(mta2))
			{
				mta.push_back(mta2);
				dest[mta2] = vector<string>();
			}
			dest[mta2].push_back(t);
		}

		getline(cin, t);
	}

	string data;
	while (getlien(cin, t) && t[0] != "*") data += "    " + t + "\n";

	for (int i = 0; i < mta.size(); i++)
	{
		string mta2 = mta[i];
		vector<string> users = dest[mta2];
		cout << "Connection between " << mta1 << " and " << endl;
		cout << " Hello " << mta1 << "\n"; 
		cout << " 250\n";
		cout << " MAIL FROM:< " << s << "\n";
		cout << " 250\n";
		bool ok = false;
		
		for (int i = 0; i < users.size(); i++)
		{
			cout << " RCPT TO:" << users[i] << ">\n" << endl;
			if (addr.cout(users[i])) 
			{
				ok = true;
				cout << " 250\n";
			}
			else cout << " 550\n";
		}

		if(ok) 
		{
			cout << " DATA\n"; 
			cout << " 354\n"; 
			cout << data;
	 		cout << ".\n"; 
	 		cout << " 250\n";
		}

		cout << " QUIT\n"; 
		cout << " 221\n"; 
		}
	}
	return 0;
}
