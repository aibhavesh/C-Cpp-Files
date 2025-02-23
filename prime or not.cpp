//write a program to check whether a given number is prime or not.
#include <iostream>
using namespace std;

class PrimeChecker {
public:
    // Member function to check if a number is prime
    int isPrime(int num) {
        if (num <= 1) {
            return 0; // Not prime
        }
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                return 0; // Not prime
            }
        }
        return 1; // Prime
    }
};

int main() {
    PrimeChecker checker; // Create an object of PrimeChecker class
    int number;

    // Input the number from user
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is prime and display the result
    if (checker.isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}

