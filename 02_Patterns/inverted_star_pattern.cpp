/*
Problem: Inverted Star Pattern
Platform: Striver DSA Sheet
Topic: Patterns
Approach: Decrease the number of stars in each row

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void printInvertedStarPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    printInvertedStarPattern(n);
    return 0;
}
