//Time Complexity: O(n²)
// Space Complexity: O(n²) (because of the extra matrix ans)

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix, int n){
    vector<vector<int>> ans(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[j][n-i-1]=matrix[i][j];

        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

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