
// Author: Muhesh Kumar

#include<bits/stdc++.h>
using namespace std;


// VECTOR TRAVERSAL / in general any container traversal.
void traverse(vector<int> v) {
	vector<int> :: iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	for (int i = 0;  i < v.size(); i++) cout << v[i] << " ";
	cout << endl;
}

int main() {
	
	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// ITERATORS:
	// for vector:
	// vector<int>::iterator it;
	// for list:
	// list<int>::iterator it;

	// STRING CONTAINER:
	// string s0; // s0 = ""
	// string s1 ("Hello"); // s1 = "Hello"
	// string s2 (s1); // s2 = "Hello"
	// string s3 (s1, 1, 2); // s3 = "el" --> from index 1, take 2 characters.
	// string s4 ("Hello, world", 5); // s4 = "Hello" --> from 0, take 5 characters.
	// string s5 (5, "*"); // s5 = "*****"
	// string s6 (s1.begin(), s1.begin()+3); // s6 = "Hel" --> first 3 characters of s1
	// if (s1.compare(s2) == 0) cout << "Strings are equal";
	// else cout << "Strings are not equal";
	
	// VECTORS:
	// vector<int> a; // empty vector of ints
	// vector<int> b(5, 10); // five ints with value 10
	// vector<int> c (b.begin(), b.end()) // iterating through second vector
	// vector<int> d (c) // copy of c.
	
	// vector<int> v;
	// vector<int> :: iterator it;
	// v.push_back(5);
	// while(v.back() > 0) v.push_back(v.back() - 1);
	// for (it = v.begin(); it != v.end(); it++) cout << *it << " ";
	// cout << endl;
	// for (int i = 0; i < v.size(); i++) 
	// 	cout << v.at(i) << " ";
	// cout << "\n";

	// while (!v.empty()) {
	// 	cout << v.back() << " ";
	// 	v.pop_back();
	// }
	// cout << "\n";


	// LIST
	// list <int> lis;

	// list<int> :: iterator it;
	// lis.push_back(4);
	// lis.push_back(5);

	// lis.push_front(3);
	// lis.push_front(5);
	// it = lis.begin();
	// lis.insert(it, 1);
	// for (it = lis.begin(); it != lis.end(); it++) {
	// 	cout << *it << " ";
	// }
	// cout << "\n";
	// lis.reverse(); // reverses the list
	// lis.remove(5);
	// lis.pop_back();
	// lis.pop_front();

	// SET
	// set<int> s1;
	// int a[] = {1, 2, 3, 4, 5, 5};
	// set<int> s2 (a, a + 6); // s2 = {1, 2, 3, 4, 5}
	// set<int> s3 (s2); // copy of s2
	// set<int> s4 (s3.begin(), s3.end()); // set created using iterators
	// set<int> s;
	// set <int> :: iterator it;
	// int a[] = {3, 5, 2, 1, 5, 4};
	// for (int i = 0; i < 6; i++)
	// 	s.insert(a[i]);
	// for (it = s.begin(); it != s.end(); it++)
	// 	cout << *it << " ";
	// cout << endl;m

	// MAPs
	// map<char, int> mp;
	// mp['b'] = 1;
	// mp['a'] = 2;
	// cout << mp['a'] << " " << mp['b'];

	// map <char, int> mp;
	// map <char, int> mymap, mymap1;
	// inserting elements individually in map wiht the combination of key value and value of element
	// mp.insert(pair<char, int>('a', 2));
	// mp.insert(pair <char, int> ('b', 1));
	// mp.insert(pair <char, int> ('c', 43));

	// insert elements in rnage using insert() function in map 'mymap'
	// mymap.insert(mp.begin(), mp.end());

	// declaring iterator for map
	// map <char, int> :: iterator it;

	// using find() function to return reference of element mapped to key 'b'
	// it = mp.find('b');

	// prints key and element's value.
	// cout << "Key and element's value of map are: ";
	// cout << it -> first << " and " << it -> second << "\n";

	// alternative awy to insert elements by mapping with their keys.
	// mymap['x'] = 23;
	// mymap1['y'] = 21;

	// printing element mapped by key 'b' using at() function: 
	// cout << mp.at('b') << "\n";

	// swap contents of 2 maps namely mymap and mymap1.
	// mymap.swap(mymap1);

	// erases element mapped at 'c'.
	// mymap.erase('c');
	// erases in a range:
	// mymap1.erase(mymap1.begin(), mymap1.end());
	// Number of elements with key = 'a' in map are: 
	// cout << mp.count('a') << "\n";

	return 0;
}
