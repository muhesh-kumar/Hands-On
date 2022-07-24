
// Author: Muhesh Kumar

#include<bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> v = {1,2 , 3, 4};
	vector<int> w = move(v);	
	cout << "v: ";
	for (auto i: v) cout << i << " ";
	cout << "\n";
	cout << "w: ";
	for (auto i: w) cout << i << " ";
	return 0;
}
