
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

ll mod = 1000000007;

void printrow(int, int, bool);
void printspace(int);
void printstar(int);

int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    bool cond = n > 0;
    printrow(n, 0, cond);
    
    return 0;
}

void printrow(int n, int m, bool is_pos) {
    if (n == 0) return;
    if (is_pos) {
        printspace(n - 1);
        printstar(m);
    } else {
        n = abs(n);
        printspace(m);
        printstar(n - 1);
    }
    cout << nl;
    printrow(n - 1, m + 1, is_pos);
}

void printspace(int n) {
    if (n == 0) return;
    cout << "-";
    printspace(n - 1);
}

void printstar(int n) {
    if (n < 0) return;
    cout << "#";
    printstar(n - 1);
}