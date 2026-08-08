// time complexity = O(log n)
// space complexity = O(1)

#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int low, int high, int target){
    if(low>high) return -1;
    int mid = (high + low)/2;
    if(arr[mid] == target) return mid;
    else if(target > arr[mid]) return binarySearch(arr, mid+1, high, target);
    else return binarySearch(arr,low, mid-1, target);
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int n = arr.size();
    int target = 9;

    cout << binarySearch(arr,0,n-1, target);

    return 0;
}