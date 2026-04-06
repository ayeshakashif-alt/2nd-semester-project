#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }

    void display() {
        cout << "Account Holder: " << accountHolder << " | Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount myAccount("Ayesha Kashif", 500.0);
    myAccount.display();
    myAccount.deposit(200.0);
    myAccount.withdraw(100.0);
    myAccount.display();
    return 0;
}