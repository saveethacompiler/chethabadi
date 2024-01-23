#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(const string& holder, double initialBalance) : accountHolder(holder), balance(initialBalance) {
        cout << "BankAccount constructor called." << endl;
    }

    ~BankAccount() {
        cout << "BankAccount destructor called for " << accountHolder << "." <<endl;
    }
    void displayDetails() const {
        cout << "Account Holder: " << accountHolder << ", Balance: $" << balance << endl;
           
    }
  
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: $" << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }
};

int main() {
    BankAccount account1("John Doe", 1000.0);
    account1.displayDetails();
    account1.deposit(500.0);
    account1.withdraw(200.0);

BankAccount account2("Jane Smith", 1500.0);
 account2.displayDetails();
  return 0;
}
