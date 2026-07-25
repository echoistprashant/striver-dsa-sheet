// time complexity for this is = O(n)



#include<iostream>
using namespace std;

int largest(int arr[], int n){
    int largest = arr[0];
    for(int i = 0;i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << largest << endl;
    return largest;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }

    cout << largest(arr, n) << endl;
    return 0;
}