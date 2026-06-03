/*
Problem: Diamond Star Pattern
Platform: Striver DSA Sheet
Topic: Patterns
Approach: Combine pyramid and inverted pyramid patterns

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void printPyramid(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void printInvertedPyramid(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }
        for (int j = 0; j < 2 * n - 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    printPyramid(n);
    printInvertedPyramid(n);
    return 0;
}
