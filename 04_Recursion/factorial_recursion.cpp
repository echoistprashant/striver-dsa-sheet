/*
Problem: Factorial Using Recursion
Platform: Striver DSA Sheet
Topic: Recursion
Approach: Multiply n with factorial of n - 1

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;

    cout << factorial(n) << endl;
    return 0;
}
