#include<bits/stdc++.h>
using namespace std;

int linearappearce(int arr[], int n){
    int xor1 = 0;
    for(int i = 0; i < n; i++){
        xor1 = xor1 ^ arr[i];
    
    }
    return xor1;
}

int main(){
    int arr[] = {1,1,2,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<linearappearce(arr,n);
}