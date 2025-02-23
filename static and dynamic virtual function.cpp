#include <iostream>
using namespace std;

class Base {
public:
    // Static Polymorphism: Method Overloading
    void greet() {
        cout << "Hello from Base class (no arguments)!" << endl;
    }

    void greet(string name, string y) {
        cout << "Hello, " << name << ", from Base class (with argument)!" << endl;
    }

    // Dynamic Polymorphism: Virtual function
    virtual void display() {
        cout << "Display from Base class" << endl;
    }
};

class Derived : public Base {
public:
    // Correct: explicitly using one of the overloaded greet methods from Base
    using Base::greet;  // Brings Base's greet method(s) into Derived class scope

    // Overriding the virtual function
    void display() override {
        cout << "Display from Derived class" << endl;
    }

    // Adding another overloaded method
    void greet(int times) {
        for (int i = 0; i < times; ++i) {
            cout << "Hello " << i + 1 << " times from Derived class!" << endl;
        }
    }
};

int main() {
    // Static Polymorphism: Method Overloading
    Base baseObj;
    Derived derivedObj;

    baseObj.greet();                   // Calls Base::greet()
    baseObj.greet("Anchal", "y");      // Calls Base::greet(string, string)

    derivedObj.greet();                // Calls Base::greet() through inheritance
    derivedObj.greet("bhavesh", "y");  // Calls Base::greet(string, string) through inheritance
    derivedObj.greet(3);               // Calls Derived::greet(int)

    return 0;
}

