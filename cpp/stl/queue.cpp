#include<iostream>
#include<queue>

using namespace std;

int main() {

    queue<int> qu;
    
    qu.push(1);
    qu.push(3);
    
    qu.pop();

    cout << qu.front();
    
    return 0;
}