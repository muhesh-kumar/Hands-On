#include <bits/stdc++.h>
using namespace std;

class A {
  int a, b;
  public:
    A() {}
    A (int a = 0, int b = 0) {
      this -> a = a;
      this -> b = b;
    }
    // A(int a, int b) {
    //   this -> a = a;
    //   this -> b = b;
    // }
    // A(const A &obj) {
    //   this -> a = obj.a;
    //   this -> b = obj.b;
    // }
    void print() {
      cout << a << " " << b << endl;
    }
};

int main() {

  A obj1(1, 2); // no errors will occr
  // A obj2; // compiler error will be raised ("Class A has more than one default constructor)

  return 0;
}