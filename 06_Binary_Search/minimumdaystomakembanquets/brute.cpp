// Time Complexity = O(n × max(arr) - min(arr))
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

int minDays(vector<int> &arr, int m, int k)
{
    int mini = *min_element(arr.begin(), arr.end());
    int maxi = *max_element(arr.begin(), arr.end());

    for (int i = mini; i <= maxi; i++)
    {
        if (possible(arr, m, k, i))
        {
            return i;
        }
    }

    return -1;
}