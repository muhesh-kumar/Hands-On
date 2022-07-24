#include <bits/stdc++.h>
using namespace std;

int32_t main() {

  auto start = chrono::high_resolution_clock::now();

  // CODE
  
  // END OF CODE

  auto stop = chrono::high_resolution_clock::now();
  auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start);
  cerr << "Time taken: " << duration.count() << " ms";

  return 0;
}
