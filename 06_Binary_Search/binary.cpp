// time complexity = O(log n)
// space complexity = O(1)

#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int n,int target){
    n = arr.size();
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid= (high + low)/2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) low = mid+1;
        else high = mid-1;
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int n = arr.size();
    int target = 7;

    cout << binarySearch(arr, n, target);

    return 0;
}