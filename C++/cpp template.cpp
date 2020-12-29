
// Author: Muhesh Kumar

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define eb emplace_back
#define nl '\n'

ll lcm(ll a, ll b) {
    return a / __gcd(a, b) * b;
}

bool is_perfect_square(ll n) {
    ll sq = sqrt(n);
    if (sq*sq == n) return true;
    return false;
}

ll binpow(ll a, ll b) {
    ll res = 1;
    while(b > 0) {
        if (b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

// Primality Test in O(sqrt(n))
bool is_prime(ll n) {
    if (n == 2) return true;
    else if (n == 1 || n % 2 == 0) return false;
    else {
        for (int i = 3;i*i <= n; i += 2) {
            if (n % i == 0) return false;
        }
        return true;
    }
}

//  Primes in O(n * log(log(n))).
vector<ll> sieve(ll n) {
    vector<ll> v;
    bool primes[n+1];
    memset(primes, true, sizeof(primes));
    for (int i = 2; i*i <= n; i++) {
        if (primes[i]) {
            for (int j = i*i; j <= n; j += i) {
                primes[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
        if (primes[i]) v.eb(i);
    return v;
}

// Primes in the range L to R.

// Prime Factors in O(sqrt(n))
vector<ll> prime_factors(ll n) {  
    vector<ll> v;
    while (n % 2 == 0) {  
        v.eb(2);
        n /= 2;  
    }  
    for (int i = 3; i <= sqrt(n); i += 2) {  
        while (n % i == 0) {  
            v.eb(i);  
            n = n/i;  
        }  
    }  
    if (n > 2)  
        v.eb(n);
    return v;
}  

ll no_of_divisors(ll n) {
	ll count = 0;
	for (int i = 1; i <= sqrt(n); i++)
		if (n % i == 0) {
			if (n/i == i) count++;
			else count += 2;
		}
	return count;
}

vector<ll> divisors(ll n) { 
    vector<ll> v;
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            if (n/i == i) 
                v.eb(i);  
            else {
                v.eb(i);
                v.eb(n/i);
            }
        } 
    }
    return v; 
}

ll decimal_to_octal(ll deci_num) {
    int octal_num = 0, countval = 1;
    while (deci_num != 0) {
        int remainder = deci_num % 8;
        octal_num += remainder * countval;
        countval = countval * 10;
        deci_num /= 8;
    }
    return octal_num;
}

vector<vector<ll> > permutations(vector<ll> v) {
    vector<vector<ll> > perms;
    sort(v.begin(), v.end());
    do {
        vector<ll> sub;
        for (auto i: v) {
            sub.eb(i);
        }
        perms.eb(sub);
    } while(next_permutation(v.begin(), v.end()));
    
    return perms;
}

bool is_subsequence(string s1, string s2) {
    int j = 0;
    int m = s1.size(), n = s2.size();
    for (int i = 0; i < n && j < m; i++)
        if (s1[j] == s2[i])
            j++;
    return j == m;    
}

// To split a string based on a delimiter string
vector<string> split(const string& str, const string& delim)
{
    vector<string> tokens;
    size_t prev = 0, pos = 0;
    do {
        pos = str.find(delim, prev);
        if (pos == string::npos) pos = str.length();
        string token = str.substr(prev, pos-prev);
        if (!token.empty()) tokens.push_back(token);
        prev = pos + delim.length();
    }
    while (pos < str.length() && prev < str.length());
    return tokens;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int tc; cin >> tc;
	while(tc--) {
		
	}


	return 0;
}
