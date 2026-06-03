/*
Problem: Extract Digits
Platform: Striver DSA Sheet
Topic: Basic Maths
Approach: Repeatedly take modulo 10 and divide by 10

Time Complexity: O(log10(n))
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void extractDigits(int n) {
    if (n == 0) {
        cout << 0 << endl;
        return;
    }

    while (n > 0) {
        int digit = n % 10;
        cout << digit << endl;
        n = n / 10;
    }
}

int main() {
    int n;
    cin >> n;

    extractDigits(n);
    return 0;
}
