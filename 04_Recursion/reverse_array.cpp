/*
Problem: Reverse Array Using Recursion
Platform: Striver DSA Sheet
Topic: Recursion
Approach: Swap opposite elements recursively

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& arr, int index) {
    int n = arr.size();
    if (index >= n / 2) {
        return;
    }

    swap(arr[index], arr[n - index - 1]);
    reverseArray(arr, index + 1);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, 0);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
