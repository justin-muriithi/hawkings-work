/*
NAME:JUSTIN MURIITHI
REG NO:BSCIT-05-0071/2024
DATE:16/02/2024
Program on encapsulation
*/
#include <iostream>
using namespace std; // cout, cin, endl


class BankAccount {
private:
    string account_holder; 
    double balance;

public:
   
    void setAccountHolder(string name) {
        account_holder = name;
    }

   
    string getAccountHolder() {
        return account_holder;
    }

   
    void setBalance(double bal) {
        balance = bal;
    }

 
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount Justin; 

  
    Justin.setAccountHolder("Justin");
    Justin.setBalance(100000000); 

   
    cout << "Account holder: " << Justin.getAccountHolder() << endl;
    cout << "Balance: " << Justin.getBalance() << endl;

    return 0;
}
