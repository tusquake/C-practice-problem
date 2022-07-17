#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the size of array : ";
    int n,i;
    int temp=-1;
    cin>>n;
    int arr[n];
    for(i = 0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    int a[n],c=0;
    cout<<"Enter the number to find : ";
    cin>>num;
    for(i=0;i<n;i++){
        if(arr[i]==num){
            a[c]=i;
            c++;
        }
        else{
            temp=-1;
        }
    }
    if(temp==-1){
        cout<<"not present"<<endl;
    }
    else{
        for(int i=0;i<c;i++){
        cout<<"The indexes are : "<<endl<<arr[i];
        }
    }
}
