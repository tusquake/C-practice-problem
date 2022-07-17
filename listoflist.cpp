#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int num,s =0;
        int h=-1;
        cin>>num;
        map<int,int> c;
        for(int i=0;i<num;i++){
            int x;
            cin>>x;
            c[x]++;
        }
        for(auto j:c)
        {
            if(h<j.second)
            h = j.second;
            s+= j.second;
        }
        if(h==num)
        {
            cout<<"0"<<endl;
        }
            else if(h<=1&&num>=2)
            {
                cout<<"-1"<<endl;
            }
            else{
                cout<<(s-h+1)<<endl;
            }


    }
}