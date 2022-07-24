#include <iostream>
#include<list>


using namespace std;

int main() {

    list<int> li;
    li.push_back(1);
    li.push_front(2);
    li.pop_back(1);
    li.pop_front();
    
    cout << li.front() << ": head\n";
    cout << li.back() << ": tail";

    li.reverse(); // to reverse a linked list
    

    return 0;
}