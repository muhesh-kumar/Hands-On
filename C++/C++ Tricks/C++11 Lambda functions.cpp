
// Author: Muhesh Kumar

#include<bits/stdc++.h>
using namespace std;

int main() {
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// lambdas are like other languages'closure. It defines like this:
	// [capture list] (paramters) -> return value {body}	

	// eg:
	auto f = [] (int a, int b) -> int {return a + b;};
	cout << f(1, 2);
	// you can use lambdas in for_each, sort and many more STL functions.
	vector<int> v = {1, 2, 4, 5, 6};
	sort(begin(v), end(v), [] (int a, int b) {return a > b;});
	for (auto i: v) cout << i << " ";
	return 0;
}
