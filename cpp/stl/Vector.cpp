#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// int func()
// {
// 	int arr[100];
// 	return arr; // this is not valid, and will generate an error.
// }

vector<int> func1() {
	vector<int> v;
	return v; // this is valid.
}

int main()
{
	// vector<int> v1, v2;
	// v1 = {1, 2, 3};
	// v2 = v1; // copies v1 directly into v2;
	// for (int i: v2) cout << i << " ";

	// VECTOR DECLARATION AND TRAVERSAL:
	// declaring vectors without size:
	// vector<int> v;
	// declaring vectors with size of 10:
	// vector<int> v1(10); 
	// filling the entire vecotr with an elment of our choice at the time of declaration:
	// vector<int> v2(10, 2);
	// for (int i: v1) cout << i << " ";
	// for (int i : v2) cout << i << " ";
	
	// TRAVERSING AND ACCESSING VECTOR ELEMENTS:
	// vector<int> v = {1, 2, 3};
	// for (int i = 0; i < v.size(); i++) {
	// 	cout << v[i] << " "; 
	// }
	// traversing the same vector using modified for loop:
	// for (int i: v) cout << i << " ";

	// traversing vectors using iterators:
	// vector<int>::iterator it;
	// for (it = v.begin(); it != v.end(); it++)
	// 	cout << *it << " ";

	// using modified loop
	// for (auto it: v) cout << it << " ";

	// CONVETING AN ARRAY INTO VECTOR:
	// int arr[] = {1, 2, 3};

	// we can initialize a vector with any other container also by simply passing the address of the first element of that container and 
	// address just after the last element
	// vector<int> v(arr, arr+ (sizeof(arr) / sizeof(arr[0])));
	// for (int i : v) cout << i << " ";

	// SAMPLE PROBLEM:
	
	// Question: Given an array of N integers and a vlaue K. The task is to return a list of integers from the given arary whose value is less than K.
	
	// Input:
	// int arr[] = {17, 10, 20, 13, 7, 9};
	// int k = 15;
	
	// solution:
	// vector<int> v;
	// int size = sizeof(arr) / sizeof(arr[0]);
	// for (int i = 0; i < size; i++) 
	// 	if (arr[i] < k) v.push_back(arr[i]); 
	// for (int i: v) cout << i << " ";

	// Question: Given two arrays roll_no[] and marks[] of the same size representing the roll numbers and marks scored by the students repsectively.
	// The task is to sort this data according to the increasing order of marks. That is, print the roll numbers 
	// along wiht the makrs scored in the order of increasing marks.

	// Input:
	// int roll_no[]  = {17, 20, 15, 1, 5};
	// int marks[] = {80, 75, 93, 78, 84};

	// Solution: 
 	// vector<pair<int, int> > v;
 	// int size = sizeof(marks) / sizeof (marks[0]);
 	// for (int i = 0 ; i < size; i++) {
 	// 	v.push_back({marks[i], roll_no[i]});
 	// }
 	// sort(v.begin(), v.end());
 	// for (pair<int, int> i : v) 
 	// {
 	// 	cout << i.second << " " << i.first << "\n";
 	// }

	// Quesiton: Given a vector, keep track of the presen indexes correspoding to each element and after sorting print element with its previous respective indexes

	// Input:
	// int arr[] = {2, 5, 3, 7, 1} ;

	// Solution:
	// vector<pair<int, int> > v;
	// int size = sizeof(arr) / sizeof (arr[0]);
	// for (int i = 0; i < size; i++) {
	// 	v.push_back({arr[i], i});
	// }
	// sort(v.begin(), v.end());
	// for (pair<int, int> i : v) {
	// 	cout << i.first << " " << i.second << "\n";
	// }
 	return 0;
} 	
