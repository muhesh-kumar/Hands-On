 
// Author: Muhesh Kumar
 
#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
 
    // The following is a C++ 17 feature called class template argument deduction
    vector numbers{1, 2, 3};
    numbers.push_back(-2);
    numbers[0] = 3;

    // This(a range-based for loop) is equivalent to foreach in other languages.
    // for (auto i: numbers) cout << i << " ";

    // A Tiny lambda function expression
    auto isOdd = [] (int candidate) {return candidate % 2 != 0;};
    bool is3Odd = isOdd(3);
    bool is4Odd = isOdd(4);
    vector nums {2, 3, 4, -1 ,1};
    int odds = std::count_if(begin(nums), end(nums), isOdd);
    
    // The above line is same as the following line
    // int odds = std::count_if(begin(nums), end(nums), [](int candidate){return candidate % 2 == 0;});
    
    cout << odds;
    
    return 0;
}