#include<iostream>

using namespace std;

int multi(int n,int m){
    if(m==0){
        return 0;
    }

    int smallAns=multi(n,m-1);
    return n+smallAns;
}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<multi(n,m);
}