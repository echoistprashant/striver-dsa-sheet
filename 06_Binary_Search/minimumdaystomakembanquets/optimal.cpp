// Time Complexity = O(n log max(arr) - min(arr))
// Space Complexity = O(1)


#include <bits/stdc++.h>
using namespace std;


bool possible(vector<int> &arr, int m, int k, int days)
{
    int n = arr.size();

    if ((long long)m * k > n)
        return false;

    int cnt = 0;
    int banquets = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= days)
        {
            cnt++;
        }
        else
        {
            banquets += cnt / k;
            cnt = 0;
        }
    }

    banquets += cnt / k;

    return banquets >= m;
}

int minDays(vector<int> &arr, int m, int k){
    int n = arr.size();
    int low = *min_element(arr.begin(), arr.end());
    int high = *max_element(arr.begin(), arr.end());
    int ans = 0;
    while(low <= high){
        int mid = (high + low)/2;
        if(possible(arr, m, k, mid)){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        

        }
    }
    return ans;

}

int main()
{
    vector<int> arr = {1, 10, 3, 10, 2};

    int m = 2;
    int k = 2;

    cout << "Minimum days: " << minDays(arr, m, k) << endl;

    return 0;
}