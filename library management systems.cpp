/*
NAME:JUSTIN MURIITHI
REG NO:BSCIT-05-0071/2024
LIBRARY MANAGEMENT SYSTEMS
*/
#include <iostream>
using namespace std;

// Base class: Person
class Person {
protected:
    string name;
public:
    Person(string n) { name = n; }
    void setName(string n) { name = n; }
    string getName() { return name; }
};

// Derived class: LibraryMember (inherits from Person)
class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;
public:
    LibraryMember(string n, int id, int books) : Person(n), memberID(id), booksBorrowed(books) {}
    int getMemberID() { return memberID; }
    int getBooksBorrowed() { return booksBorrowed; }
};

// Derived class: PremiumMember (inherits from LibraryMember)
class PremiumMember : public LibraryMember {
private:
    double membershipFee;
public:
    PremiumMember(string n, int id, int books, double fee) 
        : LibraryMember(n, id, books), membershipFee(fee) {}
    double getMembershipFee() { return membershipFee; }
};

int main() {
    // Creating a PremiumMember object
    PremiumMember pm("Justin Muriithi", 15434, 19, 456);
    
    // Display member details
    cout << "Member Name: " << pm.getName() << endl;
    cout << "Member ID: " << pm.getMemberID() << endl;
    cout << "Books Borrowed: " << pm.getBooksBorrowed() << endl;
    cout << "Membership Fee: Ksh" << pm.getMembershipFee() << endl;
    
    return 0;
}
