#include <iostream>
#include "utils.hpp"
using namespace std;

int main() {
    bool is_valid = false;
    while (!is_valid) {
        string email;
        cout << "Please enter your email: ";
        cin >> email;
        try {
            check_email(email);
            cout << "Email is valid!" << endl;
            is_valid = true;
        } catch (invalid_argument& e) {
            cerr << "Error: " << e.what() << endl;
        }
    }
}