//Complexity

// Binary search → O(log m)
// Power calculation → O(n)
// Total → O(n log m)
// Space → O(1)


#include<bits/stdc++.h>
using namespace std;


int nthRoot(int n , int m){
    int left = 1;
    int right = m;

    while(left <= right){
        long long mid = left + (right - left)/2;

        long long ans = 1;

        for(int i = 0; i < n; i++ ){
            ans = ans * mid;
            if (ans > m) break;
        }
        if(ans == m) return mid;
        else if(ans < m ) left = mid +1;
        else right = mid -1;
    }
}


int main() {
    int n ;
    cin >> n;
    int m;
    cin >> m;
    cout << nthRoot(n,m);
    return 0;
}