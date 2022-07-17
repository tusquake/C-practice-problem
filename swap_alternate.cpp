#include<bits/stdc++.h>
using namespace std;

void swap(int arr[],int n){
    int temp;
    for(int i=0;i<n;i=i+2){
        if(i==n){
            return;
        }
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    // int n;
    // cout<<"Enter the size of array : "<<endl;
    // cin>>n;
    // int arr[n];
    swap(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

