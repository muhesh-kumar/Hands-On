#include <bits/stdc++.h>
using namespace std;

class Animal {
public:
  virtual void sound() = 0;
  
  void sleep() {
    cout << "Sleeping\n";
  }
};

class Dog : public Animal {
public:
  void sound() {
    cout << "Woof\n";
  }
};

class Cat: public Animal {
public:
  void sound() {
    cout << "Meow\n";
  }

  void eat() {
    cout << "Eating\n";
  }
};

int32_t main() {

  Animal* dog = new Dog();
  dog->sound();
  dog->sleep();
  
  // Animal* cat = new Cat();
  // cat->eat(); // throws an error saying that Animal class does not have eat() method
  
  Cat cat2;
  cat2.eat(); // this works without any errors
  
  Animal* cat3 = new Cat();
  Cat* catPtr = dynamic_cast<Cat*>(&cat2);  // Perform typecasting
  if (catPtr) {
      catPtr->eat();  // Now you can call eat() on the cat pointer
  } else {
      cout << "Invalid typecast" << endl;
  }


  return 0;
}
