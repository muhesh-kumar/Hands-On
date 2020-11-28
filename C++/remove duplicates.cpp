#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vs vector<string> vs
#define vvi vector<vector<int> >

void remove_duplicates(int arr[], int n) {
	set<int> s;
	for (int i = 0; i < n; i++) s.insert(i);
	for (int i: s) cout << i << " ";
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i<n; i++) cin >>arr[i];
	// for (int i:arr) cout << i << " ";
	remove_duplicates(arr, n);
	return 0;
}