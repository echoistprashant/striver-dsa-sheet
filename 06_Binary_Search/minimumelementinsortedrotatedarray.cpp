// time complexity = O(log n)
// space complexity = O(1)

#include <bits/stdc++.h>
using namespace std;

int minElement(vector<int> &arr)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > arr[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
        return arr[low];
    }
}


int main() {

    
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

    int ans = minElement(nums);
    cout << ans << endl;

   
   



   

    return 0;
}