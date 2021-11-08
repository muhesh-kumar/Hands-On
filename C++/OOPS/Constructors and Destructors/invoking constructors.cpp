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
    A(const A &obj) {
      this -> a = obj.a;
      this -> b = obj.b;
    }
    void print() {
      cout << a << " " << b << endl;
    }
};

int main() {

  A obj1;
  A obj2(1, 2);
  A obj3(obj2);

  cout << "Type1: " << endl;
  obj1.print();
  obj2.print();
  obj3.print();

  A obj4;
  A obj5 = A(2, 3);
  A obj6 = A(obj5);

  cout << "Type2: " << endl;
  obj4.print();
  obj5.print();
  obj6.print();

  return 0;
}