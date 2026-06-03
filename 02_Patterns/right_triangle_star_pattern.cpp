/*
Problem: Right Triangle Star Pattern
Platform: Striver DSA Sheet
Topic: Patterns
Approach: Print stars equal to the current row number

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void printRightTriangleStarPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    printRightTriangleStarPattern(n);
    return 0;
}
