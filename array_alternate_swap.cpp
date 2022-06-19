#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,arr[100];
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the array number"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int j=0;j<n;j=j+2){
        swap(arr[j],arr[j+1]);

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    


    return 0;
}