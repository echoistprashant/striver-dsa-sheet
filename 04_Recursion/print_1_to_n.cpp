/*
Problem: Print 1 to N
Platform: Striver DSA Sheet
Topic: Recursion
Approach: Print current number and recursively move forward

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
using namespace std;

void printOneToN(int current, int n) {
    if (current > n) {
        return;
    }

    cout << current << endl;
    printOneToN(current + 1, n);
}

int main() {
    int n;
    cin >> n;

    printOneToN(1, n);
    return 0;
}
