
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
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vi a = {11, 12, 13, 14, 15, 16, 17};
    vi b = {11, 12, 13, 13, 14, 14, 15, 15, 16, 17};
    // int x; cin >> x;

    // binary_search() returns 1 if the element is present in the container else it returns 0
    // cout << binary_search(all(a), x) << nl;
    // cout << binary_search(all(b), x) << nl;
    
    // SYNTAX:
    // lower_bound() - returns an iterator pointing at the index of the value == given value. If it doesn't exist
    // auto itr = *lb(all(a), x); // we use * to access the element the iterator is pointing to ie. dereferencing the iterator.
    // auto it = lb(all(a), x) - bg(a); // we can get the index of the element by subtracting the beginning iterator .begin() of the container to the lb() function.
    // cout << itr << " "  << it << nl;
    
    // Example1: ELEMENT IS PRESENT AND OCCURS ONLY ONCE.
    // auto itr = *lb(all(a), 14); // returns the value 14
    // auto it = lb(all(a), 14) - bg(a); // returns the index of 14
    // cout << itr << " " << it << nl;

    // auto itr = *ub(all(a), 14); // returns the value 15
    // auto it = ub(all(a), 14) - bg(a); // returns the index of 15
    // cout << itr << " " << it << nl;


    // Example2: ELEMENT IS PRESENT AND OCCURS MULTIPLE TIMES.
    // So, if the passed value is present multiple times in the container, it returns the first index of the value's occurence
    // auto itr = *lb(all(b), 13); // returns the value 13
    // auto it = lb(all(b), 13) - bg(b); // returns the index of first occurence of 13
    // cout << itr << " " << it << nl;

    // auto itr = *ub(all(b), 13); // returns the value 14 (immediate greater value of 13 present in the container)
    // auto it = ub(all(b), 13) - bg(b); // returns the index of first occurence of 14 (immediate greater value of 14 present in the container)
    // cout << itr << " " << it << nl;


    // Example3: ELEMENT IS NOT PRESENT AND THE PASSED ELEMENT IS LESSER THAN THE CONTAINER'S MINIMUM VALUE
    // In this case, it returns the iterator .begin() and dereferencing results in the minimum value of the container
    // Here both upper_bound() and lower_bound() behaves in the same way.
    
    // auto itr = *lb(all(a), 3); // returns the the first value of the container v[0]
    // auto it = lb(all(a), 3) - bg(a); // returns 0 
    // cout << itr << " " << it << nl;


    // Example4: ELEMENT IS NOT PRESENT AND THE PASSED ELEMENT IS GREATER THAN THE CONTAINER'S MAXIMUM VALUE
    // In that case it returns the .end() iterator and dereferncing results in the returning of a garbage value.
    // Here both upper_bound() and lower_bound() behaves in the same way.

    // auto itr = *lb(all(a), 20); // returns a garbage value
    // auto it = lb(all(a), 20) - bg(a); // returns the size of the container.
    // cout << itr << " " << it << nl;


    // Example5: ELEMENT IS NOT PRESENT AND ITS VALUE LIES WITHIN THE CONTAINER'S MAXIMUM AND MINIMUM VALUE
    // In this case it returns an iterator pointing to the immediate greater value of the passed value in the container.
    // Here both upper_bound() and lower_bound() behaves in the same way.

    // vi c = {11, 12, 14, 15, 16, 19, 29, 89};
    // auto itr = *lb(all(c), 17); // returns 19
    // auto it = lb(all(c), 17) - bg(c); // returns 5
    // cout << itr << " " << it << nl;


    return 0;
}