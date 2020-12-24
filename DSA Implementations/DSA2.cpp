#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	// Bubble sort:
	// for (int i = 0; i < n;i++)
	// 	for (int j = 0; j < n - 1; j++)
	// 		if (arr[j] > arr[j+1])
	// 			swap(arr[j], arr[j+1]);
	// for (int i: arr) cout << i << " "; 

	// C++ sort() function:
	// vector<int> v = {4, 3, 5, 2, 8, 3};
	// sort(v.begin(), v.end());
	// for (auto i: v) cout << i << " ";

	// Sorting an ordinary array:
	// int n = 7; // array size
	// int arr[] = {4, 3, 5, 2, 8, 3};
	// sort(arr, arr + n);
	// for (auto i: arr) cout << i << " ";

	// sorting an string 
	// string s = "monkey";
	// sort(s.begin(), s.end());
	// cout << s ;

	// Sortin user defined Structs: 
	// struct P {
	// 	int x, y;
	// 	bool operator<(const P &p) {
	// 		if (x != p.x) return  x < p.x;
	// 		else return y < p.x;
	// 	}
	// };

	// Sorting strings primarily by length and secondarily by alphabetical order
	// bool comp(string a, stirng b) {
	// 	if (a.size() != b.size()) return a.size() < b.size();
	// 	return a < b;
	// }
	// now a vector of strins can be sorted as follows:
	// sort(v.begin(), v.end(), comp)
	
}