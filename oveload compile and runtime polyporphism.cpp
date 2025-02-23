#include <iostream>
using namespace std;

class greet {
public:
    // Compile-time polymorphism: Method overloading
    void wish() {
        cout << "Hello Anchal" << endl;
    }

    void wish(string name) {
        cout << "Hello " << name << endl;
    }

    // Runtime polymorphism: Virtual function
    virtual void show() {
        cout << "Show from base class" << endl;
    }

};

class greet1 : public greet {
public:
    // Overriding the virtual function
    void show() override {
        cout << "Show from derived class" << endl;
    }
};

// Function to demonstrate runtime polymorphism
void demopoly(greet& a) {
    a.show();
}

int main() {
    greet g;
    greet1 g1;

    // Compile-time polymorphism
    g.wish();
    g.wish("Bhavesh");

    // Runtime polymorphism
    demopoly(g);
    demopoly(g1);

    return 0;
}

