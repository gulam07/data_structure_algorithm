#include<bits/stdc++.h>

using namespace std;

int power(int n,int x){
    if(x==0){
        return 1;
    }
    int smallAns=power(n,x-1);

    return n*smallAns;
}

int main(){
    int n,x;
    cin>>n>>x;
    cout<<power(n,x);
}