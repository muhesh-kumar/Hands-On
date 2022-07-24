#include <bits/stdc++.h>
using namespace std;

struct Edge {
  int from, to, weight;
};

struct EdgeCompare {
  bool operator() (const Edge& e1, const Edge e2) {
    return e1.weight > e2.weight;
    // return true if e1 is ordered before e2 but this order will be reversed in the priority queue.
    // So, a priority_queue with this structure will behave as min_heap of heights
  }
};

int32_t main() {

  priority_queue<Edge, vector<Edge>, EdgeCompare> pq;
  pq.push({1, 2, 5});
  pq.push({1, 2, 3});
  pq.push({1, 2, 4});
  pq.push({1, 2, 6});
  while (!pq.empty()) {
    Edge e = pq.top(); pq.pop();
    cout << e.weight << '\n';
  }

  return 0;
}
