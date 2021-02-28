
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
#define mxele(v) *max_element(all(v))
#define mnele(v) *min_element(all(v))

#define rep(i, a, b) for(int i = a; i < b; i++)
#define repeq(i, a, b) for (int i = a; i <= b; i++)
#define reprev(i, b, a) for (int i = b - 1; i >= a; i--)
#define repeach(a, b) for (auto& a: b)



// 1. factorial
int fact(int n) {
    if (n == 0 || n == 1) return 1;
    else return n*fact(n - 1);
}

// 2. sum of the digits of a number n
int sum_of_digs(int n) {
    if (n < 10) return n;
    return n % 10 + sum_of_digs(n / 10);
}

void rev_str(str s, int n) {
    // n is the size of the string s
    n--;
    if (n == 0) {
        putchar(s[n]);
        return;
    }
    putchar(s[n]);
    rev_str(s, n);
}

str rev_ord = "";
bool is_pal(str s, int n) {
    n--;
    if (n == 0) {
        rev_ord += s[n];
        if (s == rev_ord) return true;
        else return false;
    }
    rev_ord += s[n];
    is_pal(s, n);
}


int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int n;cin >> n;
    // cout << fact(n) << nl;
    // cout << sum_of_digs(n) << nl;

    // str s; cin >> s;
    // rev_str(s, sz(s));   

    // if(is_pal(s, sz(s))){
    //     cout << "Palindrome";
    // } else cout << "Not a palindrome!";

    return 0;
}