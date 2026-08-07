// Time Complexity: O(n²)
// Space Complexity: O(1)


#include<bits/stdc++.h>
using namespace std;


int countSubarray(vector<int> &arr, int k){
    int n = arr.size();
    int count = 0;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            if(sum == k) count++;
        }
    }
    return count;

}

int main()
{
    vector<int> arr = {1, 2, 1, 3, 2};

    int k = 3;

    cout << countSubarray(arr, k);

    return 0;
}
