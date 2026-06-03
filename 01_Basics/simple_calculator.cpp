/*
Problem: Simple Calculator
Platform: Striver DSA Sheet
Topic: Basics
Approach: Use switch-case to perform the selected arithmetic operation

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, choice;
    cin >> a >> b;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result: " << a + b << endl;
            break;
        case 2:
            cout << "Result: " << a - b << endl;
            break;
        case 3:
            cout << "Result: " << a * b << endl;
            break;
        case 4:
            cout << "Result: " << static_cast<float>(a) / b << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
