#include<bits/stdc++.h>
using namespace std;

char battle(char a,char b){
    if(a==b){
        return a;
    }
    else if((a=='R'&&b=='P')||(a=='P'&&b=='R')){
        return 'P';
    }
    else if((a=='P'&&b=='S')||(a=='S'&& b=='P')){
        return 'S';
    }
    else{
        return 'R';
    }
}

int main(){
    int t,n;
    string str;
    cin>>t;
    while(t--)}{
        cin>>n>>str;
        vector<char> result(n);
        if(n==1){
            cout<<str[0]<<"\n";
        }
        else{
            vector<char> R(n-1);
            vector<char> P(n-1);
            vector<char> S(n-1);
            char temp;
            result[n-1] = str(n-1);
            R[n-2] = 
        }
    }
}