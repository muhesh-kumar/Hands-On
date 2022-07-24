#include <bits/stdc++.h>
using namespace std;

int32_t main() {

  // Structure bindings
  map<int, int> mp = {
    {1, 2},
    {2, 3},
    {4, 5}
  };
  auto [key, value] = *begin(mp);
  cout << key << " " << value << '\n';
  
  // iterate a map
  for (auto &[key, value]: mp) {
    cout << key << " " << value << '\n';
  }

  // Free functions:
  vector<int> v = {1, 2, 3};
  size_t sz = size(v);
  bool empty = empty(v);

  // Gcd and lcm
  cout << gcd(1, 2) << '\n';
  cout << lcm(1, 2) << '\n';
  return 0;
}
