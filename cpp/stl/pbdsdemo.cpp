 
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

int main() {
 
    // Since we made a typedef of the new pbds we can directly use it
    // tree<int, null_type, less<int> rb_tree_tag, tree_order_statistics_node_update> pbds;
    pbds arr;    
    for (int i = 0; i < 10; i++) {
        arr.insert(i);
    }
    cout << *arr.find_by_order(0) << "\n";
    cout << *arr.find_by_order(1) << "\n";
    cout << *arr.find_by_order(2) << "\n";
    cout << *arr.find_by_order(3) << "\n";
    cout << *arr.find_by_order(4) << "\n";
    cout << *arr.find_by_order(5) << "\n";
    cout << *arr.find_by_order(20) << "\n";
    cout << arr.order_of_key(0) << "\n";
    cout << arr.order_of_key(1) << "\n";
    cout << arr.order_of_key(2) << "\n";
    cout << arr.order_of_key(3) << "\n";
    cout << arr.order_of_key(4) << "\n";
    cout << arr.order_of_key(5) << "\n";
    cout << arr.order_of_key(20) << "\n";
    
    return 0;
}