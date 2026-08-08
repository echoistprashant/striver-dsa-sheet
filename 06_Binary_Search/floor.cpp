// time complexity = O(log n)
// space complexity = O(1)


#include<bits/stdc++.h>
using namespace std;

int floor(vector<int> &arr, int n, int target){
    n = arr.size();
    int low =0;
    int high = n-1;
    int ans = 0;
    while(low <= high){
        int mid = (high + low)/2;
        if(arr[mid] <= target){
            ans = arr[mid];
            low = mid + 1;
        }
        else{
            high = mid - 1;
        
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1,2,3,3,7,8,9,9,9,11};
    int n = arr.size();
    int target = 8;

    cout << floor(arr, n, target);
    return 0;

}