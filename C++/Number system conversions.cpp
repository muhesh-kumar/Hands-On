
// Author: Muhesh Kumar

#include<bits/stdc++.h>
using namespace std;

int binary_to_decimal(int n) {
	int dec = 0;
	int i = 0;
	while(n > 0) {
		dec += (int)(pow(2, i)) * n % 10;
		n /= 10;
		i++;
	}
	return dec;
}

string decimal_to_binary(int n) {
	string bin = "";
	while(n > 0) {
		bin += to_string(n % 2);
		n /= 2;
	}
	reverse(bin.begin(), bin.end());
	return bin;
}

int main() {
	

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;	
	// string s; cin >> s;
	// cout << binary_to_decimal(n);
	cout << decimal_to_binary(n);
	return 0;
}
