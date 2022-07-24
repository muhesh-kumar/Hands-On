// Motivation Problem: https://codeforces.com/problemset/problem/1468/C
// Solution: https://codeforces.com/contest/1468/submission/124668205
// Tutorial: https: //usaco.guide/silver/custom-cpp-stl?lang=cpp

#include <bits/stdc++.h>
using namespace std;

signed main() {
  
  // the comparator should only have constant reference parameters, else the program will cause errors. So, don't forget
  // to add only constant reference parameters to the lambda.
  auto comp = [] (const pair<int, int> &a, const pair<int, int> &b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
  };
  // both of the following lines are the same. Use any one
  set<pair<int, int>, decltype(comp)> met(comp);
  // set<pair<int, int>, bool(*)(const pair<int, int>&, const pair<int, int>&)> met(comp);
  met.insert({1, 2});
  met.insert({3, 4});

  return 0;
}