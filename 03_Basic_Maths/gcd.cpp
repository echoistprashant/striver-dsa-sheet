/*
Problem: GCD / HCF of Two Numbers
Platform: Striver DSA Sheet
Topic: Basic Maths
Approach: Euclidean Algorithm

Time Complexity: O(log(min(a, b)))
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }

    if (a == 0) {
        return b;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << endl;
    return 0;
}
