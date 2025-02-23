 //Create a program that implements multiple and hybrid inheritance scenario
#include <iostream>
using namespace std;

// Base class 1
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

// Base class 2
class Mammal {
public:
    void breathe() {
        cout << "Breathing..." << endl;
    }
};

// Derived class that demonstrates multiple inheritance
class Dog : public Animal, public Mammal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

// Another base class
class Pet {
public:
    void beFriendly() {
        cout << "Being friendly..." << endl;
    }
};

// Further derived class that demonstrates hybrid inheritance
class GermanShepherd : public Dog, public Pet {
public:
    void guard() {
        cout << "Guarding..." << endl;
    }
};

int main() {
    GermanShepherd myDog;
    cout<<"multiple  inheritance ......\n";
    // Methods from multiple inheritance (Dog class)
    myDog.eat();    // Inherited from Animal
    myDog.breathe();// Inherited from Mammal
    myDog.bark();   // Method in Dog
   cout<<"hybrid inheritance............\n";
    // Methods from hybrid inheritance (GermanShepherd class)
    myDog.beFriendly(); // Inherited from Pet
    myDog.guard();      // Method in GermanShepherd

    return 0;
}

