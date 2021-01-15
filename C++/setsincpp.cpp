
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
#define sc second;

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

#define amax a = max(a, b)
#define amin a = min(a, b)

#define rep(i, a, b) for(int i = a; i < b; i++)
#define repeq(i, a, b) for (int i = a; i <= b; i++)
#define reprev(i, b, a) for (int i = b - 1; i >= a; i--)
#define repeach(a, b) for (auto& (a): (b))

int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vi a = {1, 2, 3, 4, 5, 6, 7};
    vi b = {3, 5, 6, 7, 8, 9};
    vi c(sz(a) + sz(b));
    sor(a); sor(b);
    
    auto it = set_intersection(all(a), all(b), bg(c));
    auto it = set_difference(all(a), all(b), bg(c));
    auto it = set_union(all(a), all(b), bg(c));
    auto it = set_symmetric_difference(all(a), all(b), bg(c));
    
    // for merging two sorted ranges:
    // merge(all(a), all(b), bg(c));
    
    c.resize(it - bg(c));
    // cout << sz(c);
    repeach(i, c) cout << i << " "; cout << nl;

    return 0;
}