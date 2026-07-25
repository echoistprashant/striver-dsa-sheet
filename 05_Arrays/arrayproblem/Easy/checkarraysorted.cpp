// Time complexity for this is O(n)
// Space complexity is O(1)

#include<iostream>
using namespace std;

void sorted(int arr[], int n){
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            cout << "Not Sorted" << endl;
            return;

        }
        
    }
    cout<< "Sorted" << endl;
}


int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    sorted(arr,n);
    return 0;
}