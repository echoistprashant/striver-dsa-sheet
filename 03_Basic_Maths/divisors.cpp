/*
Problem: Print All Divisors
Platform: Striver DSA Sheet
Topic: Basic Maths
Approach: Check divisors up to square root and sort the result

Time Complexity: O(sqrt(n) + d log d), where d is the number of divisors
Space Complexity: O(d)
*/

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void printDivisors(int n) {
    vector<int> divisors;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    for (int divisor : divisors) {
        cout << divisor << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    printDivisors(n);
    return 0;
}
