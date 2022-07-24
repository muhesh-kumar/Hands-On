#include<bits/stdc++.h>
using namespace std;

template<class T>
T abc(T a, T b, T c) {
	return a*b*c;
}



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << abc(21.2,22.4,2.98);
	
	return 0;
}