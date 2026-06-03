/*
Problem: Print 1 to N Using Backtracking
Platform: Striver DSA Sheet
Topic: Recursion
Approach: Reach base case first, then print while returning

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
using namespace std;

void printOneToNBacktracking(int n) {
    if (n < 1) {
        return;
    }

    printOneToNBacktracking(n - 1);
    cout << n << endl;
}

int main() {
    int n;
    cin >> n;

    printOneToNBacktracking(n);
    return 0;
}
