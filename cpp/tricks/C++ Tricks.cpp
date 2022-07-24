
// Author: Muhesh Kumar

#include<bits/stdc++.h>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// 1. ASSIGN VALUE BY A PAIR OF {} TO A CONTAINER: --> DONT USE make_pair() function
	pair<int, int> p;
	vector<int> v;
	p = {1, 3};
	v = {2, 5};
	// even a more complex pair:
	pair<int, pair<char, long long > > p;
	p = {3, {'a', 8ll}};
	// what about vecor, deque, set and other containers?
	vector<int> v;
	v = {1, 2, 3, 4, 5};
	for (auto i: v) cout << i << " ";
	cout << "\n";
	
	deque<vector<pair<int, int> > > d;
	d = {{{3, 4}, {5, 6}}, {{1, 2}, {3, 4}}};
	for (auto i: d)
		for (auto j: i)
			cout << j.first << " " << j.second << "\n";
		cout << "-\n";

	set<int> s;
	s = {4, 6, 2, 7, 4};
	for (auto i: s) cout << i << " ";
	cout << "\n";

	list<int> l;
	l = {1, 2, 3, 4, 5, 6};
	for (auto i: l) cout << i << " ";
	cout << "\n";

	array<int, 4> a;
	a =  {5, 8, 9, 2};
	for (auto i: a) cout << i << " "; 
	cout << "\n";

	tuple<int, int, char> t;
	t = {3, 4, 'f'};
	cout << get<2>(t) << "\n";
	// note that it doesn't work for stack and queue

	// 2. NAME OF ARGUMENTS IN MACROS:
	// You can use # sign to get exact name of an argument passed to a macro.
	#define what_is(x) cerr << #x << " is " << x << "\n"; 
	int a_variable = 376;
	what_is(a_variable);
	// prints "a_variable is 376"
	what_is(a_variable*2 + 1);
	// prints "a_variable*2 + 1 is 753"

	// 3. GET RID OF THOSE INCLUDES!
	#include<bits/stdc++.h>
	// This library includes many of libraries we do need in contest like algorithm, vector, iostream etc. and many more. So, we dont need to inlcude every one of them.


	// 4. HIDDEN FUNCTIONS(FUNCTIONS WHICH ARE NOT REALLY USED OFTEN):
	// __gcd(value1, value2)
	// we dont need to code Euclidean Algorithm for a gcd function, from now on, we can use this.
	// This function returns gcd of two numbers

	//__builtin_ffs(x)
	// This function returns 1 + least significant 1-bit of x. If x == 0, returns 0. Here x is int, this
	// function with suffix 'l' gets a long argument and with suffix 'll' gets a long long argument.
	int a = __builtin_ffs(10); // returns 2, because 10 is '1 0' in base 2 and first 1-bit from right is at 
	// index 1(0 based) and function returns 1 + index.
	
	// SOME OF THE GREAT FEATURES OF C++11
	// 1. Range based for loop
	set<int> s = {1,2, 3,4};
	for (auto i: s) cout << i << " ";
	// we can also change the values by just changing auto with auto &:
	vector<int> v = {8, 2, 3, 1};
	for (auto &i: v) i *= 2;
	for (auto i: v) cout << i << " ";

	// 2. The power of auto keyword
	// You dont need to name the type you wnat to use, C++11 can infer it for you. 
	// If you need to loop over iteraros of set<pair<int, pair<int, int> > > from begin
	// to end, you need to type set<pair<int, int> > > :: iterator before, but from 
	// now on just use auto it = s.begin();
	// Also x.begin() and x.end() are now accessible using begin(x) and end(x).

	// Other tricks:
	for (int i = 1; i <= n; i++) {
 		for (int j = 1; j <= n; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}
	// the above code is equivalent to this:
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cout << arr[i][j] << " \n"[j == m];
	// and here is the reason: " \n" is a char*, " \n"[0] is ' ' and " \n"[1] is '\n'
	
	// USAGE OF tie and emplace_back	

	return 0;

}
