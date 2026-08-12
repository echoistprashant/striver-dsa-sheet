// time complexity = O(logn)
// space complexity = O(1)


#include<bits/stdc++.h>
using namespace std;


int sqrtRoot(int n){
    int left = 1;
    int right = n/2;
    int ans = 0;
    if(n<2) return n;
    while(left <= right){
        long long mid = left + (right - left)/2;
       
        if(mid*mid <= n){
            ans = mid;
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    cout << sqrtRoot(n);
    return 0;

}