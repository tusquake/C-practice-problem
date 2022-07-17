#include<bits/stdc++.h>
using namespace std;

char match(char a,char b){
    if(a==b)
    return a;
    else if(a=='R'&& b=='P' || a=='P'&& b=='R'){
        return 'P';
    }
    else if(a=='R'&&b=='S'|| a=='S'&&b=='R'){
        return 'S';
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        vector<char> dp_r(n+1);
        vector<char> dp_p(n+1);
        vector<char> dp_n(n+1);

        vector<char> ans(n+1);

        ans[n] = s[n-1];#
        
    }