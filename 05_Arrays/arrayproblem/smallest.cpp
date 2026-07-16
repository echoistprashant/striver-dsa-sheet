// time complexity for smallest number in an array is O(n)

#include<iostream>
using namespace std;

int smallest(int arr[], int n){
    int smallest = arr[0];
    for(int i =0; i < n; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    cout << smallest(arr, n) << endl;
    return 0;
    
}