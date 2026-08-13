// Time: O(n × max(nums))
// Space: O(1)


#include<bits/stdc++.h>
using namespace std;


int smallestDivisor(vector<int> &nums, int threshold){
    int n = nums.size();
    int high = *max_element(nums.begin(), nums.end());
    for(int d = 1; d < high; d++){
        int sum = 0;
        for(int i =0; i<n; i++){
            sum  += ceil(nums[i]/d);
            
        }
        if(sum <= threshold) return d;
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 5, 9};
    int threshold = 6;

    cout << "Smallest divisor: " << smallestDivisor(nums, threshold) << endl;

    return 0;
}