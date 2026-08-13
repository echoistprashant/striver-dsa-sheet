// Time: O(n log M)
// Space: O(1)

#include<bits/stdc++.h>
using namespace std;


int findMax(vector<int> &arr){
    int n = arr.size();
    int maxi = INT_MIN;
    for(int i =0; i<n; i++){
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int calculateTotalHours(vector<int> &arr, int hours){
    int n = arr.size();
    int totalHours = 0;
    for(int i = 0; i < n;i++){
        totalHours += ceil((double)arr[i]/hours);
    }
    return totalHours;

}

int minimumToEatBanana(vector<int> &arr, int h){
    int low = 1; 
    int high = findMax(arr);
    int ans = INT_MAX;
    while(low <= high){
        int mid = (high + low)/2;
        int totalHours = calculateTotalHours(arr, mid);
        if(totalHours <= h){
            ans = min(ans, mid);
            high = mid -1;
        } 
        else{
            low = mid + 1;
        }
    }
    return ans;

}

int main()
{
    vector<int> arr = {3, 6, 7, 11};
    int h = 8;

    cout << minimumToEatBanana(arr, h) << endl;

    return 0;
}