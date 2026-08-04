// Time complexilty = O(n^2)
// Space complexity = O(1)


#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            maxi = max(maxi,sum);
        }
    }
    return maxi;

}

int main() {
    int arr[] = {-2, -3, 4, -1, -2, 1,5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<maxSubarraySum(arr,n);
    return 0;

}