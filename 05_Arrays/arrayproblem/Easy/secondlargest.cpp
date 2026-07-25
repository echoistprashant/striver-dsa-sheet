// time complexity for this is = O(n+n) = O(2n)

// BETTER APPROCH 


#include<iostream>
using namespace std;

int secondlargest(int arr[], int n){
    int largest = arr[0];
    int secondlargest = arr[0];
    for (int i; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
        
        for (int i; i < n; i++){
            if (arr[i] > secondlargest && arr[i] < largest){
                secondlargest = arr[i];
            }
        } 

    }
    return secondlargest;
    
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << secondlargest(arr, n) << endl;
    return 0;
}