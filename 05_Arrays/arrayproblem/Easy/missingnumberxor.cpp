// time complexity is O(n)
// space complexity is O(1)

#include<bits/stdc++.h>
using namespace std;


int missingNumber(int arr[], int N){
    int xor1 = 0;
    int xor2 = 0;
    int n = N -1;
    for(int i =0; i < n; i++){
        xor2 = xor2^arr[i];
        xor1 =- xor1^i+1;
    }
    xor1 = xor1^N;
    return xor1^xor2;

}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << missingNumber(arr, n) << endl;
    return 0;

}