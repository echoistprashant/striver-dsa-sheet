// time complexity = O(n)
// space complexity = O(1)

#include<bits/stdc++.h>
using namespace std;

int stock(vector<int> &prices){
    int mini = prices[0];
    int profit = 0;
    int n = prices.size();
    for(int i = 1; i < n; i++){
        int cost = prices[i]- mini;
        profit = max(profit, cost);
        mini = min(mini,prices[i]);
    }
    return profit ; 
}


int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << stock(prices) << endl;
    return 0;
}