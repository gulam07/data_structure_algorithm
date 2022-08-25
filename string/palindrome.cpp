#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main(){
    int n;
    char arr[100];
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"enter the character"<<endl;
    cin>>arr;
    bool check=1;
    for(int i=0;i<n;i++){
        if(arr[i] != arr[n-1-i]){
            check=0;
            break;
        }
    }
    if(check==1){
        cout<<"yes";
    }else{
        cout<<"no";
    }

   
    return 0;
}