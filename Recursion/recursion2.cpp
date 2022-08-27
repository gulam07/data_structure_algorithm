#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// void print(int arr[],int i){
//     if(i<0){
//         return;
//     }
//     cout<<arr[0]<<" ";
//     print(arr+1,i-1);
// }

int maxNumber(int arr[],int size){
    
    if(size<0){
        return INT_MIN;
    }
    int ans=arr[0];
    int recursionAns=maxNumber(arr+1,size-1);
    ans= max(ans,recursionAns);
    return ans;

}

int main(){
    int arr[]={1,2,8,5,6};
    int size=5;
    // int i=size-1;
    cout<<maxNumber(arr,size);

    return 0;
}