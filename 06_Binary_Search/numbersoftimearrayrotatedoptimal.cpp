

// Time Complexity = O(log n)
// Space Complexity = O(1)

#include <bits/stdc++.h>
using namespace std;

int numberRotation(vector<int> &arr)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] > arr[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }

    return low;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 1, 2, 3};

    cout << "Number of rotations: " << numberRotation(arr) << endl;

    return 0;
}