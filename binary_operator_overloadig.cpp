include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v = 0) {
        value = v;
    }

    // Friend function to overload the + operator
    friend Number operator+(const Number& n1, const Number& n2);

    void display() {
        cout << "Value: " << value << endl;
    }
};

// Definition of friend function to overload the + operator
Number operator+(const Number& n1, const Number& n2) {
    Number temp;
    temp.value = n1.value + n2.value;
    return temp;
}

int main() {
    Number n1(10);
    Number n2(20);
    Number n3;

    n3 = n1 + n2; // Using overloaded + operator

    cout << "n1: ";
    n1.display();

    cout << "n2: ";
    n2.display();

    cout << "n3 (n1 + n2): ";
    n3.display();

    return 0;
}

