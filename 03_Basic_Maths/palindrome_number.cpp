/*
Problem: Palindrome Number
Platform: Striver DSA Sheet
Topic: Basic Maths
Approach: Reverse the number and compare it with the original number

Time Complexity: O(log10(n))
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

bool isPalindromeNumber(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        int lastDigit = n % 10;
        reversed = reversed * 10 + lastDigit;
        n = n / 10;
    }

    return reversed == original;
}

int main() {
    int n;
    cin >> n;

    if (isPalindromeNumber(n)) {
        cout << "palindrome" << endl;
    } else {
        cout << "not palindrome" << endl;
    }

    return 0;
}
