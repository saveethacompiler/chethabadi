#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountHolderName;
    double balance;
    int number;

public:

    BankAccount(const std::string& holderName, double initialBalance, int account_number) : accountHolderName(holderName), balance(initialBalance), number(account_number) {
    
        std::cout << "Account created for " << accountHolderName << " with initial balance: $" << balance <<" account number : " << number <<std::endl;
    }

    ~BankAccount() {
        std::cout << "Account for " << accountHolderName << " destroyed." << std::endl;
    }
    void display() const {
        std::cout << "Account Holder: " << accountHolderName << ", Balance: $" << balance <<"account number is :" << number << std::endl;
    }
};

int main() {
    BankAccount account1("John Doe", 1000.0, 162548);

    account1.display();

    return 0;
}
