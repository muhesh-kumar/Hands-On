// CPP Programs to illustrate Pairs in STL
#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;

int main() {
	// pair<int, char> p; // syntax: pair<data_type1, data_type2> pair_name;
	// p.first = 100;
	// p.second = 'G';
	// cout << p.first << " " << p.second;

	// Initializing a pair
	// Syntax: pair<data_type1, data_type2> pair_name(value1, value2);
	// pair<int,int> g1; // default
	// pair<int, char> g2(1, 'a'); // initialized, different data types
	// pair<int, int> g3(1, 10); // initialized, same data types
	// pair<int,int> g4(g3); // copy of g3
	// g2 = make_pair(1, 'a'); // another way to initialize a pair.
	
	// cout << g1.first << " " << g1.second << "\n"; 
	// cout << g2.first << " " << g2.second << "\n"; 
	// cout << g3.first << " " << g3.second << "\n"; 
	// cout << g4.first << " " << g4.second << "\n"; 

	// Note if not initialzed, the first value of the pair gets automatically initialized.
	// pair <int, double> p1; // it is initalized to 0
	// pair <string, char> p2;
	// cout << p1.first << " " << p1.second << "\n"; // prints 0 0 
	// cout << p2.first << " " << p2.second << "\n"; // prints nothing

	//MEMBER FUNCTIONS:
	// pair <int, int>  p = make_pair(1, 1);
	// cout << p.first << " " << p.second;

	// COMPARING PAIRS:
	// pair<int, int> pair1 = {1, 12};
	// pair<int, int> pair2 = {9, 12};

	// While using comparison operators in cout, don't forget to wrap the whole expression in parenthesis.
	// cout << (pair1 == pair2) << "\n";
	// cout << (pair1 != pair2) << "\n";
	// cout << (pair1 >= pair2) << "\n";
	// cout << (pair1 <= pair2) << "\n";
	// cout << (pair1 > pair2) << "\n";
	// cout << (pair1 < pair2) << "\n";

	// SWAP: 
	// Syntax: pair1.swap(pair2);
	// pair<int, int> p1 = {1, 2};
	// pair<int, int> p2 = {3, 4};
	// p1.swap(p2);
	// cout << p1.first << " " << p1.second << "\n"; 
	// cout << p2.first << " "  << p2.second << "\n";

	// SAMPLE PROBLEM:
	// Question: Sort an array according to another array
	// Problem: Given two arrays a[] and b[] of equal size. The task is to sort the array
	// b[] accroding to the elemtns of array a[]. That is, elements of the array b[] should be rearranged by
	// following the corresponding elements of array a[] as appeared in sorted order.
	// Solution: 
	int a[] = {2, 1, 5, 4, 8, 3, 6, 7};
    	char b[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
	int size = sizeof(a)/ sizeof(a[0]);
	pair<int, char> parr[size]; // an array of pairs.
	for (int i = 0; i < size; i++) 
	{
		parr[i] = {a[i], b[i]}; // initializing the pair array
	}
	sort(parr, parr + size);
	for (pair<int, char> p: parr) 
		cout << p.second << " ";
	

	return 0;
}	