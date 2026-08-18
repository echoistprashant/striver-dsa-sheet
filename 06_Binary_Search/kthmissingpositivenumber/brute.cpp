// TC: O(n × max)
// SC: O(1)

#include<bits/stdc++.h>
using namespace std;


int findKthPositive(vector<int>& arr, int k) {
    int count = 0;
    int num = 1;

    while(count < k) {
        bool found = false;

        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == num) {
                found = true;
                break;
            }
        }

        if(!found) {
            count++;
        }

        if(count == k) {
            return num;
        }

        num++;
    }

    return -1;
}
    
    int main() {
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;

    int ans = findKthPositive(arr, k);

    cout << "Kth missing positive number: " << ans << endl;

    return 0;
}