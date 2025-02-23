#include <iostream>
using namespace std;

class Bhavesh {
public:
    // Static Polymorphism: Method Overloading
    void greet() {
        cout << "Hello mam" << endl;
    }

    void greet(string name) {
        cout << "Hello " << name << ", good morning." << endl;
    }

    // Dynamic Polymorphism: Virtual function
    virtual void display() {
        cout << "Hello from Bhavesh !!!" << endl;
    }
};

class OOPM : public Bhavesh {
public:
    // Bring base class greet() methods into scope to avoid hiding
    using Bhavesh::greet;

    // Overriding the virtual function
    void display() override {
        cout << "Hello from OOPM !!!" << endl;
    }

    // Adding another overloaded method
    void greet(int times) {
        for (int i = 0; i < times; i++) {
            cout << "Hello from OOPM again !!!" << endl;
        }
    }
};

// Function to demonstrate dynamic polymorphism
void demonstrateDynamicPolymorphism(Bhavesh& obj) {
    obj.display(); // Calls the appropriate display method based on the object type at runtime
}

int main() {
    // Static Polymorphism: Method Overloading
    Bhavesh student;
    OOPM object;

    student.greet();                  // Calls Bhavesh::greet()
    student.greet("Anchal");          // Calls Bhavesh::greet(string)

    object.greet();                   // Calls Bhavesh::greet() through inheritance
    object.greet("Rohan");            // Calls Bhavesh::greet(string) through inheritance
    object.greet(3);                  // Calls OOPM::greet(int)

    // Dynamic Polymorphism: Method Overriding
    demonstrateDynamicPolymorphism(student);  // Calls Bhavesh::display()
    demonstrateDynamicPolymorphism(object);   // Calls OOPM::display()

    return 0;
}
