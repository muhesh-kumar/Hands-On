
// Author: Muhesh Kumar

#include<bits/stdc++.h>
using namespace std;

using ll  = long long;
using db = long double;
using str = string;

using pi = pair<int, int>;
using pl = pair<ll, ll>;
using pd = pair<db, db>;

using vi = vector<int>;
using vb = vector<bool>; 
using vl = vector<ll>;
using vd = vector<db>;
using vs = vector<str>;

using vpi = vector<pi>;
using vpl = vector<pl>;
using vpd = vector<pd>;

using vvi = vector<vi>;
using vvl = vector<vl>;

using si = set<int>;
using sl = set<ll>;
using ss = set<str>;

#define fr first
#define sc second

#define sz(x) (x).size()
#define bg(x) begin(x)
#define all(x) bg(x), end(x)

#define ft front()
#define bk back()
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define eb emplace_back
#define nl '\n'

#define rev(v) reverse(all(v))
#define sor(v) sort(all(v))
#define lb lower_bound
#define ub upper_bound

#define amax(a, b) a = max(a, b)
#define amin(a, b) a = min(a, b)

#define rep(i, a, b) for(int i = a; i < b; i++)
#define repeq(i, a, b) for (int i = a; i <= b; i++)
#define reprev(i, b, a) for (int i = b - 1; i >= a; i--)
#define repeach(a, b) for (auto& (a): (b))

ll mod = 1000000007;


// -------------------FUNCTIONS RELATED TO MATH----------------------


// LCM of 2 numbers
ll lcm(ll a, ll b) {
    return a / __gcd(a, b) * b;
}

// Calculate the logarithm of a to the base b
ll logab(ll a, ll b) {
    return (ll) (log(a)/log(b));
}

// Checking if n is a perfect square number or not
bool is_perfect_square(ll n) {
    ll sq = sqrt(n);
    if (sq*sq == n) return true;
    return false;
}

