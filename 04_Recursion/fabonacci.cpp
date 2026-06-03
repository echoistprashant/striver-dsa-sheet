/*
Problem: fabonacci using multiple recursion
Platform: Striver DSA Sheet
Topic: Recursion
Approach: function will call itself 2 times for f(n-1) and f(n-2) and get added later 

Time Complexity: O(2^n)
Space Complexity: O(n)
*/

#include <iostream>
using namespace std;


int fabonacci(int n){
    if (n<=1){
        return n;
    }
    int last = fabonacci(n-1);
    int secondlast = fabonacci(n-2);
    return last + secondlast;

}

int main() {
    int n;
    cin >> n;
    cout << fabonacci(n) << endl;
    return 0;
}