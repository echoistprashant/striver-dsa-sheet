// Better

// Time complexity = O(N+NLOGN)
// Space complexity = O(N)

#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& v){
    map<int,int> mpp;
    for(int i =0; i< v.size(); i++){
        mpp[v[i]]++;
    }
    for(auto it: mpp){
        if(it.second > v.size()/2){
            return it.first;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 1, 1, 1};
    cout << majorityElement(arr) << endl;
    return 0;

}