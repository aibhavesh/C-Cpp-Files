#include <iostream>
using namespace std;

class MathOperations {
public:
    // Method to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Method to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Method to add two doubles
    double add(double a, double b) {
        return a + b;
    }
};

class Base {
public:
    virtual void display() { // Virtual function
        cout << "Display from Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() override { // Overriding function
        cout << "Display from Derived class" << endl;
    }
};

void show(Base &obj) {
    obj.display(); // Calls the overridden method at runtime
}

int main() {
    Base base;
    Derived derived;

    show(base);    // Calls Base::display()
    show(derived); // Calls Derived::display()

    MathOperations math;
    cout << "Sum of 2 and 3: " << math.add(2, 3) << endl;              // Calls add(int, int)
    cout << "Sum of 1, 2, and 3: " << math.add(1, 2, 3) << endl;      // Calls add(int, int, int)
    cout << "Sum of 4.5 and 3.2: " << math.add(4.5, 3.2) << endl;     // Calls add(double, double)

    return 0;
}

