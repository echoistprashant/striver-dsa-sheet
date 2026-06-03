/*
Problem: Print Name N Times
Platform: Striver DSA Sheet
Topic: Recursion
Approach: Print name and recursively move to the next count

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
using namespace std;

void printName(int current, int n) {
    if (current > n) {
        return;
    }

    cout << "prashant" << endl;
    printName(current + 1, n);
}

int main() {
    int n;
    cin >> n;

    printName(1, n);
    return 0;
}
