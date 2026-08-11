// time complexity = O(log n)
// Worst case:   O(n)
// space complexity = O(1)

#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> &arr, int target)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == target)
            return true;
        if (arr[low] == arr[mid] && arr[mid] == arr[high])
        {
            low++;
            high--;
            continue;
        }
        if (arr[low] <= arr[mid])
            if (arr[low] <= target && arr[mid] >= target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        else
        {
            if (arr[mid] <= target && target <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return false;
}


int main()
{
    vector<int> arr = {7, 8, 9, 1, 2, 3, 3, 4, 5, 6};
    int target = 18;

    if (binarySearch(arr, target))
        cout << "Target found" << endl;
    else
        cout << "Target not found" << endl;

    return 0;
}
