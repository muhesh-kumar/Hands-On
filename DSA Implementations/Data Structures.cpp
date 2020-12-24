#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	// Strings
	// string a = "Watermelon";
	// cout << a.substr(2, 5);

	// Set
	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	cout << s.count(1)<< "\n";
	cout << s.count(4) << "\n";

	// Map
	map<string, int> m;
	m["monkey"] = 4;
	m["lion"] = 3;
	cout << m["lion"]; // 3
	cout << m["horse"]; // 0
}