// Time Complexity: O(n)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;


int missing(vector<int> &arr, int k){
      int n = arr.size();
      for(int i = 0;i < n; i++){
        if(arr[i] <= k){
            k++;
        }
        else{
            break;
        }
      }
      return k;
}

int main() {
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;

    int ans = missing(arr, k);

    cout << "Kth missing positive number: " << ans << endl;

    return 0;
}