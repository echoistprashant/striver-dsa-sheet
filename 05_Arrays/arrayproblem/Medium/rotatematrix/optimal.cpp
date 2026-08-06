//Time Complexity: O(n²)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
    return matrix;
}

int main()
{
    vector<vector<int>> matrix = {
        {8, 2, 3},
        {4, 8, 6},
        {7, 8, 9}};

    int n = matrix.size();

    vector<vector<int>> ans = rotateMatrix(matrix, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}