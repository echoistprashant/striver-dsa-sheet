// Time complexilty = O(n^3)
// Space complexity = O(1)


#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                sum += arr[k];
                
            }
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