// To create a max heap of any type we don't need a custom comparator unless < or > operators are not overloaded for that type
// But, to create a min heap we need a custom comparator.
// Compare	-	A Compare type providing a strict weak ordering.
// Note that the Compare parameter is defined such that it returns true if its first argument comes before its second argument in a weak ordering. But because the priority queue outputs largest elements first, the elements that "come before" are actually output last. That is, the front of the queue contains the "last" element according to the weak ordering imposed by Compare.


// So, in order to achieve a min-heap ordering, we need our comparator to return false when the first parameter comes before the second parameter and true otherwise. But, this is not the natural behaviour of regular compare functions we use in other places like sorting, etc.,

// So, a neat and cool trick to achieve both of the above mentioned tasks is to swap the parameters in the function declaration itself.

// For example:

#include <bits/stdc++.h>
using namespace std;

// The following comparator will make the priority queue behave like a max heap
struct CustomCompare {
  bool operator() (const int &lhs, const int &rhs) {
    return lhs < rhs;
  }
};

// Whereas, the following comparator will make the priority queue behave like a min heap since we have swapped the parameters(See the difference?)
struct CustomCompare2 {
  bool operator() (const int &rhs, const int &lhs) {
    return lhs < rhs;
  }
};


int32_t main() {



  return 0;
}
