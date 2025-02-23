#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function to allow overriding in derived classes
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Override the base class method
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

// Another derived class
class Cat : public Animal {
public:
    // Override the base class method
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
Cat c;
 c.sound();
Dog d;
 d.sound();
      return 0;
}

