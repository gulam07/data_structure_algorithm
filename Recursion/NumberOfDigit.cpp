#include<iostream>

using namespace std;

int count(int n){
    if(n==0){
        return 0;
    }
    int smallAns=count(n/10);
    return 1+smallAns;
}

int main(){
    int n;
    cin>>n;
    cout<<count(n);
}