// time complexity = O(2mn)
// space complexity = O(m+n) 


#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m)
{
    int col[m] = {0};
    int row[n] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] == 1 || col[j] == 1)
            {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}

int main()
{
    vector<vector<int>> matrix = {
    {1, 2, 3, 4},
    {5, 0, 7, 8},
    {0, 10, 11, 12},
    {13, 14, 15, 0}
    };

    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int>> ans = zeroMatrix(matrix, n, m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}