/*
Problem: Password Validation
Platform: Striver DSA Sheet
Topic: Basics
Approach: Keep asking for input until the correct password is entered

Time Complexity: O(k), where k is the number of attempts
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int password = 0;

    while (password != 1234) {
        cout << "Enter Password: ";
        cin >> password;
    }

    cout << "Login successful" << endl;
    return 0;
}
