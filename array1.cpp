#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getMax(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int getMin(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int arr[5]={4,12,8,10,6};
    
    
    cout<<"maximum number is: "<<getMax(arr,5)<<endl;
    cout<<"minimum number is: "<<getMin(arr,5);

  return 0;
}