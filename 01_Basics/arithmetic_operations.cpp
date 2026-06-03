/*
Problem: Arithmetic Operations on Two Numbers
Platform: Striver DSA Sheet
Topic: Basics
Approach: Use arithmetic operators to calculate sum, difference, product, division, and modulo

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << "Sum: " << a + b << endl;
    cout << "Sub: " << a - b << endl;
    cout << "Mul: " << a * b << endl;
    cout << "Div: " << static_cast<float>(a) / b << endl;
    cout << "Mod: " << a % b << endl;

    return 0;
}
