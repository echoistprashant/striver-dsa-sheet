/*
Problem: Reverse a Number
Platform: Striver DSA Sheet
Topic: Basic Maths
Approach: Build reversed number using last digit extraction

Time Complexity: O(log10(n))
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int reversed = 0;

    while (n > 0) {
        int lastDigit = n % 10;
        reversed = reversed * 10 + lastDigit;
        n = n / 10;
    }

    return reversed;
}

int main() {
    int n;
    cin >> n;

    cout << reverseNumber(n) << endl;
    return 0;
}
