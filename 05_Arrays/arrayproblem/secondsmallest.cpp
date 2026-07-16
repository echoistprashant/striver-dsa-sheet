// time complexity for this optimal solution is O(N)

#include <iostream>
#include <climits>
using namespace std;

int secondSmallest(int arr[], int n) {
    int smallest = INT_MAX;
    int ssmallest = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] < smallest) {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < ssmallest) {
            ssmallest = arr[i];
        }
    }

    if(ssmallest == INT_MAX)
        return -1;

    return ssmallest;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << secondSmallest(arr, n);

    return 0;
}