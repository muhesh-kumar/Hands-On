#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool is_prime (ll n) {
	if (n == 2) {
		return true;
	} else if (n == 1 || n %2 == 0) return false;
	else {
		for (int i = 3; i*i <= n; i += 2) {
			if (n % i== 0) return false;
		}
		return true;
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	if (is_prime(n)) cout << "PRime";
	else cout << "Not a prime!";

}