// Time Complexity:  O(log n)
// Space Complexity: O(1)



#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int target, int n) {
    int low = 0;
    int high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= target) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return ans;
}

int upperBound(vector<int> &arr, int target, int n) {
    int low = 0;
    int high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > target) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return ans;
}

pair<int, int> occurance(vector<int> &arr, int target, int n) {

    int lb = lowerBound(arr, target, n);

    if (lb == n || arr[lb] != target)
        return {-1, -1};

    int ub = upperBound(arr, target, n);

    return {lb, ub - 1};
}

int main() {
    vector<int> arr = {1, 2, 3, 3, 7, 8, 9, 9, 9, 11};

    int target = 17;
    int n = arr.size();

    pair<int, int> ans = occurance(arr, target, n);

    cout << ans.first << " " << ans.second << endl;

    return 0;
}