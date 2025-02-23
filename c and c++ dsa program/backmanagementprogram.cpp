#include <iostream>
#include <string>
using namespace std;

const int MAX_TRANSACTIONS = 100; // Maximum number of transactions

class Account {
public:
    std::string accountNumber;
    std::string accountHolderName;
    double balance;
    std::string transactions[MAX_TRANSACTIONS];
    int transactionCount;

    Account(const std::string& accountNumber, const std::string& accountHolderName, double initialBalance)
        : accountNumber(accountNumber), accountHolderName(accountHolderName), balance(initialBalance), transactionCount(0) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            transactions[transactionCount++] = "Deposited: $" + std::to_string(amount);
        }
    }

    bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            transactions[transactionCount++] = "Withdrew: $" + std::to_string(amount); // Changed 'R' to '$'
            return true;
        }
        return false;
    }

    void displayBalance() const {
        std::cout << "Account Balance: $" << balance << std::endl;
    }

    void displayTransactions() const {
        if (transactionCount == 0) {
            std::cout << "No transactions found." << std::endl;
            return;
        }
        for (int i = 0; i < transactionCount; ++i) {
            std::cout << transactions[i] << std::endl;
        }
    }
};

class ATM {
private:
    Account* account;

public:
    ATM(Account* account) : account(account) {}

    void checkBalance() const {
        account->displayBalance();
    }

    void deposit() {
        double amount;
        std::cout << "Enter amount to deposit: $";
        std::cin >> amount;
        account->deposit(amount);
        std::cout << "Deposit successful." << std::endl;
    }

    void withdraw() {
        double amount;
        std::cout << "Enter amount to withdraw: $";
        std::cin >> amount;
        if (account->withdraw(amount)) {
            std::cout << "Withdrawal successful." << std::endl;
        } else {
            std::cout << "Insufficient balance or invalid amount." << std::endl;
        }
    }

    void displayTransactions() const {
        account->displayTransactions();
    }
};

void displayMenu() {
    std::cout << "\nATM Management System" << std::endl;
    std::cout << "1. Check Balance" << std::endl;
    std::cout << "2. Deposit Money" << std::endl;
    std::cout << "3. Withdraw Money" << std::endl;
    std::cout << "4. Display Transactions" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Enter your choice: ";
}

int main() {
    std::string accountNumber, accountHolderName;
    double initialBalance;

    std::cout << "Enter account number: ";
    std::cin >> accountNumber;
    std::cin.ignore(); // To ignore the newline character left in the buffer
    std::cout << "Enter account holder name: ";
    std::getline(std::cin, accountHolderName);
    std::cout << "Enter initial balance: $";
    std::cin >> initialBalance;

    Account account(accountNumber, accountHolderName, initialBalance);
    ATM atm(&account);

    int choice;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                atm.checkBalance();
                break;
            case 2:
                atm.deposit();
                break;
            case 3:
                atm.withdraw();
                break;
            case 4:
                atm.displayTransactions();
                break;
            case 5:
                std::cout << "Exiting the program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 5);

    return 0;
}

