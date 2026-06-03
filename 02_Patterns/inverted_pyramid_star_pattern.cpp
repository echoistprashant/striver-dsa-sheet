/*
Problem: Inverted Pyramid Star Pattern
Platform: Striver DSA Sheet
Topic: Patterns
Approach: Print increasing spaces and decreasing stars

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void printInvertedPyramidStarPattern(int n) {
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

    printInvertedPyramidStarPattern(n);
    return 0;
}
