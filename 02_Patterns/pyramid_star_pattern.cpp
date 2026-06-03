/*
Problem: Pyramid Star Pattern
Platform: Striver DSA Sheet
Topic: Patterns
Approach: Print spaces followed by odd number of stars

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void printPyramidStarPattern(int n) {
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

int main() {
    int n;
    cin >> n;

    printPyramidStarPattern(n);
    return 0;
}
