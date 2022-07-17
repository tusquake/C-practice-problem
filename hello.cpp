#include<bits/stdc++.h>
using namespace std;

void hello(int n){
    // if(n==0){
    //     return 0;

    // }
    // hello(n-1);
    cout<<"Hello " <<n<<endl;
}

int sum(int a,int b){
    int c;
    c = a+b;
    return c;
}

int main(){
    int x,y;
    cin>>x>>y;
    hello(x);
    cout<<"The sum of two numbers is : "<<sum(x,y);
}