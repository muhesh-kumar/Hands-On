#include <iostream>

#include <deque>

using namespace std;

int main() {

    deque<int> dqu;
    dqu.push_back(10);
    dqu.push_front(20);
    dqu.pop_back();
    dqu.pop_front();
    
    return 0;
}