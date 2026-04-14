#include <iostream>
#include "utils.hpp"
#include <map>
using namespace std;

int main() {
    bool is_valid = false;
    // while (!is_valid) {
    //     string email;
    //     cout << "Please enter your email: ";
    //     cin >> email;
    //     try {
    //         check_email(email);
    //         cout << "Email is valid!" << endl;
    //         is_valid = true;
    //     } catch (invalid_argument& e) {
    //         cerr << "Error: " << e.what() << endl;
    //     }
    // }
    map<string, string> user_data;
    bool is_logged_in = false;
    while (true) {
        cout << "1. Sign Up" << endl;
        cout << "2. Log In" << endl;
        cout << "3. Log Out" << endl;
        cout << "Please select an option: ";
        int option;
        cin >> option;
        switch (option) {
            case 1: {
                if (!is_logged_in) {
                    string email;
                    string password;
                    cout << "Please enter your email:" << endl;
                    cin >> email;
                    cout << "Please enter your password:" << endl;
                    cin >> password;
                    user_data[email] = password;
                    cout << "Signed up successfully!" << endl;
                } else {
                    cout << "You are already logged in!" << endl;
                }
                break;
            }
            case 2: {
                if (!is_logged_in) {
                    string email2;
                    string password2;
                    cout << "Please enter your email:" << endl;
                    cin >> email2;
                    cout << "Please enter your password:" << endl;
                    cin >> password2;
                    if (user_data.count(email2) && user_data[email2] == password2) {
                        cout << "Logged in successfully!" << endl;
                        is_logged_in = true;
                    } else {
                        cout << "Invalid email or password!" << endl;
                    }
                } else {
                    cout << "You are already logged in!" << endl;
                }
                break;
            }
            case 3: {
                if (is_logged_in) {
                    cout << "Logged out successfully!" << endl;
                    is_logged_in = false;
                } else {
                    cout << "You are not logged in!" << endl;
                }
                break;
            }
            default: {
                cout << "Invalid option!" << endl;
            }
        }
    }
}