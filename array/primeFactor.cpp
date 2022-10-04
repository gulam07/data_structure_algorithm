#include<bits/stdc++.h>

using namespace std;
bool prime(int n){
    
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int l,r;
    cin>>l>>r;
    int sum=0;
    while(l<=r){
        if(l==1){
            sum=1;
        }
        for(int i=2;i<=l;i++){
            if(l%i==0){
                if(prime(i)){
                sum=sum+i;
                }
            }
        }
        l++;
    }

    cout<<sum<<endl;
}