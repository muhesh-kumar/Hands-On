#include <bits/stdc++.h>
using namespace std;

int main() {
	
	vector<int> a = {1, 2, 3, 4};
	vector<int> b = {5, 6, 7, 8};
	
	a.reserve(a.size() + b.size());
	a.insert(a.end(), b.begin(), b.end());
	
	for (auto i: a) cout << i << endl;
	
	return 0;
}