#include <bits/stdc++.h>
using namespace std;

// the element at the head of the queue at any given time is the one with the highest priority.

// Many samples available on net about priority_queue with default compare parameter. In this article let’s create samples by specifying the compare parameter template.

template<class T>
void print_queue(T &q) {
  while (!q.empty()) {
    cout << q.top() << " ";
    q.pop();
  }
  cout << endl;
} 

struct CustomCompare {
  bool operator() (const int &lhs, const int &rhs) {
    return lhs < rhs;
  }
};

int32_t main() {

  // 1. Custom Priority Queue using Lambda as a comparator
  auto compare = [] (int lhs, int rhs) {
    return lhs < rhs;
  };
  priority_queue<int, vector<int>, decltype(compare)> q(compare); // max_heap
  for(int n : {1,8,5,6,3,4,0,9,7,2})
    q.push(n);
  print_queue(q);
  
  // 2. Custom Priority Queue using Structure as a comparator
  priority_queue<int, vector<int>, CustomCompare> q2;
  for(int n : {1,8,5,6,3,4,0,9,7,2})
    q2.push(n);
  print_queue(q2);

  return 0;
}
