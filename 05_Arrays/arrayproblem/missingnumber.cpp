#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n){

    int sum = 0;

    for(int i = 0; i < n - 1; i++){
        sum += arr[i];
    }

    long long S = (n * (n + 1)) / 2;

    return S - sum;
}

int main(){

    int arr[] = {1,2,3,5,6,7,8};

    int n = sizeof(arr) / sizeof(arr[0]) + 1;

    cout << missingNumber(arr, n);

    return 0;
}