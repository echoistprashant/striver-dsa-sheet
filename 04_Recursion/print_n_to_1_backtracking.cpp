/*
Problem: Print N to 1 Using Backtracking
Platform: Striver DSA Sheet
Topic: Recursion
Approach: Move from 1 to n recursively, then print while returning

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
using namespace std;

void printNToOneBacktracking(int current, int n) {
    if (current > n) {
        return;
    }

    printNToOneBacktracking(current + 1, n);
    cout << current << endl;
}

int main() {
    int n;
    cin >> n;

    printNToOneBacktracking(1, n);
    return 0;
}
