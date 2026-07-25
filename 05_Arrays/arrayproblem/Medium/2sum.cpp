// time complexity = O(n)
// space complexity  O(1)


#include<bits/stdc++.h>
using namespace std;

string read(int n, vector<int>book, int target){
    int left =0;
    int right = n-1;
    sort(book.begin(), book.end());
    while (left < right)
    {
        int sum = book[left] + book[right];
        if(sum == target){
            return "YES";
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
        }
    return "NO";
    }
    
int main() {
    int n;
    cin >> n;
    vector<int> book(n);
    for(int i = 0; i < n; i++){
        cin >> book[i];
    }
    int target;
    cin >> target;
    cout << read(n, book, target) << endl;
    return 0;
}