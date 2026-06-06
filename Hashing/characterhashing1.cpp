#include<iostream>
using namespace std;

int main () {
    string s;
    cin >> s; 

    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++) {
       hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >>c;
        cout<<hash[c-'a']<<endl;
    }

}

// we can also do this by this uisng
// int hash[256] = {0};
// for(int i; i<s.size();i++){
//   hash][s[i]]++;
// ]

// cout << hash[s[c]]<<endl;

// if we use this then the result wil be same 

// in case of upper case letter on the place of 'a' we can use 'A'