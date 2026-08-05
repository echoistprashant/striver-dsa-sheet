// time complexity = O(n^2)
// space complexity = O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> leader(vector<int> &arr) {
    int n = arr.size();
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        bool isLeader = true;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                isLeader = false;
                break;
            }
        }

        if (isLeader) {
            ans.push_back(arr[i]);
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};

    vector<int> ans = leader(arr);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}