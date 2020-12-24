#include<bits/stdc++.h>
using namespace std;

#define ll long long

void sieve_of_eratosthenes(ll n) {
	// create a boolean array of size n+1
	bool primes[n+1];
	// set all the values of the boolean array to be true
	memset(primes, true, sizeof(primes));

	// Update all the mutliples of first prime number to be false.
	// The remaining numbers(indices which have the value as true) are prime
	for (int i = 2; i*i <= n; i++) {
		if (primes[i]) {
			for (int j = i*i; j <= n; j += i) {
				primes[j] = false;
			}
		}
	}
	for (int i = 2; i <= n; i++) {
		if (primes[i]) cout << i << " ";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	sieve_of_eratosthenes(n);
	// SieveOfEratosthenes(n);
}