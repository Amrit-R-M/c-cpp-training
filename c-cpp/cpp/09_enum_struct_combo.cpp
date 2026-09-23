#include <iostream>
#include <string>
using namespace std;

// Reusing enum from before - represents possible states
enum Status {
    ACTIVE,
    INACTIVE,
    SUSPENDED
};

// Reusing struct - now one of its fields uses our enum type
struct Account {
    string username;
    int balance;
    Status status;   // struct field can be any type, including your own enum
};

int main() {
    Account a1;
    a1.username = "amrit_dev";
    a1.balance = 500;
    a1.status = ACTIVE;

    cout << "User: " << a1.username << endl;
    cout << "Balance: " << a1.balance << endl;
    cout << "Status: " << a1.status << endl;   // prints 0, since ACTIVE = 0

    if (a1.status == ACTIVE) {
        cout << "Account is active." << endl;
    }

    return 0;
}