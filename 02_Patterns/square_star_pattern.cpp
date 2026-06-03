/*
Problem: Square Star Pattern
Platform: Striver DSA Sheet
Topic: Patterns
Approach: Use nested loops to print an n x n square

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void printSquareStarPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    printSquareStarPattern(n);
    return 0;
}
