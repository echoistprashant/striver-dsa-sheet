// Your brute-force approach:

// Time:  O(n)
// Space: O(1)


#include<bits/stdc++.h>
using namespace std;


int number(vector<int> &arr){
    int n = arr.size();
    int minimum = arr[0];
    int ind = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] < minimum){
            minimum = arr[i];
            ind = i;

        }
    }
    return ind;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 1, 2, 3};

    cout << "Number of rotations: " << number(arr) << endl;

    return 0;
}