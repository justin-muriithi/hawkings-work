/*
NAME:JUSTIN MURIITHI
REG NO:BSCIT-05-0071/2024
BANK MANAGEMENT SYSTEM
*/
#include <iostream>
using namespace std;

// Base class: AccountHolder
class AccountHolder {
protected:
    string name;
public:
    AccountHolder(string n) { name = n; }
    void setName(string n) { name = n; }
    string getName() { return name; }
};

// Derived class: BankAccount (inherits from AccountHolder)
class BankAccount : public AccountHolder {
private:
    int accountNumber;
    double balance;
public:
    BankAccount(string n, int accNum, double bal) : AccountHolder(n), accountNumber(accNum), balance(bal) {}
    int getAccountNumber() { return accountNumber; }
    double getBalance() { return balance; }
};

// Derived class: SavingsAccount (inherits from BankAccount)
class SavingsAccount : public BankAccount {
private:
    double interestRate;
public:
    SavingsAccount(string n, int accNum, double bal, double rate) 
        : BankAccount(n, accNum, bal), interestRate(rate) {}
    double getInterestRate() { return interestRate; }
};

int main() {
    // Creating a SavingsAccount object
    SavingsAccount sa("Justin Muriithi", 667543, 500000.0, 7);
    
    // Display account details
    cout << "Account Holder: " << sa.getName() << endl;
    cout << "Account Number: " << sa.getAccountNumber() << endl;
    cout << "Balance: Ksh " << sa.getBalance() << endl;
    cout << "Interest Rate: " << sa.getInterestRate() << "%" << endl;
    
    return 0;
}
