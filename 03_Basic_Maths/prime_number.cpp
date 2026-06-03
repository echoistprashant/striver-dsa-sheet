/*
Problem: Check Prime Number
Platform: Striver DSA Sheet
Topic: Basic Maths
Approach: Count divisors up to square root of n

Time Complexity: O(sqrt(n))
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

bool isPrime(int n) {
    int count = 0;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++;
            if (n / i != i) {
                count++;
            }
        }
    }

    return count == 2;
}

int main() {
    int n;
    cin >> n;

    if (isPrime(n)) {
        cout << "prime" << endl;
    } else {
        cout << "not prime" << endl;
    }

    return 0;
}
