
// Author: Muhesh Kumar

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int key) {
	int size = sizeof(arr)/ sizeof(arr[0]);
	int low = 0;
	int high = size - 1;

	while(low <= high) {
		int mid = low + (high - low) / 2;
		if (a[mid] < key) 
			low = mid + 1;
		else if (a[mid] > key)
			high = mid - 1;
		else return mid;
		return - 1; // if key is not found
	}
}

int main() {
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

		

	return 0;
}
