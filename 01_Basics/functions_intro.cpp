/*
Problem: Functions Intro
Platform: Striver DSA Sheet
Topic: Basics
Approach: Create and call simple functions

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void printIntro() {
    cout << "Name: Prashant Yadav" << endl;
    cout << "I want to become a 50 LPA employee in 7 months" << endl;
}

int sum(int a, int b) {
    return a + b;
}

int main() {
    printIntro();
    printIntro();

    int result = sum(9, 5);
    cout << result << endl;

    return 0;
}
