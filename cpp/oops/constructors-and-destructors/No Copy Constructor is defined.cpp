#include <bits/stdc++.h>
using namespace std;

class A {
  int a, b;
  public:
    A() {}
    A(int a, int b) {
      this -> a = a;
      this -> b = b;
    }
    // A(const A &obj) {
    //   this -> a = obj.a;
    //   this -> b = obj.b;
    // }
    void print() {
      cout << a << " " << b << endl;
    }
};

int main() {

  A obj(1, 1);
  A obj2(obj); // when no copy constructor is defined, the compiler supplies its own copy constructor

  return 0;
}