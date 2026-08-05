// TIME COMPLEXITY = O(N) + O(NLOGN)
// SPACE COMPLEXITY = O(N)


#include <bits/stdc++.h>
using namespace std;

int longestConsecutiveSequence(vector<int> &arr) {
    int n = arr.size();

    if (n == 0)
        return 0;

    sort(arr.begin(), arr.end());

    int longest = 1;
    int current = 1;
    int lastSmallest = arr[0];

    for (int i = 1; i < n; i++) {

        if (arr[i] == lastSmallest) {
            continue;
        }

        else if (arr[i] == lastSmallest + 1) {
            current++;
            lastSmallest = arr[i];
        }

        else {
            current = 1;
            lastSmallest = arr[i];
        }

        longest = max(longest, current);
    }

    return longest;
}

int main() {
    vector<int> arr = {100, 4, 200, 1, 3, 2};

    int ans = longestConsecutiveSequence(arr);

    cout << "Length of Longest Consecutive Sequence: " << ans << endl;

    return 0;
}