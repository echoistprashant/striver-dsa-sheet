/*
Problem: Inverted Number Pattern
Platform: Striver DSA Sheet
Topic: Patterns
Approach: Print numbers from 1 to the decreasing row length

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void printInvertedNumberPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    printInvertedNumberPattern(n);
    return 0;
}
