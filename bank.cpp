#include <bits/stdc++.h>
using namespace std;

class Bank {
public:
    void Menu();
    void BankManagement();
    void AtmManagement();
};

void Bank::Menu () {
    // display menu

    int choice;
    do {
        cout << "\nMain Menu";
        cout << "\n1. Bank Management";
        cout << "\n2. ATM Management";
        cout << "\n3. Exit\n";
        cin >> choice;
        switch (choice) {
            case 1: {
                // login into bank
                string email, pincode, password;
                cout << "\nEnter email: ";
                cin >> email;
                cout << "\nEnter pincode: ";
                cin >> pincode;
                cout << "\nEnter password: ";
                cin >> password;

                if (email == "a@gmail.com" && pincode == "123456" && password == "root") {
                    BankManagement();
                } else {
                    cout << "\nInvalid details, Try again";
                }
                break;
            }
        
            case 2: {
                AtmManagement();
                break;
            }

            case 3: {
                cout << "\nExiting program";
                break;
            }

            default:
                cout << "\nInvalid input";
        }
    } while (choice != 3);
}

void Bank::BankManagement() {
    // display menu
    int choice;
    
    do {
        cout << "\nBank Management";
        cout << "\n1. New user";
        cout << "\n2. Already user";
        cout << "\n3. Deposit option";
        cout << "\n4. Withdraw";
        cout << "\n5. Transfer";
        cout << "\n6. Payment";
        cout << "\n7. Search user record";
        cout << "\n8. Edit user record";
        cout << "\n9. Delete user record";
        cout << "\n10. Show all records";
        cout << "\n11. Payment all records";
        cout << "\n12. Go back\n";
        cin >> choice;

        switch (choice) {
            case 1: {
                break;
            }

            case 2: {
                break;
            }

            case 3: {
                break;
            }

            case 4: {
                break;
            }

            case 5: {
                break;
            }

            case 6: {
                break;
            }

            case 7: {
                break;
            }

            case 8: {
                break;
            }

            case 9: {
                break;
            }

            case 10: {
                break;
            }

            case 11: {
                break;
            }

            case 12: {
                return;
            }

            default:
                cout << "\nInvalid input";
        } 
    } while (choice != 12);
}

void Bank::AtmManagement() {
    // display menu
    cout << "\nATM Management";
    cout << "\n1. User Login and Check balance";
    cout << "\n2. Withdraw ammount";
    cout << "\n3. Account details";
    cout << "\n4. Go back\n";

    int choice;
    do {
        cin >> choice;

        switch (choice) {
            case 1: {
                break;
            }
            
            case 2: {
                break;
            }

            case 3: {
                break;
            }

            case 4: {
                return;
            }

            default:
                cout << "\nInvalid input";
        }

    } while (choice != 4);
}

int main () {
    Bank B1;
    B1.Menu();

    return 0;
}