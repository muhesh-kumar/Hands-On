
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

int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vi v = {0, 3, 2, 6, 7, 1, 5, 4, 3, 0};
    vi dp(sz(v));
    
    // jumps from 1 to 2;
    dp[0] = v[0]; dp[1] = v[1] + dp[0];
    rep(i, 2, sz(v)) {
        dp[i] = min(dp[i - 1], dp[i - 2]) + v[i];
    }
    repeach(i, dp) cout << i << " ";
    cout << nl;


    // jumps from 1 to k;
    // (for that we need k previous values...)..in that case we need to take
    // min of k previous values..min(dp[i - 1], dp[i-2], .....dp[i - k])
    // we will make a queue of 2 stacks and keep track of the mininum of k values in linear time.

    return 0;
}