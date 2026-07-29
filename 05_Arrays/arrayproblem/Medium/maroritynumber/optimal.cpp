// Moore's voting algoritm

// time compelxity =O(n)
// space complexity = O(1)

#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& v){
    int cnt = 0;
    int el;
    for(int i = 0; i < v.size(); i++){
        if(cnt == 0){
            el = v[i];
        }
        if(el == v[i]){
            cnt++;
        }
        else{
            cnt--;
        }

        }
        int c = 0;
        for(int i = 0; i < v.size(); i++){
            if(v[i] == el){
                c++;
            
        }
    }
    if(c > v.size()/2){
        return el;
    }
    return -1;

}

int main() {
    vector<int> arr = {2, 2, 1, 1, 1, 1, 1, 1};
    cout << majorityElement(arr) << endl;
    return 0;

}