// Time Complexity: O(2n)
// Space Complexity: O(1)


#include<iostream>
#include <algorithm>
using namespace std;

void leftRotate(int arr[], int d,  int n){
    d = d % n;
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);


}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int d;
    cin >> d;
    leftRotate(arr, d, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}