// a ** b in logn
ll binpow(ll a, ll b) {
    ll res = 1;
    while(b > 0) {
        if (b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

// Any base to Decimal Number System
int to_decimal(string num, int base) {
    int ans= 0, size = num.size();
    for(int i = 0; i < size; i++) {
        if(num[i]>='A') {
            ans += (num[i]-'A'+10) * pow(base,size-i-1);
        } 
        else {
            ans += (num[i]-'0') * pow(base,size-i-1);
        }
    }
    return ans;
}

// Decimal Number to any Base
char sing_dig_prep(int n) {
    if(n < 10) return n+'0';
    else if(n >= 10) {
        return 'A'+ (n - 10);
    } 
}
str decimal_to(int decimal, int base) {
    stack<char> rems;
    if(decimal == 0) return "0";
    while(decimal > 0) {
        char rem = sing_dig_prep(decimal%base);
        decimal = decimal/base;
        rems.push(rem);
    }
    string any_base = ""; 
    while(!rems.empty()) {
        any_base += rems.top();
        rems.pop();
    }
    return any_base;
}

// Conversion of decimal number to its corresponding octal number
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



// -------------------------FUNCTIONS RELATED TO COMBINATORICS-------------------------

// nth fibonacci in O(1) using Binet's Formula
ll fib(ll n) {
    n--;
    return round(pow((1+sqrt(5))/2, n)/sqrt(5));
}

// Factorial in O(n) using DP
ll factorial(ll n) {
    vl dp(n+1, 0);
    dp[0] = dp[1] = 1;
    if (n == 0 || n == 1) return dp[n];
    else {
        if (dp[n] != 0) return dp[n];
        else {
            ll res = n*factorial(n - 1);
            dp[n] = res;
            return res;
        }
    }
}

// nPr
ll nPr(ll n, ll r) {
    return factorial(n)/factorial(n-r);
}

// nCr
ll nCr(ll n, ll r) {
    return factorial(n)/factorial(r)*factorial(n-r);
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




// --------------------------FUNCTIONS RELATED TO PRIME NUMBERS:-------------------------

// No of divisors in sqrt(n)
ll no_of_divisors(ll n) {
    ll count = 0;
    for (int i = 1; i <= sqrt(n); i++)
        if (n % i == 0) {
            if (n/i == i) count++;
            else count += 2;
        }
    return count;
}

// Divisors in sqrt(n)
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

// Sum of Divisors in sqrt(n)
ll sum_of_divisors(ll n) {
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
    ll sum = 0;
    repeach(i, v) sum += i;
    return sum;
}

// Primality Test in O(sqrt(N))
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

// Number of prime factors in O(sqrt(n))
ll no_of_prime_factors(ll n) {
    ll ans = 0;
    while (n % 2 == 0) {  
        ans++;
        n /= 2;  
    }  
    for (int i = 3; i <= sqrt(n); i += 2) {  
        while (n % i == 0) {  
            ans++;  
            n = n/i;  
        }  
    }  
    if (n > 2)  
        ans++;
    return ans;
}

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

// Sieve
ll _sieve_size;
bitset<10000010> bs;
vi primes;

void sieve(ll upperbound) {
    _sieve_size = upperbound + 1;
    bs.set();
    bs[0] = bs[1] = 0;
    for (ll i = 2; i <= _sieve_size; i++) {
        if (bs[i]) {
            for (ll j = i * i; j <= _sieve_size; j += i) {
                bs[j] = 0;
            }
            primes.push_back((int) i);
        }
    }
}

// Number of Prime factors with sieve
ll numPF(ll N) {
    ll PF_idx = 0, PF = primes[PF_idx], ans = 0;
    while(PF * PF <= N) {
        while(N % PF == 0) { N /= PF; ans++; }
        PF = primes[++PF_idx];
    }
    if (N != 1) ans++;
    return ans;
}

// Number of different Prime factors using Sieve
ll numDiffPF(ll N) {
    ll PF_idx = 0, PF = primes[PF_idx], ans = 0;
    while (PF * PF <= N) {
        if (N % PF == 0) ans++;
        while (N % PF == 0) N /= PF;
        PF = primes[++PF_idx];
    }
    if (N != 1) ans++;
    return ans;
}

// Sum of Prime Factors using Sieve
ll sumPF(ll N) {
    ll PF_idx = 0, PF = primes[PF_idx], ans = 0;
    while (PF * PF <= N) {
        while (N % PF == 0) { N /= PF; ans += PF; }
        PF = primes[++PF_idx];
    }
    if (N != 1) ans += N;
    return ans;
}

// Number of Divisors using Sieve in O(n ^ 1/3)
ll numDiv(ll N) {
    ll PF_idx = 0, PF = primes[PF_idx], ans = 1;
    while (PF * PF <= N) {
        ll power = 0;
        while (N % PF == 0) { N /= PF; power++; }
        ans *= (power + 1);
        PF = primes[++PF_idx];
    }
    if (N != 1) ans *= 2;
    return ans;
}

// Sum of Divisors using Sieve
ll sumDiv(ll N) {
    ll PF_idx = 0, PF = primes[PF_idx], ans = 1;
    while (PF * PF <= N) {
        ll power = 0;
        while (N % PF == 0) { N /= PF; power++; }
        ans *= ((ll) pow((double) PF, power + 1.0) - 1) / (PF - 1);
        PF = primes[++PF_idx];
    }
    if (N != 1) ans *= ((ll) pow((double) N, 2.0) - 1) / (N - 1);
    return ans;
}

// Prime Factors using Sieve in O(logN)
vi primeFactors(ll N) {
    vi factors;
    ll PF_idx = 0, PF = primes[PF_idx];
    while (PF * PF <= N) {
        while(N % PF == 0) { N /= PF; factors.eb(PF); }
        PF = primes[++PF_idx];
    }
    if (N != 1) factors.eb(N);
    return factors;
}

// EulerPhi function using Sieve
ll EulerPhi(ll N) {
    ll PF_idx = 0, PF = primes[PF_idx], ans = N;
    while (PF*PF <= N) {
        if (N % PF == 0) ans -= ans / PF;
        while (N % PF == 0) N /= PF;
        PF = primes[++PF_idx];
    }
    if (N != 1) ans -= ans / N;
    return ans;
}

int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    return 0;
}