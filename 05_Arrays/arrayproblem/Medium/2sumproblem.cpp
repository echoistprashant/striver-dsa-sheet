//time complexity = O(n log n)
//space complexity = O(n)


#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    map<int, int> mp;

    int n = nums.size();

    for(int i = 0; i < n; i++){
        int num = nums[i];
        int diff = target - num;

        if(mp.find(diff) != mp.end()){
            return {mp[diff], i};
        }

        mp[num] = i;
    }

    return {-1, -1};
}

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 17;

    vector<int> ans = twoSum(nums, target);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}