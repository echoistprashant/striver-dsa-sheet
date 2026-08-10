// Time Complexity:  O(n)
// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;


pair<int,int> occurance(vector<int> &arr, int target){
    int n = arr.size();
    int findex = -1;
    int lindex = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] == target){
            if(findex == -1)  findex = i;
            else lindex = i;
        }
    } 
    return {findex, lindex};
}

int main() {
    vector<int> arr = {1,2,3,3,7,8,9,9,9,11};
     int target = 2;
      pair<int, int> ans = occurance(arr, target);
     cout << ans.first << " " << ans.second << endl;
     return 0;
}