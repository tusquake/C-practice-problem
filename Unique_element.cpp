#include<bits/stdc++.h>
using namespace std;

int uniqueelement(int arr[],int m){
    int x = 0;
    for(int i =0;i<m;i++){
        x^=arr[i];
    }
    return x;
}

int main(){
    int m,n;
    int arr[] = {1,2,3,2,1,3,4};
    m = sizeof(arr)/sizeof(arr[0]);
    n = uniqueelement(arr,m);
    cout<<n<<endl;
    
}