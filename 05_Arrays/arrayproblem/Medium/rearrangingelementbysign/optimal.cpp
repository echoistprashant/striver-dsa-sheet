// time complexity = O(n)
// space complexity = O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> arrange(vector<int> &arr, int n)
{

    vector<int> ans(n);

    int posindex = 0;
    int negindex = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            ans[posindex] = arr[i];
            posindex += 2;
        }
        else
        {
            ans[negindex] = arr[i];
            negindex += 2;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, -4, -1, -4};
    int n = arr.size();

    vector<int> ans = arrange(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
} 