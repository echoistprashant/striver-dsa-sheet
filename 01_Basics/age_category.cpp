/*
Problem: Age Category
Platform: Striver DSA Sheet
Topic: Basics
Approach: Use if-else conditions to classify age

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age >= 0 && age <= 12) {
        cout << "Child" << endl;
    } else if (age <= 19) {
        cout << "Teenager" << endl;
    } else if (age <= 59) {
        cout << "Adult" << endl;
    } else {
        cout << "Senior Citizen" << endl;
    }

    return 0;
}
