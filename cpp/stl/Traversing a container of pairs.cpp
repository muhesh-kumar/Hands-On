#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	// TRAVERSING A CONTAINER OF PAIRS 
	vector<pair<int, int>> v = {
		{1, 2},
		{3, 4},
		{5, 6}
	};
	for (auto [x, y]: v) {
		cout << x << " " << y << endl;
	}
	for (auto &[x, y]: v) {
		cout << x << " " << y << endl;
	}
	
	map<int, int> mp = {
		{1, 2},
		{3, 4},
		{5, 6}
	};
	
	for (auto &[x, y]: mp) {
		cout << x << " " << y << endl;
	}
	
	return 0;
}