#include<iostream>

using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    int smallAns=sum(n/10);
    int lastDigit=n%10;
    return smallAns+lastDigit;
}

int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}