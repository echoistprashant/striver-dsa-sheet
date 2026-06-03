/*
Problem: Sum of First N Numbers
Platform: Striver DSA Sheet
Topic: Recursion
Approach: Use recursion to add n with the sum of first n - 1 numbers

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
using namespace std;

int sumOfFirstNNumbers(int n) {
    if (n == 0) {
        return 0;
    }

    return n + sumOfFirstNNumbers(n - 1);
}

int main() {
    int n;
    cin >> n;

    cout << sumOfFirstNNumbers(n) << endl;
    return 0;
}
