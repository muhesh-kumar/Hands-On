#include <bits/stdc++.h>
using namespace std;

vector<int> solve() {
	return vector<int>{1, 2, 3};
}

set<int> solve_set() {
	return set<int> {1, 2, 3};
}

int main() {
	// your code goes here
	vector<int> answer = solve();
	for (auto &ai: answer) {
		cout << ai << " ";
	}
	cout << endl;
	set<int> answer_set = solve_set();
	for (auto &ai: answer_set) {
		cout << ai << " ";
	}
	return 0;
}