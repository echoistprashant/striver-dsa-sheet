// Time complexity = O(n)
// Space complexity = O(1)


#include<iostream>
using namespace std;

int removeDuplicate(int arr[], int n){
    if(n == 0)
        return 0;

    int i = 0;

    for(int j = 1; j < n; j++){
        if(arr[i] != arr[j]){
            arr[i + 1] = arr[j];
            i++;
        }
    }

    return i + 1;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int newSize = removeDuplicate(arr, n);

    cout << newSize << endl;

    for(int i = 0; i < newSize; i++){
        cout << arr[i] << " ";
    }

    return 0;
}