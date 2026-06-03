/*
Problem: Print N to 1
Platform: Striver DSA Sheet
Topic: Recursion
Approach: Print current number and recursively decrement it

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
using namespace std;

void printNToOne(int n) {
    if (n < 1) {
        return;
    }

    cout << n << endl;
    printNToOne(n - 1);
}

int main() {
    int n;
    cin >> n;

    printNToOne(n);
    return 0;
}
