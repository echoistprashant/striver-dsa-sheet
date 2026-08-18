// Time Complexity — O(n × log(sum - max))
// SC = O(1)

#include<bits/stdc++.h>
using namespace std;


int daysRequired(vector<int> &wt, int cap){
    int days =1;
    int load = 0;
    for(int i = 0; i<wt.size(); i++){
        if(load + wt[i] > cap){
            days++;
            load = wt[i];
        }
        else{
            load += wt[i];
        }
    }
    return days;
}

int reqDays(vector<int> &arr, int days){
    int low = *max_element(arr.begin(), arr.end());
    int sum = 0;
    for(int i = 0; i<arr.size(); i++){
        sum += arr[i];
    }
    int high = sum;
    
    while(low <= high){
        int mid = (low + high)/2;
        int daysreq = daysRequired(arr, mid);
        if(daysreq <= days){
            high = mid -1;
        }
        else{
            low = mid + 1;
        }
    }

    return low;

}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;

    int ans = reqDays(arr, days);

    cout << "Minimum ship capacity: " << ans << endl;

    return 0;
}