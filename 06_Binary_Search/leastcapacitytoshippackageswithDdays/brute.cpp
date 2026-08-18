// Time Complexity — O(n × (sum - max))
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

int daysReq(vector<int> &arr, int days){
    int n = arr.size();
    int max = *max_element(arr.begin(), arr.end());
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }

    for(int j = max; j<= sum; j++){
        int daysreq = daysRequired(arr, j);
        if(daysreq <= days){
            return j;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;

    int ans = daysReq(arr, days);

    cout << "Minimum ship capacity: " << ans << endl;

    return 0;
}