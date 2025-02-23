#include <iostream>
using namespace std;

class BankAccount {
private:
    string ah;
    int an;
    double balance;

public:
    // Constructor to initialize the account
    BankAccount(string name, int accNumber, double initialBalance) {
        ah = name;
        an = accNumber;
        balance = initialBalance;
        cout << "Account opened for " << ah << " with initial balance: " << balance << endl;
    }

    // Destructor to perform cleanup (if any)
    ~BankAccount() {
        cout << "Account closed for " << ah << endl;
    }

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount" << endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << ". New balance: " << balance << endl;
        } else {
            cout << "Invalid or insufficient funds for withdrawal" << endl;
        }
    }

    // Method to view balance
    void viewBalance() const {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    // Creating a bank account object using the constructor
    BankAccount account1("bhavesh", 1001, 500.0);
    
    // Performing various operations
    account1.deposit(150.0);
    account1.withdraw(100.0);
    account1.viewBalance();    
    
    // Creating another bank account object using the constructor
    BankAccount account2("anchal", 1002, 1000.0);
    
    // Performing various operations
    account2.deposit(200.0);
    account2.withdraw(300.0);
    account2.viewBalance();

    // When main() exits, destructors will be called automatically
    return 0;
}

