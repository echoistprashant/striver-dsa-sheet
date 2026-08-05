// time complexity = O(n) + O(n log n)
// space complexity = O(n)

#include <bits/stdc++.h>
using namespace std;


vector<int> leader(vector<int> &a){
    int n = a.size();
    vector<int> ans;
    int maxi = INT_MIN;
    for(int i = n-1; i >= 0; i--){
        if(a[i] >= maxi){
            ans.push_back(a[i]);
        }
        maxi = max(maxi, a[i]);
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};

    vector<int> ans = leader(arr);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}