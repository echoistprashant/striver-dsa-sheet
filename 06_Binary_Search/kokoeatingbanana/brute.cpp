// Time: O(n * max(arr))
// Space: O(1)

#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int> &arr)
{
    int maxi = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        maxi = max(maxi, arr[i]);
    }

    return maxi;
}

long long calculateTotalHours(vector<int> &arr, int hours)
{
    long long totalHours = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        totalHours += (arr[i] + hours - 1) / hours;
    }

    return totalHours;
}

int minimumToEatBanana(vector<int> &arr, int h)
{
    int maxBananas = findMax(arr);

    for (int speed = 1; speed <= maxBananas; speed++)
    {
        long long totalHours = calculateTotalHours(arr, speed);

        if (totalHours <= h)
        {
            return speed;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {3, 6, 7, 11};
    int h = 8;

    cout << minimumToEatBanana(arr, h) << endl;

    return 0;
}