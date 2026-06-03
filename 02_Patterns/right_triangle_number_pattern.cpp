/*
Problem: Right Triangle Number Pattern
Platform: Striver DSA Sheet
Topic: Patterns
Approach: Print numbers from 1 to current row number

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void printRightTriangleNumberPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    printRightTriangleNumberPattern(n);
    return 0;
}
