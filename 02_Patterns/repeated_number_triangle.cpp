/*
Problem: Repeated Number Triangle
Platform: Striver DSA Sheet
Topic: Patterns
Approach: Print the current row number repeatedly in each row

Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void printRepeatedNumberTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    printRepeatedNumberTriangle(n);
    return 0;
}
