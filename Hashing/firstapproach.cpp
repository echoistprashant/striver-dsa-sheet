//finding the occurence of number in an array 

#include<iostream>
using namespace std;

int freq(int num ,int n,int arr[]){
    int cnt = 0;
    for(int i = 0;i < n; i++){
        if (arr[i] == num){
            cnt = cnt + 1;

        }
        
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int num;
    cin >> num;
    cout << freq(num,n,arr);
    return 0;

}