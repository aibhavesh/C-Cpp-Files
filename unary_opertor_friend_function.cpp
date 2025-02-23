#include <iostream>
using namespace std;

class Number {
    int value;
public:
    // Constructor 
    Number(int v) {
        value = v;
    }
friend Number operator-(Number);
    void display() {
        cout << "Value: " << value << endl;
    }
};
Number operator-(Number n)
{
	n.value=-n.value;
	return n;
}

int main() {
    Number num(5); // Initializes `value` with 5
    num.display(); // Outputs: Value: 5

   num = -num; // Using unary minus operator num.display
    num.display();
	return 0;
}

