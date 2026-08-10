// Time Complexity:  O(log n)
// Space Complexity: O(1)


#include <bits/stdc++.h>
using namespace std;

int firstOccurance(vector<int> &arr, int target) {
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int first = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return first;
}

int lastOccurance(vector<int> &arr, int target) {
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int last = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return last;
}

int countOccurance(vector<int> &arr, int target) {
    int first = firstOccurance(arr, target);
    int last = lastOccurance(arr, target);

    if (first == -1)
        return 0;

    return last - first + 1;
}

int main() {
    vector<int> arr = {1, 2, 3, 3, 7, 8, 9, 9, 9, 11};

    int target = 9;

    cout << countOccurance(arr, target) << endl;

    return 0;
}