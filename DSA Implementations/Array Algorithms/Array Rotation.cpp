#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif


	// TEMP ARRAY METHOD: 
	// int n, d;
	// cin >> n >> d;
	// int arr[n];
	// int temp[d]; // Creating a temp array
	// for (int i = 0; i < n; i++) cin >> arr[i];
	// for (int i = 0; i < d; i++) temp[i] = arr[i]; // Forming the temp array
	// for (int i = d; i < n; i++) arr[i - d] = arr[i]; // Shifting the orginial array
	// for (int i = n - d, j = 0; i < n, j < d; i++, j++) arr[i] = temp[j];
	// for (int i : arr) cout << i << " ";

	// TEMP VARIABLE METHOD:
	// int n, d;
	// cin >> n >> d;
	// int arr[n];
	// for (int i = 0; i < n; i++) cin >> arr[i];
	// for (int i = 0; i < d; i++)
	// {
	// 	int temp = arr[0];
	// 	for (int j = 0; j < n-1; j++)
	// 	{
	// 		arr[j] = arr[j+1];
	// 	}	
	// 	arr[n - 1] = temp; // Placing the temp variable at the last position
	// }
	// for (int i: arr) cout << i << " ";


	// JUGGLING ALGORITHM: --> ! WRONG IMPLEMENTATION !
	// int n, d;
	// cin >> n >> d;
	// int arr[n];
	// for (int i = 0; i < n; i++) cin >> arr[i];
	// for (int i = 0; i < d; i++)
	// {
	// 	int temp = arr[i]; // storing the first element of a set 
	// 	// rotating the individual sets 
	// 	for (int j = i; j < n - d; j += d)
	// 	{
	// 		arr[j] = arr[j + d];
	// 	}
	// 	arr[n - d + i] = temp; // Placing the temp variable of each set to the last position
	// }
	// for (int i: arr) cout << i << " ";


	// THE REVERSAL ALGORITHM: -- > EFFICIENT 
	// int n, d;
	// cin >> n >> d;
	// int arr[n];
	// for (int i = 0; i < n; i++) cin >> arr[i];
	// reverse(arr, arr + d); // reverse the arr[0..d]
	// reverse(arr + d, arr + n); // reverse the arr[d..n]
	// reverse(arr, arr + n); // reverse the whole array
	// for (int i: arr) cout << i << " ";
	return 0;
}