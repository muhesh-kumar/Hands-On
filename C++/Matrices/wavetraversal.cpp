
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

	int matrix[3][4] = {
		{11, 12, 13, 14},
		{21, 22, 23, 24},
		{31, 32, 33, 34}
	};	
	int r = 3, c = 4;
	for (int i = 0; i < c; i++) {
		if (i % 2 == 0)
			for (int j = 0; j < r; j++) {
				cout << matrix[j][i] << " ";
			}
		else {
			for(int j = r - 1; j >= 0; j--) {
				cout << matrix[j][i] << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
