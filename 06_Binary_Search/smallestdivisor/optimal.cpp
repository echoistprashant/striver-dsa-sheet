// Time  = O(n log M)
// Space = O(1)

#include<bits/stdc++.h>
using namespace std;


int sumbyD(vector<int> &arr, int d){
    int n = arr.size();
    int sum = 0;
    for(int num:arr){
        sum += ceil((double)num/ d);

    }
    return sum;
}

int smallestDivisor(vector<int> &arr, int threshold){
    if(arr.size() > threshold) return -1;
    int low = 1;
    int high = *max_element(arr.begin(), arr.end());
    while(low <= high){
        int mid = (high + low)/2;
        int sum = sumbyD(arr, mid);
        if(sum <= threshold){
            high = mid -1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    vector<int> arr = {1, 2, 5, 9};
    int threshold = 6;

    cout << "Smallest divisor: " << smallestDivisor(arr, threshold) << endl;

    return 0;
}