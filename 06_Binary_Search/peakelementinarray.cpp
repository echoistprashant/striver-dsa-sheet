//Time: O(n)
//Space: O(1)


#include<bits/stdc++.h>
using namespace std;


int peakElement(vector<int> &arr,int n){
    n = arr.size();
    if(arr[0] > arr[1]) return arr[0];
    if(arr[n-1] > arr[n-2]) return arr[n-1];
    for(int i =1; i < n-2; i++){
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            return arr[i];
        }
        
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 2};
    int n = arr.size();

    cout << "Peak element: " << peakElement(arr, n) << endl;

    return 0;
}