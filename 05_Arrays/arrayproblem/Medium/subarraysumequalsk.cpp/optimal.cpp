// Time Complexity: O(n)
// Space Complexity: O(n)


#include<bits/stdc++.h>
using namespace std;

int findSubarraywithgivensum(vector<int> &arr, int k){
    unordered_map<int,int> mpp;
    mpp[0] = 1;
    int preSum = 0;
    int count = 0;
    for(int i =0; i<arr.size(); i++){
        preSum += arr[i];
        int remove = preSum - k;
        count += mpp[remove];
        mpp[preSum]++;
    
    }
    return count;
}

int main()
{
    vector<int> arr = {1, 2, 1, 3, 2};

    int k = 3;

    cout << findSubarraywithgivensum(arr, k);

    return 0;
}