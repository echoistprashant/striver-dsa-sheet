//Time: O(log n)
//Space: O(1)

#include<bits/stdc++.h>
using namespace std;

int peakElement(vector<int> &arr, int n){
    n = arr.size();
    if(arr[0] > arr[1]) return arr[0];
    if(arr[n-1] > arr[n-2]) return arr[n-1];
    int low = 1;
    int high = n-2;
    while (low <=  high){
        int mid = (high + low)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return arr[mid];
        if(arr[mid] > arr[mid + 1]){
            high = mid - 1;

        }else {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 6, 5, 2};
    int n = arr.size();

    cout << "Peak element: " << peakElement(arr, n) << endl;

    return 0;
}