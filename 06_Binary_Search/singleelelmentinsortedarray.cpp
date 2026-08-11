#include<bits/stdc++.h>
using namespace std;


int singleElement(vector<int> &arr , int n){
    n = arr.size();
    if(n == 1) return arr[0];
    if(arr[0] != arr[1]) return arr[0];
    if(arr[n-1] != arr[n-2]) return arr[n-1];
    int low = 1;
    int high = n-2;
    while(low <= high){
        int mid = (high + low)/2;
        if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) return arr[mid];
        if(mid % 2 ==1 && arr[mid] == arr[mid-1] or mid % 2 == 0 && arr[mid] == arr[mid+1]){
            low = mid + 1;

        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main (){
    vector<int> arr = {1,1,2,3,3,4,4,8,8};
    int n = arr.size();
    cout << singleElement(arr, n);
    return 0;

}