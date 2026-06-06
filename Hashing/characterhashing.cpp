#include<iostream>
#include<string>
using namespace std;
// first approach 
int freq(char c,string s){
    int cnt = 0;
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[i]==c){
            cnt = cnt+1;
        }
    }
    return cnt;
}

int main() {
    string s;
    cin >> s;
    char c;
    cin >> c;
    cout << freq(c,s)<<endl;
    return 0;
}


