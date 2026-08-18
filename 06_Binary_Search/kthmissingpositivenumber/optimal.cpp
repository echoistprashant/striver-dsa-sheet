// Time Complexity: O(log n)
// Space Complexity: O(1)



#include<bits/stdc++.h>
using namespace std;

int missing(vector<int> &vec, int k){
    int n = vec.size();
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = (low + high)/2;
        int missing = vec[mid] - (mid + 1);
        if(missing < k){
            low = mid + 1;

        }
        else{
            high = mid -1;
        }
    }
    return high + 1+ k;
}

int main() {
    vector<int> vec = {2, 3, 4, 7, 11};
    int k = 6;

    int ans = missing(vec, k);

    cout << "Kth missing positive number: " << ans << endl;

    return 0;
}