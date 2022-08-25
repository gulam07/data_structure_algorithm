#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string a,b;
    char m[100];
    a="abababa";
    b="ababdjd";
    for(int i=0;i<a.size();i++){
        if(a[i]==b[i]){
            m[i]='B';
        }
        else{
            m[i]='G';
        }
    }
    
    cout<<m;

    


    return 0;
}