/*
Problem: Half Diamond Star Pattern
Platform: Striver DSA Sheet
Topic: Patterns
Approach: Increase stars until n, then decrease stars

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void printHalfDiamondStarPattern(int n) {
    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = i;
        if (i > n) {
            stars = 2 * n - i;
        }

        for (int j = 1; j <= stars; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    printHalfDiamondStarPattern(n);
    return 0;
}
