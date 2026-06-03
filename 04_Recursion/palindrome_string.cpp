/*
Problem: Palindrome String Using Recursion
Platform: Striver DSA Sheet
Topic: Recursion
Approach: Compare opposite characters recursively

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <string>
using namespace std;

bool isPalindromeString(int index, const string& s) {
    if (index >= static_cast<int>(s.size()) / 2) {
        return true;
    }

    if (s[index] != s[s.size() - index - 1]) {
        return false;
    }

    return isPalindromeString(index + 1, s);
}

int main() {
    string s;
    cin >> s;

    cout << isPalindromeString(0, s) << endl;
    return 0;
}
