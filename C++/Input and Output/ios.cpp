
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

int main() {
 
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    // Typical Input/Output Routines

    // The number of test cses is given in the first line of the input
    // int tc; cin >> tc; // number of test cases
    // while(tc--) { // shortcut to repeat until 0.
    //     int a, b; cin >> a >> b; // compute answer on the fly;
    //     cout << a + b << nl;
    // }

    // The multiple test cases are terminated by special values (usually zeros).
    // int a, b;
    // // stop when both integers are 0
    // while(cin >> a >> b, (a || b)) {
    //     cout << a + b << nl;
    // }

    // The multiple test cases are terminated by the EOF signal
    // int a, b;
    // while(scanf("%d %d", &a, &b) == 2) {
    //     cout << a + b << nl;
    // }

    // or you can check for EOF, i.e.
    // int a, b;
    // while(scanf("%d %d", &a, &b) != EOF) {
    //     cout << a + b << nl;
    // }

    // case numbers and blank lines
    // int a, b, c = 1;
    // while(scanf("%d %d", &a, &b) != EOF) {
    //     printf("Case %d: %d\n\n", c++, a + b);
    // }

    // blank lines only between test cases:
    // int a, b, c = 1;
    // while(scanf("%d %d", &a, &b) != EOF) {
    //     if (c > 1) printf("\n"); // 2nd /more cases
    //     printf("Case %d: %d\n", c++, a + b);
    // }

    // variable number of inputs
    // int k, ans, v;
    // while(scanf("%d", &k) != EOF) {
    //     ans = 0;
    //     while(k--) {
    //         scanf("%d", &v); ans += v;
    //     }
    //     printf("%d\n", ans);
    // }

    return 0;
}